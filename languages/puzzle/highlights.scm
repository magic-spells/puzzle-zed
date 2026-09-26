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
  name: (tag_name) @tag @invalid)
  (#match? @invalid "^(Portal|Snippet)$"))

; A lowercase <slot>/<children>/<portal> is a compile error steering to the
; capitalized form (D134). <snippet> is deliberately absent: it only steers when
; it carries a `fits` attribute (D166), so on its own it stays ordinary HTML.
((tag_name) @tag @invalid
  (#match? @invalid "^(children|slot|portal)$"))

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
(formatter_name) @function

; A formatter chain where the compiler rejects one — a {#for} header or a
; {:when} value (D173 V1). The '|' after an @event handler is not a pipe at all
; (the handler body is plain JavaScript), so it never reaches either capture.
(invalid_formatter_name) @invalid
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

((event_modifier) @invalid
  (#not-match? @invalid "^(prevent|stop|once|outside|enter|escape|tab|space|up|down|left|right|backspace|delete)$"))

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
