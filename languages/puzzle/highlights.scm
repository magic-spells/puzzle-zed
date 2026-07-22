(comment) @comment
(inline_comment) @comment
(block_comment) @comment

(section_tag_name) @tag @keyword

((tag_name) @tag
  (#match? @tag "^[a-z]"))

((tag_name) @tag @type
  (#match? @type "^[A-Z]"))

(void_tag_name) @tag
(attribute_name) @attribute
(event_name) @function
(event_modifier) @attribute
(directive_name) @keyword
(attribute_text) @string
(unquoted_attribute_value) @string

[
  "<"
  ">"
  "</"
  "/>"
] @punctuation.bracket

[
  "{"
  "}"
] @punctuation.bracket

[
  "#"
  ":"
  "/"
] @punctuation.special

"@" @operator
"=" @operator
