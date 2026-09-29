; Editors disagree on which capture wins when two patterns match one node, so
; every pattern here is written to be mutually exclusive with every other: no
; node ever picks up two captures from two patterns, and the order does not
; matter.

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

; ----- Template expressions (D176) ----------------------------------------
; Every expression position parses as one JavaScript-shaped expression.

(number) @number
(string) @string
(template_string) @string
(svg_path) @string
"${" @punctuation.special

; `this` is not a template identifier anywhere (D176 rule 7) — interpolations,
; attribute values and props, block headers, {:when} values, the {#for}
; header, arrow parameters, object shorthand and @event handlers alike. A
; property named `this` (`x.this`) is a property_identifier, not this node.
(this) @invalid

((identifier) @variable.special
  (#any-of? @variable.special "Math" "Object" "Array"))

((identifier) @boolean
  (#any-of? @boolean "true" "false"))

((identifier) @constant.builtin
  (#any-of? @constant.builtin "null" "undefined" "NaN" "Infinity"))

((identifier) @variable
  (#not-any-of? @variable
    "Math" "Object" "Array" "true" "false" "null" "undefined" "NaN" "Infinity"))

(property_identifier) @property
(shorthand_property_identifier) @property
(method_name) @function.method
(parameter) @variable.parameter
(loop_binding) @variable.parameter

; A bare call: the function library (the 19 standard functions plus
; PuzzleKit's `link` and `timeago`) and the JavaScript global functions are
; builtins; any other name is an app function registered through the
; `formatters` config map, or, in an @event value, the view's handler.
; `raw` and `newline_to_br` are placed by the patterns further down.
((function_name) @function.builtin
  (#any-of? @function.builtin
    "round" "currency" "percentage" "number_with_delimiter" "compact_number"
    "pluralize" "capitalize" "truncate" "strip_html" "strip_newlines"
    "escape" "json" "date" "time" "datetime" "in_timezone" "t"
    "link" "timeago"
    "Number" "String" "Boolean" "parseInt" "parseFloat" "isNaN" "isFinite"))

((function_name) @function
  (#not-any-of? @function
    "round" "currency" "percentage" "number_with_delimiter" "compact_number"
    "pluralize" "capitalize" "truncate" "strip_html" "strip_newlines"
    "escape" "json" "date" "time" "datetime" "in_timezone" "t"
    "link" "timeago"
    "Number" "String" "Boolean" "parseInt" "parseFloat" "isNaN" "isFinite"
    "raw" "newline_to_br"))

; `raw` and `newline_to_br` render markup, so each is legal only as the whole
; of a TEXT interpolation — the outermost call, parentheses aside — and not
; directly inside an element whose content is text (<textarea>, <title>, …)
; or foreign (<svg>, <math>) (D174, D176 rule 4). The patterns below give each
; placement exactly one capture. The element test reads the start tag's text
; rather than capturing its tag_name, so the tag keeps its one @tag capture.
; A placement none of them names — a markup call inside parentheses inside
; another expression, or nested deeper in a text-only element — is left to
; the compiler.
([
  (document
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (view_element
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (skeleton_element
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (if_statement
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (else_if_block
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (else_block
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (unless_statement
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (when_block
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (case_else_block
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (for_statement
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  (for_else_block
    (interpolation
      value: [
        (call_expression function: (function_name) @function.builtin)
        (parenthesized_expression (call_expression function: (function_name) @function.builtin))
      ]))
  ]
  (#any-of? @function.builtin "raw" "newline_to_br"))

((element
  (start_tag) @_start
  (interpolation
    value: [
      (call_expression function: (function_name) @function.builtin)
      (parenthesized_expression (call_expression function: (function_name) @function.builtin))
    ]))
  (#any-of? @function.builtin "raw" "newline_to_br")
  (#not-match? @_start "^<(script|style|textarea|title|noscript|xmp|iframe|noembed|noframes|plaintext|svg|math)[\\s/>]"))

((element
  (start_tag) @_start
  (interpolation
    value: [
      (call_expression function: (function_name) @invalid)
      (parenthesized_expression (call_expression function: (function_name) @invalid))
    ]))
  (#any-of? @invalid "raw" "newline_to_br")
  (#match? @_start "^<(script|style|textarea|title|noscript|xmp|iframe|noembed|noframes|plaintext|svg|math)[\\s/>]"))

; In an attribute value, a component prop, a marker argument, `key=`/`flip=`,
; or an inline block inside a quoted attribute value.
([
  (normal_attribute
    value: (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (quoted_attribute_value
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_if_statement
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_else_if_block
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_else_block
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_unless_statement
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_when_block
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_case_else_block
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_for_statement
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  (attribute_for_else_block
    (interpolation
      value: [
        (call_expression function: (function_name) @invalid)
        (parenthesized_expression (call_expression function: (function_name) @invalid))
      ]))
  ]
  (#any-of? @invalid "raw" "newline_to_br"))

; In a block header: {#if}, {:else if}, {#unless}, {#case}, a {:when} value,
; or the {#for} collection or range bounds.
([
  (if_start
    condition: [
      (call_expression function: (function_name) @invalid)
      (parenthesized_expression (call_expression function: (function_name) @invalid))
    ])
  (else_if_start
    condition: [
      (call_expression function: (function_name) @invalid)
      (parenthesized_expression (call_expression function: (function_name) @invalid))
    ])
  (unless_start
    condition: [
      (call_expression function: (function_name) @invalid)
      (parenthesized_expression (call_expression function: (function_name) @invalid))
    ])
  (case_start
    value: [
      (call_expression function: (function_name) @invalid)
      (parenthesized_expression (call_expression function: (function_name) @invalid))
    ])
  (when_start
    value: [
      (call_expression function: (function_name) @invalid)
      (parenthesized_expression (call_expression function: (function_name) @invalid))
    ])
  (for_start
    [
      (call_expression function: (function_name) @invalid)
      (parenthesized_expression (call_expression function: (function_name) @invalid))
    ])
  ]
  (#any-of? @invalid "raw" "newline_to_br"))

; Nested inside another expression: a call argument (an @event handler's
; arguments included), an operand, a receiver, an element, a property value,
; a template substitution or an arrow body. Its output is markup, and no
; function or operator takes markup as input.
([
  (arguments (call_expression function: (function_name) @invalid))
  (binary_expression (call_expression function: (function_name) @invalid))
  (unary_expression (call_expression function: (function_name) @invalid))
  (ternary_expression (call_expression function: (function_name) @invalid))
  (member_expression (call_expression function: (function_name) @invalid))
  (subscript_expression (call_expression function: (function_name) @invalid))
  (call_expression (call_expression function: (function_name) @invalid))
  (array (call_expression function: (function_name) @invalid))
  (pair (call_expression function: (function_name) @invalid))
  (template_substitution (call_expression function: (function_name) @invalid))
  (arrow_function (call_expression function: (function_name) @invalid))
  ]
  (#any-of? @invalid "raw" "newline_to_br"))

; The whole of an @event value calls the view's handler first (D176 rule 4),
; so a handler that happens to be named `raw` is the view's, not markup.
((event_handler
  value: (call_expression function: (function_name) @function))
  (#any-of? @function "raw" "newline_to_br"))

; There is no pipe and no bitwise OR (D176): a single `|` anywhere in a
; template expression — text, attribute value, prop, marker argument, block
; header or @event handler — is a compile error. `||` is its own operator, and
; a '|' inside a string or template literal is text.
(binary_expression
  operator: "|" @invalid)

((binary_expression
  operator: _ @operator)
  (#not-eq? @operator "|"))

(unary_expression
  operator: _ @operator)

(ternary_expression
  ["?" ":"] @operator)

[
  "=>"
  "..."
  ".."
] @operator

"in" @keyword

[
  "."
  (optional_chain)
] @punctuation.delimiter

(pair
  ":" @punctuation.delimiter)

; ----- Punctuation --------------------------------------------------------
; '<', '>', '/' and ':' are also expression operators, so their markup uses
; are captured through their parents.
[
  (start_tag ["<" ">"] @punctuation.bracket)
  (end_tag ">" @punctuation.bracket)
  (self_closing_element "<" @punctuation.bracket)
  (void_element ["<" ">" "/"] @punctuation.bracket)
  (view_start_tag ["<" ">"] @punctuation.bracket)
  (view_end_tag ">" @punctuation.bracket)
  (skeleton_start_tag ["<" ">"] @punctuation.bracket)
  (skeleton_end_tag ">" @punctuation.bracket)
  (script_start_tag ["<" ">"] @punctuation.bracket)
  (script_end_tag ">" @punctuation.bracket)
  (style_start_tag ["<" ">"] @punctuation.bracket)
  (style_end_tag ">" @punctuation.bracket)
  (raw_start_tag ["<" ">"] @punctuation.bracket)
  (raw_end_tag ">" @punctuation.bracket)
  (raw_self_closing_element "<" @punctuation.bracket)
  (raw_void_element ["<" ">" "/"] @punctuation.bracket)
]

[
  "</"
  "/>"
] @punctuation.bracket

[
  "{"
  "}"
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

"#" @punctuation.special

[
  (if_end "/" @punctuation.special)
  (unless_end "/" @punctuation.special)
  (case_end "/" @punctuation.special)
  (for_end "/" @punctuation.special)
  (raw_end "/" @punctuation.special)
  (else_if_start ":" @punctuation.special)
  (else_start ":" @punctuation.special)
  (when_start ":" @punctuation.special)
  (event_attribute ":" @punctuation.special)
]

"," @punctuation.delimiter

"@" @operator
"=" @operator
