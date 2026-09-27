#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>

enum TokenType {
    COMMENT,
    SCRIPT_CONTENT,
    STYLE_CONTENT,
    EXPRESSION_CONTENT,
    INLINE_COMMENT,
    BLOCK_COMMENT,
    DIRECTIVE_EXPRESSION,
    FORMATTER_ARGUMENT,
    RAW_TEXT,
    RAW_BRACE_VALUE,
};

typedef struct {
    uint8_t unused;
} Scanner;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_comment(TSLexer *lexer) {
    if (lexer->lookahead != '<') return false;
    advance(lexer);
    if (lexer->lookahead != '!') return false;
    advance(lexer);
    if (lexer->lookahead != '-') return false;
    advance(lexer);
    if (lexer->lookahead != '-') return false;
    advance(lexer);

    unsigned dashes = 0;
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '-') {
            dashes++;
            advance(lexer);
            continue;
        }
        if (lexer->lookahead == '>' && dashes >= 2) {
            advance(lexer);
            lexer->mark_end(lexer);
            lexer->result_symbol = COMMENT;
            return true;
        }
        dashes = 0;
        advance(lexer);
    }
    return false;
}

static bool scan_quoted_string(TSLexer *lexer, int32_t quote) {
    if (lexer->lookahead != quote) return false;
    advance(lexer);
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '\\') {
            advance(lexer);
            if (!lexer->eof(lexer)) advance(lexer);
        } else if (lexer->lookahead == quote) {
            advance(lexer);
            return true;
        } else {
            advance(lexer);
        }
    }
    return false;
}

static bool scan_block_comment(TSLexer *lexer) {
    if (lexer->lookahead != '*') return false;
    advance(lexer);
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '*') {
            advance(lexer);
            if (lexer->lookahead == '/') {
                advance(lexer);
                return true;
            }
        } else {
            advance(lexer);
        }
    }
    return false;
}

static bool scan_line_comment(TSLexer *lexer) {
    if (lexer->lookahead != '/') return false;
    advance(lexer);
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '\n' || lexer->lookahead == '\r') return true;
        advance(lexer);
    }
    return true;
}

static bool scan_template_string(TSLexer *lexer);

static bool scan_balanced_braces(TSLexer *lexer) {
    if (lexer->lookahead != '{') return false;
    unsigned depth = 1;
    advance(lexer);
    while (!lexer->eof(lexer)) {
        switch (lexer->lookahead) {
            case '\'':
            case '"':
                scan_quoted_string(lexer, lexer->lookahead);
                break;
            case '`':
                scan_template_string(lexer);
                break;
            case '/':
                advance(lexer);
                if (lexer->lookahead == '*') {
                    scan_block_comment(lexer);
                } else if (lexer->lookahead == '/') {
                    scan_line_comment(lexer);
                }
                break;
            case '{':
                depth++;
                advance(lexer);
                break;
            case '}':
                depth--;
                advance(lexer);
                if (depth == 0) return true;
                break;
            case '\\':
                advance(lexer);
                if (!lexer->eof(lexer)) advance(lexer);
                break;
            default:
                advance(lexer);
                break;
        }
    }
    return false;
}

static bool scan_template_string(TSLexer *lexer) {
    if (lexer->lookahead != '`') return false;
    advance(lexer);
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '\\') {
            advance(lexer);
            if (!lexer->eof(lexer)) advance(lexer);
        } else if (lexer->lookahead == '`') {
            advance(lexer);
            return true;
        } else if (lexer->lookahead == '$') {
            advance(lexer);
            if (lexer->lookahead == '{') scan_balanced_braces(lexer);
        } else {
            advance(lexer);
        }
    }
    return false;
}

