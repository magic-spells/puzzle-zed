("<" @open ">" @close)
("{" @open "}" @close)
("(" @open ")" @close)
("[" @open "]" @close)
("'" @open "'" @close)
("\"" @open "\"" @close)

((element
  (start_tag) @open
  (end_tag) @close)
  (#set! newline.only))

((view_element
  (view_start_tag) @open
  (view_end_tag) @close)
  (#set! newline.only))

((skeleton_element
  (skeleton_start_tag) @open
  (skeleton_end_tag) @close)
  (#set! newline.only))

((raw_element
  (raw_start_tag) @open
  (raw_end_tag) @close)
  (#set! newline.only))

((raw_block
  (raw_start) @open
  (raw_end) @close)
  (#set! newline.only))
