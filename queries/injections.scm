((scripts_element
  (scripts_start_tag) @_start
  (script_content) @injection.content)
  (#not-match? @_start "lang\\s*=")
  (#set! injection.language "javascript"))

((scripts_element
  (scripts_start_tag) @_start
  (script_content) @injection.content)
  (#match? @_start "lang\\s*=\\s*[\"'](?:ts|typescript)[\"']")
  (#set! injection.language "typescript"))

((scripts_element
  (scripts_start_tag) @_start
  (script_content) @injection.content)
  (#match? @_start "lang\\s*=\\s*[\"'](?:js|javascript)[\"']")
  (#set! injection.language "javascript"))

((expression_content) @injection.content
  (#set! injection.language "typescript"))

((styles_element
  (style_content) @injection.content)
  (#set! injection.language "css"))