// ---------------------------------------------------------------------------
// Expression scanning
//
// One balanced scanner backs every JavaScript-bearing token in the grammar. It
// mirrors the compiler's parser.LexSkip / parser.splitTopLevel pair
// (compiler/internal/parser/lexskip.go, scan.go): strings, template literals,
// regex literals, and comments are opaque, and (), [], {} nest. The three modes
// differ only in what terminates the token:
//
//   EXPR_INTERP    { expr | formatter }  — stops at a depth-0 '}' OR at a
//                                          depth-0 SINGLE '|' (a run of two or
//                                          more '|' is logical-OR, not a pipe;
//                                          this is splitTopLevel's skipDoubled).
//                                          Every value position uses it (D173
//                                          V1): interpolations, attribute and
//                                          prop values. The {#if}, {:else if},
//                                          {#unless}, {#case}, {#for} and
//                                          {:when} headers use it too, so a
//                                          pipe there — a compile error — is
//                                          split off and flagged.
//   EXPR_DIRECTIVE @click={ … } {#svg …}  — stops at a depth-0 '}' only. Pipes
//                                          are NOT formatters here: a handler
//                                          body is plain JavaScript.
//   EXPR_ARG       currency('$', 2)      — stops at a depth-0 ')' or ',' (and,
//                                          for error recovery, a depth-0 '}').
//
// Regex-vs-division follows LexSkip: a '/' after a token that can END an
// expression is division, otherwise it opens a regex literal. That is what keeps
// the '|' inside /a|b/ out of the formatter split.
// ---------------------------------------------------------------------------

typedef enum {
    EXPR_INTERP,
    EXPR_DIRECTIVE,
    EXPR_ARG,
} ExprMode;

// LexSkip's threaded state, carried through every balanced scan in this file.
typedef struct {
    bool ends_expr;  // prevEndsExpr: the previous token can END an expression
    bool after_dot;  // the last significant byte was '.'
} LexState;

static bool expr_is_ident_start(int32_t c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_' || c == '$';
}

static bool expr_is_ident_char(int32_t c) {
    return expr_is_ident_start(c) || (c >= '0' && c <= '9');
}

// Identifier keywords that CANNOT end an expression, so a '/' right after one
// opens a regex literal. Mirrors lexRegexPrecedingKeywords in lexskip.go.
static bool expr_is_regex_preceding_keyword(const char *word) {
    static const char *const kw[] = {
        "return", "typeof", "instanceof", "in", "of", "void", "delete",
        "new", "do", "else", "yield", "await", "case",
    };
    for (size_t i = 0; i < sizeof(kw) / sizeof(kw[0]); i++) {
        if (strcmp(word, kw[i]) == 0) return true;
    }
    return false;
}

