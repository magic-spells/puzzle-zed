(view_element
  (view_start_tag) @name) @item

(skeleton_element
  (skeleton_start_tag) @name) @item

(scripts_element
  (scripts_start_tag) @name) @item

(styles_element
  (styles_start_tag) @name) @item

((element
  (start_tag
    (tag_name) @name)) @item
  (#match? @name "^[A-Z]"))

((self_closing_element
  (tag_name) @name) @item
  (#match? @name "^[A-Z]"))

(if_statement
  (if_start) @name) @item

(unless_statement
  (unless_start) @name) @item

(case_statement
  (case_start) @name) @item

(for_statement
  (for_start) @name) @item
