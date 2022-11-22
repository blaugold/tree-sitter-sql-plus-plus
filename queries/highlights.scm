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
  (AS)
  (COLLATE)
  (DIAC)
  (FALSE)
  (MISSING)
  (NOCASE)
  (NODIAC)
  (NOT)
  (NOUNICODE)
  (NULL)
  (SELECT)
  (TRUE)
  (UNICODE)
] @keyword

; Literals
(string_literal) @string
(int_literal) @number
(float_literal) @number

; Properties
[
  (star_property)
  (collection_alias_star_property)
  (property_path)
] @property
