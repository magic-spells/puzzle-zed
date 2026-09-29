; JavaScript is the default for <script>.
((script_element
  (script_start_tag) @_start
  (script_content) @content)
  (#not-match? @_start "lang\\s*=")
  (#set! language "javascript"))

; Explicit JavaScript.
((script_element
  (script_start_tag
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
((script_element
  (script_start_tag
    (attribute
      (normal_attribute
        name: (attribute_name) @_name
        value: (quoted_attribute_value
          (attribute_text) @_lang))))
  (script_content) @content)
  (#eq? @_name "lang")
  (#any-of? @_lang "ts" "typescript")
  (#set! language "typescript"))

; <style> is CSS.
((style_element
  (style_content) @content)
  (#set! language "css"))