// Consume the rest of a regex literal. Entry: the opening '/' has ALREADY been
// consumed (the caller must advance past it to tell a regex from a comment).
// Escapes are skipped, '/' inside a [...] class is literal, trailing ASCII flag
// letters are consumed. Mirrors lexScanRegexLiteral.
static void scan_regex_body(TSLexer *lexer) {
    bool in_class = false;
    while (!lexer->eof(lexer)) {
        int32_t c = lexer->lookahead;
        if (c == '\\') {
            advance(lexer);
            if (!lexer->eof(lexer)) advance(lexer);
            continue;
        }
        if (in_class) {
            if (c == ']') in_class = false;
            advance(lexer);
            continue;
        }
        if (c == '[') {
            in_class = true;
            advance(lexer);
            continue;
        }
        if (c == '/') {
            advance(lexer);
            while ((lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
                   (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z')) {
                advance(lexer);
            }
            return;
        }
        advance(lexer);
    }
}

// THE shared lexical skip, mirroring parser.LexSkip (lexskip.go). It consumes
// the opaque lexical unit at the current position — a '…'/"…"/`…` string, a
// /re/flags regex literal, a // or /* */ comment, an identifier run, or a ++/--
// update operator — and reports the state that follows it. For any other byte
// it consumes nothing and returns false: the caller processes that byte itself
// (depth tracking, terminators) and folds it in with lex_plain.
//
// Every balanced scan in this file goes through here. Two divergent skippers is
// exactly the failure DOC-COMPILER-DESIGN.md §c warns about.
static bool lex_skip(TSLexer *lexer, LexState *st) {
    int32_t c = lexer->lookahead;

    if (c == '\'' || c == '"') {
        scan_quoted_string(lexer, c);
        st->ends_expr = true;
        st->after_dot = false;
        return true;
    }

    if (c == '`') {
        scan_template_string(lexer);
        st->ends_expr = true;
        st->after_dot = false;
        return true;
    }

    if (c == '/') {
        advance(lexer);
        if (lexer->lookahead == '*') {
            scan_block_comment(lexer);  // comments leave the state alone
            return true;
        }
        if (lexer->lookahead == '/') {
            scan_line_comment(lexer);
            return true;
        }
        if (!st->ends_expr) {
            scan_regex_body(lexer);
            st->ends_expr = true;
        } else {
            st->ends_expr = false;  // division
        }
        st->after_dot = false;
        return true;
    }

    if (expr_is_ident_start(c)) {
        char buf[16];
        size_t n = 0;
        bool overflow = false;
        bool after_dot = st->after_dot;
        while (expr_is_ident_char(lexer->lookahead)) {
            if (n < sizeof(buf) - 1) {
                buf[n++] = (char)lexer->lookahead;
            } else {
                overflow = true;
            }
            advance(lexer);
        }
        buf[n] = '\0';
        // A keyword used as a property name (`.return`) still ends an
        // expression; a bare keyword does not. An identifier too long to be any
        // keyword obviously ends one.
        st->ends_expr = after_dot || overflow || !expr_is_regex_preceding_keyword(buf);
        st->after_dot = false;
        return true;
    }

    if (c == '+' || c == '-') {
        advance(lexer);
        st->after_dot = false;
        if (lexer->lookahead == c) {
            advance(lexer);  // ++ / -- preserve the incoming state
            return true;
        }
        st->ends_expr = false;
        return true;
    }

    if (c == '\\') {
        // Not in LexSkip (a stray backslash is a JS syntax error), but skipping
        // the escaped byte keeps malformed input from derailing the scan.
        advance(lexer);
        if (!lexer->eof(lexer)) advance(lexer);
        st->ends_expr = false;
        st->after_dot = false;
        return true;
    }

    return false;
}

// Fold one plain byte — one lex_skip did NOT consume — into the state.
// Mirrors LexPlainEndsExpr: a digit or a closing )/]/} ends an expression,
// whitespace is insignificant, everything else means the next '/' opens a regex.
static void lex_plain(LexState *st, int32_t c) {
    if (iswspace(c)) return;
    st->after_dot = (c == '.');
    st->ends_expr = (c == ')' || c == ']' || c == '}' || (c >= '0' && c <= '9'));
}

// The exact closer allowlist. '{/' plus one of these plus '}' is a block
// closer, never an expression.
static bool is_closer_keyword(const char *word) {
    static const char *const kw[] = {"if", "unless", "case", "for", "raw", "comment"};
    for (size_t i = 0; i < sizeof(kw) / sizeof(kw[0]); i++) {
        if (strcmp(word, kw[i]) == 0) return true;
    }
    return false;
}

static bool scan_expression(TSLexer *lexer, ExprMode mode, enum TokenType symbol) {
    bool advanced = false;
    int depth = 0;
    LexState st = {false, false};

    while (iswspace(lexer->lookahead)) skip(lexer);

    // Reject the openers the internal lexer owns, so '{#if', '{:else' and '{}'
    // never become an expression.
    if (mode == EXPR_INTERP) {
        if (lexer->lookahead == '#' || lexer->lookahead == ':' ||
            lexer->lookahead == '}') {
            return false;
        }
    } else if (mode == EXPR_DIRECTIVE) {
        if (lexer->lookahead == '}') return false;
    } else {
        if (lexer->lookahead == ')' || lexer->lookahead == ',' ||
            lexer->lookahead == '}') {
            return false;
        }
    }

    lexer->result_symbol = symbol;

    // A leading '/' is the one genuinely ambiguous byte: it opens either a block
    // closer ('{/if}') or a regex literal ('{ /\d+/.test(x) }'). Tell them apart
    // by reading the keyword and requiring the closing brace right after it.
    // Anything else is a regex, and the bytes read while checking are simply the
    // first bytes of its body.
    if (mode == EXPR_INTERP && lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead == '*' || lexer->lookahead == '/') return false;
        while (iswspace(lexer->lookahead)) advance(lexer);
        char kwbuf[16];
        size_t kn = 0;
        while (((lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
                (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z')) &&
               kn < sizeof(kwbuf) - 1) {
            kwbuf[kn++] = (char)lexer->lookahead;
            advance(lexer);
        }
        kwbuf[kn] = '\0';
        if (is_closer_keyword(kwbuf)) {
            while (iswspace(lexer->lookahead)) advance(lexer);
            if (lexer->lookahead == '}') return false;  // a block closer
        }
        scan_regex_body(lexer);
        advanced = true;
        st.ends_expr = true;
    }

    while (!lexer->eof(lexer)) {
        int32_t c = lexer->lookahead;

        // Terminators are checked before the skip so they can never be consumed
        // as part of an opaque unit.
        if (c == '}' && depth == 0) {
            lexer->mark_end(lexer);
            return advanced;
        }
        if (mode == EXPR_ARG && depth == 0 && (c == ')' || c == ',')) {
            lexer->mark_end(lexer);
            return advanced;
        }
        if (mode == EXPR_INTERP && depth == 0 && c == '|') {
            lexer->mark_end(lexer);  // a single '|' ends the expression here
            advance(lexer);
            if (lexer->lookahead == '|') {
                while (lexer->lookahead == '|') advance(lexer);  // logical OR
                advanced = true;
                st.ends_expr = false;
                st.after_dot = false;
                continue;
            }
            return advanced;
        }

        if (lex_skip(lexer, &st)) {
            advanced = true;
            continue;
        }

        if (c == '(' || c == '[' || c == '{') {
            depth++;
        } else if (c == ')' || c == ']' || c == '}') {
            if (depth > 0) depth--;
        }
        advance(lexer);
        advanced = true;
        lex_plain(&st, c);
    }
    return false;
}

// A brace-delimited attribute value inside a {#raw} body (D150). The bytes are
// literal — braces included — but finding where the value ENDS is the one thing
// a raw block cannot do byte-naively, so this mirrors parser.scanBraceGroup
// (scan.go) through the same lex_skip: a '}' inside a string, template literal,
// regex literal, or comment does NOT close the group, and nested braces count.
// Without that, `data-json={ {"text": "}"} }` is cut short at the brace inside
// the string and the remaining bytes derail the tag.
static bool scan_raw_brace_value(TSLexer *lexer) {
    if (lexer->lookahead != '{') return false;
    advance(lexer);

    int depth = 1;
    LexState st = {false, false};
    bool first = true;

    while (!lexer->eof(lexer)) {
        int32_t c = lexer->lookahead;

        // scanBraceGroup treats a '/' immediately after the opening brace as
        // structural only for a complete, known block closer ({/if}, {/for}, …).
        // Every other slash there may open a regex literal, including the
        // no-space `{/}/.test(x)}`.
        if (first) {
            first = false;
            if (c == '/') {
                advance(lexer);
                if (lexer->lookahead == '*') {
                    scan_block_comment(lexer);
                    continue;
                }
                if (lexer->lookahead == '/') {
                    scan_line_comment(lexer);
                    continue;
                }
                char kwbuf[16];
                size_t kn = 0;
                while (((lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
                        (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z')) &&
                       kn < sizeof(kwbuf) - 1) {
                    kwbuf[kn++] = (char)lexer->lookahead;
                    advance(lexer);
                }
                kwbuf[kn] = '\0';
                if (is_closer_keyword(kwbuf)) {
                    while (iswspace(lexer->lookahead)) advance(lexer);
                    if (lexer->lookahead == '}') {
                        // A block closer: let the loop's '}' branch end it.
                        st.ends_expr = true;
                        st.after_dot = false;
                        continue;
                    }
                }
                // Not a closer, so the '/' opened a regex and the bytes read
                // while checking are the first bytes of its body.
                scan_regex_body(lexer);
                st.ends_expr = true;
                st.after_dot = false;
                continue;
            }
        }

        if (lex_skip(lexer, &st)) continue;

        if (c == '{') {
            depth++;
            advance(lexer);
            lex_plain(&st, c);
            continue;
        }
        if (c == '}') {
            depth--;
            advance(lexer);
            if (depth == 0) {
                lexer->mark_end(lexer);
                lexer->result_symbol = RAW_BRACE_VALUE;
                return true;
            }
            lex_plain(&st, c);
            continue;
        }

        advance(lexer);
        lex_plain(&st, c);
    }
    return false;  // unclosed
}

static bool matches_delimiter_char(int32_t lookahead, char expected) {
    return towlower(lookahead) == expected;
}

static bool scan_section_content(TSLexer *lexer, const char *delimiter, enum TokenType symbol) {
    lexer->mark_end(lexer);
    unsigned matched = 0;
    bool advanced = false;

    while (!lexer->eof(lexer)) {
        if (matches_delimiter_char(lexer->lookahead, delimiter[matched])) {
            matched++;
            if (delimiter[matched] == '\0') {
                lexer->result_symbol = symbol;
                return advanced;
            }
            advance(lexer);
        } else {
            matched = 0;
            advance(lexer);
            lexer->mark_end(lexer);
            advanced = true;
        }
    }
    return false;
}

// Puzzle template comments (D70). Name chars for the {#comment} keyword
// boundary are [A-Za-z0-9_\-:.] — the same set the compiler uses.
static bool is_comment_name_char(int32_t c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
           (c >= '0' && c <= '9') || c == '_' || c == '-' || c == ':' || c == '.';
}

// Consume through the next '}' (inclusive). Used for the block opener's own
// closing brace, including any trailing note (which is raw, '{'-insensitive).
static bool consume_to_brace(TSLexer *lexer) {
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '}') {
            advance(lexer);
            return true;
        }
        advance(lexer);
    }
    return false;
}

// Match a literal keyword starting at the current position. Advances over any
// matched characters; returns true only on a full match.
static bool match_word(TSLexer *lexer, const char *kw) {
    for (int i = 0; kw[i] != '\0'; i++) {
        if (lexer->lookahead != (int32_t)kw[i]) return false;
        advance(lexer);
    }
    return true;
}

static bool match_comment_word(TSLexer *lexer) { return match_word(lexer, "comment"); }

// Raw text inside a {#raw} block (D150). Braces are INERT there — no
// interpolation, no block tags, no formatter pipes, no @event binding, and '\{'
// is not an escape — but HTML stays structural, so the token stops at any '<'
// and lets the grammar parse a real element. The only other stop is the first
// valid, whitespace-tolerant {/raw} closer; raw blocks do NOT nest, so a nested
// "{#raw}" in the body is just text.
static bool scan_raw_text(TSLexer *lexer) {
    bool advanced = false;
    lexer->mark_end(lexer);

    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '<') break;  // hand the tag back to the grammar

        if (lexer->lookahead == '{') {
            advance(lexer);
            if (lexer->lookahead == '/') {
                advance(lexer);
                while (iswspace(lexer->lookahead)) advance(lexer);
                if (match_word(lexer, "raw")) {
                    while (iswspace(lexer->lookahead)) advance(lexer);
                    if (lexer->lookahead == '}') break;  // closer; text ends at mark_end
                }
            }
            // Not a closer: everything consumed above is ordinary raw text.
            advanced = true;
            lexer->mark_end(lexer);
            continue;
        }

        advance(lexer);
        advanced = true;
        lexer->mark_end(lexer);
    }

    if (!advanced) return false;
    lexer->result_symbol = RAW_TEXT;
    return true;
}

// Scans a Puzzle template comment. Entry: lookahead == '{'. Handles the
// inline form {## ... } (brace-depth balanced, \{ / \} escapes, NOT
// string-aware) and the block form {#comment} ... {/comment} (raw body,
// nested {#comment} openers counted). Returns false (letting the internal
// lexer take over) for anything that is not a comment: '{ expr }', '{#if}',
// '{#svg}', '{#commentary}', '{#comment-x}', etc.
static bool scan_template_comment(TSLexer *lexer, const bool *valid_symbols) {
    advance(lexer);                                   // consume '{'
    if (lexer->lookahead != '#') return false;
    advance(lexer);                                   // consume '#'

    // ---- inline comment: opens with EXACTLY "{##" ----
    if (lexer->lookahead == '#') {
        if (!valid_symbols[INLINE_COMMENT]) return false;
        advance(lexer);                               // consume second '#'
        unsigned depth = 0;
        while (!lexer->eof(lexer)) {
            int32_t c = lexer->lookahead;
            if (c == '\\') {                          // \{ / \} escape: skip next char
                advance(lexer);
                if (!lexer->eof(lexer)) advance(lexer);
                continue;
            }
            if (c == '{') {
                depth++;
                advance(lexer);
                continue;
            }
            if (c == '}') {
                if (depth == 0) {
                    advance(lexer);                   // consume closing '}'
                    lexer->mark_end(lexer);
                    lexer->result_symbol = INLINE_COMMENT;
                    return true;
                }
                depth--;
                advance(lexer);
                continue;
            }
            advance(lexer);                           // any other char, incl apostrophes
        }
        return false;                                 // unterminated
    }

    // ---- block comment: "{#" ws "comment" <non-name boundary> ... ----
    if (!valid_symbols[BLOCK_COMMENT]) return false;
    while (iswspace(lexer->lookahead)) advance(lexer);
    if (!match_comment_word(lexer)) return false;     // e.g. {#if}, {#svg}
    if (is_comment_name_char(lexer->lookahead)) {
        return false;                                 // {#commentary}, {#comment-x}
    }
    if (!consume_to_brace(lexer)) return false;       // opener's own '}' (+ trailing note)

    // Raw body: nested {#comment} openers increase depth; {/comment} closes.
    unsigned depth = 0;
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead != '{') {
            advance(lexer);
            continue;
        }
        advance(lexer);                               // consume '{'
        if (lexer->lookahead == '#') {
            advance(lexer);
            while (iswspace(lexer->lookahead)) advance(lexer);
            if (match_comment_word(lexer) && !is_comment_name_char(lexer->lookahead)) {
                if (!consume_to_brace(lexer)) return false;
                depth++;                              // nested opener
            }
            // else inert ({##, {#if, {#commentary, ...) — keep scanning
        } else if (lexer->lookahead == '/') {
            advance(lexer);
            while (iswspace(lexer->lookahead)) advance(lexer);
            if (match_comment_word(lexer)) {
                while (iswspace(lexer->lookahead)) advance(lexer);
                if (lexer->lookahead == '}') {
                    advance(lexer);                   // consume closer '}'
                    if (depth == 0) {
                        lexer->mark_end(lexer);
                        lexer->result_symbol = BLOCK_COMMENT;
                        return true;
                    }
                    depth--;
                }
                // else inert ({/comment with no closing brace) — keep scanning
            }
        }
        // else plain '{' — keep scanning
    }
    return false;                                     // unterminated
}

void *tree_sitter_puzzle_external_scanner_create(void) {
    return calloc(1, sizeof(Scanner));
}

bool tree_sitter_puzzle_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    (void)payload;

    if (valid_symbols[SCRIPT_CONTENT]) {
        return scan_section_content(lexer, "</script", SCRIPT_CONTENT);
    }
    if (valid_symbols[STYLE_CONTENT]) {
        return scan_section_content(lexer, "</style", STYLE_CONTENT);
    }
    if (valid_symbols[FORMATTER_ARGUMENT]) {
        return scan_expression(lexer, EXPR_ARG, FORMATTER_ARGUMENT);
    }
    if (valid_symbols[DIRECTIVE_EXPRESSION]) {
        return scan_expression(lexer, EXPR_DIRECTIVE, DIRECTIVE_EXPRESSION);
    }
    if (valid_symbols[EXPRESSION_CONTENT]) {
        return scan_expression(lexer, EXPR_INTERP, EXPRESSION_CONTENT);
    }
    // Deliberately after EXPRESSION_CONTENT: the two are never both valid in a
    // real parse state, so this only ever fires inside a raw start tag, and
    // error recovery (where every symbol is valid) keeps its old behaviour.
    if (valid_symbols[RAW_BRACE_VALUE] && lexer->lookahead == '{') {
        return scan_raw_brace_value(lexer);
    }
    if ((valid_symbols[INLINE_COMMENT] || valid_symbols[BLOCK_COMMENT]) &&
        lexer->lookahead == '{') {
        return scan_template_comment(lexer, valid_symbols);
    }
    // A '<' inside a raw body falls through to the HTML-comment scan below and,
    // failing that, to the internal lexer's tag tokens.
    if (valid_symbols[RAW_TEXT] && lexer->lookahead != '<') {
        return scan_raw_text(lexer);
    }
    if (valid_symbols[COMMENT]) {
        return scan_comment(lexer);
    }
    return false;
}

unsigned tree_sitter_puzzle_external_scanner_serialize(void *payload, char *buffer) {
    (void)payload;
    (void)buffer;
    return 0;
}

void tree_sitter_puzzle_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    (void)payload;
    (void)buffer;
    (void)length;
}

void tree_sitter_puzzle_external_scanner_destroy(void *payload) {
    free(payload);
}
