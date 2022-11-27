; Comments
[
  (single_line_comment)
  (multi_line_comment)
] @comment

; Punctuation
[
  "."
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
  (ALL)
  (AS)
  (DISTINCT)
  (ELEMENT)
  (NOT)
  (RAW)
  (SELECT)
  (VALUE)
] @keyword

; Literals
(null_literal) @keyword
(missing_literal) @keyword
(true_literal) @keyword
(false_literal) @keyword
(string_literal) @string
(number_literal) @number
