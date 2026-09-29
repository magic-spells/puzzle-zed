(view_element
  (view_start_tag) @name) @item

(skeleton_element
  (skeleton_start_tag) @name) @item

(script_element
  (script_start_tag) @name) @item

(style_element
  (style_start_tag) @name) @item

((element
  (start_tag
    (tag_name) @name)) @item
  (#match? @name "^[^a-z]"))

((self_closing_element
  (tag_name) @name) @item
  (#match? @name "^[^a-z]"))

(if_statement
  (if_start) @name) @item

(unless_statement
  (unless_start) @name) @item

(case_statement
  (case_start) @name) @item

(for_statement
  (for_start) @name) @item

(raw_block
  (raw_start) @name) @item
