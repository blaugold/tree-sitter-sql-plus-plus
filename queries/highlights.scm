; Comments
[
  (single_line_comment)
  (multi_line_comment)
] @comment

; Punctuation
[
  ","
  ":"
  ";"
] @punctuation.delimiter
[
  "["
  "]"
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

; Keywords
[
  (AS)
  (NOT)
  (SELECT)
] @keyword

; Literals
(null_literal) @keyword
(missing_literal) @keyword
(true_literal) @keyword
(false_literal) @keyword
(string_literal) @string
(number_literal) @number
