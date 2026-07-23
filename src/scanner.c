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

static bool scan_expression_content(TSLexer *lexer) {
    while (iswspace(lexer->lookahead)) skip(lexer);

    if (lexer->lookahead == '#' || lexer->lookahead == ':' || lexer->lookahead == '/' ||
        lexer->lookahead == '}') {
        return false;
    }

    bool advanced = false;
    unsigned brace_depth = 0;
    lexer->result_symbol = EXPRESSION_CONTENT;

    while (!lexer->eof(lexer)) {
        switch (lexer->lookahead) {
            case '\'':
            case '"':
                scan_quoted_string(lexer, lexer->lookahead);
                advanced = true;
                break;
            case '`':
                scan_template_string(lexer);
                advanced = true;
                break;
            case '/':
                advance(lexer);
                advanced = true;
                if (lexer->lookahead == '*') {
                    scan_block_comment(lexer);
                } else if (lexer->lookahead == '/') {
                    scan_line_comment(lexer);
                }
                break;
            case '{':
                brace_depth++;
                advance(lexer);
                advanced = true;
                break;
            case '}':
                if (brace_depth == 0) {
                    lexer->mark_end(lexer);
                    return advanced;
                }
                brace_depth--;
                advance(lexer);
                advanced = true;
                break;
            case '\\':
                advance(lexer);
                if (!lexer->eof(lexer)) advance(lexer);
                advanced = true;
                break;
            default:
                advance(lexer);
                advanced = true;
                break;
        }
    }
    return false;
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

// Match the literal word "comment" starting at the current position.
// Advances over any matched characters; returns true only on a full match.
static bool match_comment_word(TSLexer *lexer) {
    const char *kw = "comment";
    for (int i = 0; kw[i] != '\0'; i++) {
        if (lexer->lookahead != (int32_t)kw[i]) return false;
        advance(lexer);
    }
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
    if (valid_symbols[EXPRESSION_CONTENT]) {
        return scan_expression_content(lexer);
    }
    if ((valid_symbols[INLINE_COMMENT] || valid_symbols[BLOCK_COMMENT]) &&
        lexer->lookahead == '{') {
        return scan_template_comment(lexer, valid_symbols);
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
