; These queries make tree-sitter-puzzle useful outside Zed as well (Neovim,
; Helix). They mirror languages/puzzle/highlights.scm pattern for pattern; only
; the capture names differ, because Zed spells the "this is wrong" scope
; @invalid and the editors here spell it @error.
(comment) @comment
(inline_comment) @comment
(block_comment) @comment

(section_tag_name) @tag @keyword

; Composition markers are framework syntax, not user components: <Children>,
; <Slot name="x">, the bare <Slot> router outlet, <Portal>, and the caller-side
; <Snippet> (D166). Every pattern in this block is mutually exclusive with every
; other, so no node ever picks up two captures and the order does not matter.
((start_tag
  name: (tag_name) @tag @keyword)
  (#match? @keyword "^(Children|Slot|Portal|Snippet)$"))

((end_tag
  name: (tag_name) @tag @keyword)
  (#match? @keyword "^(Children|Slot|Portal|Snippet)$"))

; <Children/> and <Slot/> are self-closing; <Portal> and <Snippet> are
; paired-only, so a self-closing spelling of either is a compile error.
((self_closing_element
  name: (tag_name) @tag @keyword)
  (#match? @keyword "^(Children|Slot)$"))

((self_closing_element
  name: (tag_name) @tag @error)
  (#match? @error "^(Portal|Snippet)$"))

; A lowercase <slot>/<children>/<portal> is a compile error steering to the
; capitalized form (D134). <snippet> is deliberately absent: it only steers when
; it carries a `fits` attribute (D166), so on its own it stays ordinary HTML.
((tag_name) @tag @error
  (#match? @error "^(children|slot|portal)$"))

((tag_name) @tag
  (#match? @tag "^[a-z]")
  (#not-match? @tag "^(children|slot|portal)$"))

; A capitalized tag name is a component. The name may be a dotted member path
; — <Frame.Wrapper>, a component-family member (D167) — which `tag_name`
; already accepts; the marker predicates above are anchored, so a dotted root
; like <Slot.Custom> lands here rather than reading as a marker.
((tag_name) @tag @type
  (#match? @type "^[A-Z]")
  (#not-match? @type "^(Children|Slot|Portal|Snippet)$"))

(void_tag_name) @tag
(attribute_name) @attribute
(event_name) @function
(directive_name) @keyword
; A formatter name is an identifier, optionally kebab-case, where every '-'
; starts a word with a letter — the compiler's isFormatterName. formatter_name
; parses looser on purpose, so a malformed one (`| 0`, `| bit-1`, `| fmt.eur`,
; `| fmt-`) is flagged whole here instead of vanishing into an ERROR node.
((formatter_name) @error
  (#not-match? @error "^[A-Za-z_$][A-Za-z0-9_$]*(-[A-Za-z][A-Za-z0-9_$]*)*$"))

; Every well-formed formatter name but the two markup formatters.
((formatter_name) @function
  (#match? @function "^[A-Za-z_$][A-Za-z0-9_$]*(-[A-Za-z][A-Za-z0-9_$]*)*$")
  (#not-any-of? @function "raw" "newline_to_br"))

; The markup formatters `raw` and `newline_to_br` (D174) render HTML, so each
; is legal only as the LAST link of a TEXT interpolation, with no arguments
; (empty parentheses, `raw()`, are no arguments and make no formatter_arguments),
; and not directly inside an element whose content is text (<textarea>,
; <title>, …) or foreign (<svg>, <math>). Every other placement is a compile
; error. The patterns below split the two names into exactly one legal and
; one invalid capture per node. The element test reads the start tag's text
; rather than capturing its tag_name, so the tag keeps its one @tag capture. A
; markup formatter nested deeper inside a text-only element (under an {#if},
; say) is left to the compiler.
([
  (document
    (interpolation (formatter name: (formatter_name) @function .) .))
  (view_element
    (interpolation (formatter name: (formatter_name) @function .) .))
  (skeleton_element
    (interpolation (formatter name: (formatter_name) @function .) .))
  (if_statement
    (interpolation (formatter name: (formatter_name) @function .) .))
  (else_if_block
    (interpolation (formatter name: (formatter_name) @function .) .))
  (else_block
    (interpolation (formatter name: (formatter_name) @function .) .))
  (unless_statement
    (interpolation (formatter name: (formatter_name) @function .) .))
  (when_block
    (interpolation (formatter name: (formatter_name) @function .) .))
  (case_else_block
    (interpolation (formatter name: (formatter_name) @function .) .))
  (for_statement
    (interpolation (formatter name: (formatter_name) @function .) .))
  (for_else_block
    (interpolation (formatter name: (formatter_name) @function .) .))
  ]
  (#any-of? @function "raw" "newline_to_br"))

((element
  (start_tag) @_start
  (interpolation (formatter name: (formatter_name) @function .) .))
  (#any-of? @function "raw" "newline_to_br")
  (#not-match? @_start "^<(script|style|textarea|title|noscript|xmp|iframe|noembed|noframes|plaintext|svg|math)[\\s/>]"))

((element
  (start_tag) @_start
  (interpolation (formatter name: (formatter_name) @error .) .))
  (#any-of? @error "raw" "newline_to_br")
  (#match? @_start "^<(script|style|textarea|title|noscript|xmp|iframe|noembed|noframes|plaintext|svg|math)[\\s/>]"))

; With arguments, or followed by another formatter.
((formatter
  name: (formatter_name) @error
  (formatter_arguments))
  (#any-of? @error "raw" "newline_to_br"))

((interpolation
  (formatter name: (formatter_name) @error .)
  .
  (formatter))
  (#any-of? @error "raw" "newline_to_br"))

; In an attribute value, a component prop or a marker argument.
([
  (normal_attribute
    value: (interpolation (formatter name: (formatter_name) @error .) .))
  (quoted_attribute_value
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_if_statement
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_else_if_block
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_else_block
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_unless_statement
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_when_block
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_case_else_block
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_for_statement
    (interpolation (formatter name: (formatter_name) @error .) .))
  (attribute_for_else_block
    (interpolation (formatter name: (formatter_name) @error .) .))
  ]
  (#any-of? @error "raw" "newline_to_br"))

; A formatter chain where the compiler rejects one (D173 V1) — any block
; header: {#if}, {:else if}, {#unless}, {#case} (inline ones in an attribute
; value too), {#for}, and a {:when} value — and an @event handler body, which
; is JavaScript but has no bitwise OR (D176). '||' is logical OR, never a pipe.
(invalid_formatter_name) @error
(attribute_text) @string
(unquoted_attribute_value) @string

; '\{' and '\}' are literal braces, not an interpolation (the compiler drops
; the backslash and emits the brace). Legal in template text and in a quoted
; attribute value; deliberately never inside {#raw}, whose bytes stay verbatim.
(escaped_brace) @string.escape

; The complete event-modifier set: four generic modifiers plus ten key filters.
; The compiler rejects anything else.
((event_modifier) @attribute
  (#match? @attribute "^(prevent|stop|once|outside|enter|escape|tab|space|up|down|left|right|backspace|delete)$"))

((event_modifier) @error
  (#not-match? @error "^(prevent|stop|once|outside|enter|escape|tab|space|up|down|left|right|backspace|delete)$"))

; {#raw} … {/raw} bodies are literal HTML: real tags, but no markers, no
; directive attributes, and no interpolation.
(raw_tag_name) @tag
(raw_attribute_name) @attribute
(raw_attribute_text) @string
(raw_unquoted_attribute_value) @string
(raw_brace_value) @string
(raw_opener_rest) @comment

[
  "<"
  ">"
  "</"
  "/>"
] @punctuation.bracket

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

[
  "#"
  ":"
  "/"
  "|"
] @punctuation.special

"," @punctuation.delimiter

"@" @operator
"=" @operator
