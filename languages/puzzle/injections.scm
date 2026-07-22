; JavaScript is the default for <scripts>.
((scripts_element
  (scripts_start_tag) @_start
  (script_content) @content)
  (#not-match? @_start "lang\\s*=")
  (#set! language "javascript"))

; Explicit JavaScript.
((scripts_element
  (scripts_start_tag
    (attribute
      (normal_attribute
        name: (attribute_name) @_name
        value: (quoted_attribute_value
          (attribute_text) @_lang))))
  (script_content) @content)
  (#eq? @_name "lang")
  (#any-of? @_lang "js" "javascript")
  (#set! language "javascript"))

; TypeScript scripts.
((scripts_element
  (scripts_start_tag
    (attribute
      (normal_attribute
        name: (attribute_name) @_name
        value: (quoted_attribute_value
          (attribute_text) @_lang))))
  (script_content) @content)
  (#eq? @_name "lang")
  (#any-of? @_lang "ts" "typescript")
  (#set! language "typescript"))

; Puzzle expressions use TypeScript's expression grammar. It is a superset of
; the JavaScript accepted by Puzzle and gives typed expressions useful colors.
((expression_content) @content
  (#set! language "typescript"))

; <styles> is CSS.
((styles_element
  (style_content) @content)
  (#set! language "css"))
