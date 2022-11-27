// const collationKeywords = ['CASE', 'DIAC', 'UNICODE'].flatMap((keyword) => [
//   keyword,
//   `NO${keyword}`,
// ])

// When uncommenting a keyword, also add it to the list of keywords in the
// queries / highlights.scm.
const keywords = [
  // ...collationKeywords,
  'ALL',
  // 'AND',
  // 'ANY',
  'AS',
  // 'ASC',
  // 'BETWEEN',
  // 'BY',
  // 'CASE',
  // 'COLLATE',
  // 'CROSS',
  // 'DESC',
  'DISTINCT',
  'ELEMENT',
  // 'ELSE',
  // 'END',
  // 'EVERY',
  // 'EXISTS',
  // 'FROM',
  // 'GROUP',
  // 'HAVING',
  // 'IN',
  // 'INNER',
  // 'IS',
  // 'JOIN',
  // 'LEFT',
  // 'LIKE',
  // 'LIMIT',
  'NOT',
  // 'OFFSET',
  // 'ON',
  // 'OR',
  // 'ORDER',
  // 'OUTER',
  'RAW',
  // 'SATISFIES',
  'SELECT',
  // 'SOME',
  // 'THEN',
  'VALUE',
  // 'VALUED',
  // 'WHEN',
  // 'WHERE',
]

module.exports = grammar({
  name: 'sql_plus_plus',
  word: ($) => $.identifier,
  conflicts: ($) => [[$._expr, $.select_path_segment]],
  extras: ($) => [/\s+/, $.single_line_comment, $.multi_line_comment],
  supertypes: ($) => [$._literal, $._expr, $._statement],

  rules: {
    // A file may:
    // - be empty.
    // - contain a single projection.
    // - contain statements separated by semicolons.
    source_file: ($) => choice($.projection, repeat($._statement)),

    single_line_comment: ($) => /--.*/,
    multi_line_comment: ($) => token(seq('/*', choice(/.*/, '\n'), '*/')),

    // === Literals ===========================================================

    _literal: ($) =>
      choice(
        $.null_literal,
        $.missing_literal,
        $.true_literal,
        $.false_literal,
        $.number_literal,
        $.string_literal,
        $.array_literal,
        $.dict_literal
      ),

    null_literal: keywordRule('NULL'),
    missing_literal: keywordRule('MISSING'),
    true_literal: keywordRule('TRUE'),
    false_literal: keywordRule('FALSE'),
    number_literal: ($) => /-?(\d|[1-9]\d+)(\.\d+)?([eE][-+]?\d+)?/,
    string_literal: ($) => choice(...['"', "'"].map(quotedStringRegExp)),

    array_literal: ($) => seq('[', optional(oneOrMoreList($._expr)), ']'),
    dict_literal: ($) => seq('{', optional(oneOrMoreList($.dict_entry)), '}'),
    dict_entry: ($) =>
      seq(field('key', $.string_literal), ':', field('value', $._expr)),

    // === Identifiers & Keywords =============================================

    identifier: ($) => token(choice(/[a-zA-Z_][a-zA-Z0-9_$]*/, /`([^`]|``)*`/)),

    ...keywordRules(keywords),

    // === Expressions ========================================================

    _expr: ($) =>
      choice(
        $.grouping_expr,
        $._literal,
        $.parameter_expr,
        $.identifier,
        $.field_expr,
        $.element_expr,
        $.slice_expr
      ),

    grouping_expr: ($) => seq('(', $._expr, ')'),
    parameter_expr: ($) => seq('$', $.identifier),
    field_expr: ($) =>
      seq(
        field('expr', $._expr),
        '.',
        seq(
          choice(
            field('identifier', $.identifier),
            field('name', seq('[', $._expr, ']'))
          ),
          optional(field('case_insensitive', $.case_insensitive_suffix))
        )
      ),
    case_insensitive_suffix: ($) => 'i',
    element_expr: ($) =>
      seq(field('expr', $._expr), '[', field('position', $._expr), ']'),
    slice_expr: ($) =>
      seq(
        field('expr', $._expr),
        '[',
        field('start', $._expr),
        ':',
        optional(field('end', $._expr)),
        ']'
      ),

    // === Statements =========================================================

    _statement: ($) => choice($.select_statement),

    select_statement: ($) => statement($.select_expr),
    select_expr: ($) => seq(field('select', $.select_clause)),

    // === SELECT Clause ======================================================

    select_clause: ($) =>
      seq(
        $.SELECT,
        // TODO: hint-comment,
        field('projection', $.projection)
      ),
    projection: ($) =>
      seq(
        optional(field('return', choice($.ALL, $.DISTINCT))),
        choice(
          seq(oneOrMoreList(choice($.star_expr, $.result_expr))),
          field('raw', seq(choice($.RAW, $.ELEMENT, $.VALUE), $.result_expr))
        )
      ),
    star_expr: ($) =>
      seq(optional(field('path', seq($.select_path_segment, '.'))), '*'),
    select_path_segment: ($) =>
      prec.right(
        seq(
          field('identifier', $.identifier),
          repeat(seq('[', $._expr, ']')),
          field('next', optional(seq('.', $.select_path_segment)))
        )
      ),
    result_expr: ($) =>
      seq(
        field('expr', $._expr),
        optional(seq(optional($.AS), field('alias', $.identifier)))
      ),
  },
})

function keywordRules(keywords) {
  const result = {}
  for (const keyword of keywords) {
    result[keyword] = keywordRule(keyword)
  }
  return result
}

function keywordRule(text) {
  return ($) => token(prec(1, caseInsensitive(text)))
}

function caseInsensitive(text) {
  return new RegExp(
    text
      .split('')
      .map((letter) => `[${letter}${letter.toLowerCase()}]`)
      .join('')
  )
}

function quotedStringRegExp(quote) {
  // This RegExp matches JSON encoded string literals but does not just allow double quotes but
  // instead uses the provided quote character.
  return RegExp(
    `${quote}([^${quote}\\\\]|\\\\([${quote}\\\\/bfnrt]|u[da-fA-F]{4}))*${quote}`
  )
}

function oneOrMoreList(rule, separator = ',') {
  return seq(rule, repeat(seq(separator, rule)))
}

function statement(rule) {
  return seq(rule, ';')
}
