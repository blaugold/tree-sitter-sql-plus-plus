// const collationKeywords = ['CASE', 'DIAC', 'UNICODE'].flatMap((keyword) => [
//   keyword,
//   `NO${keyword}`,
// ])

// When uncommenting a keyword, also add it to the list of keywords in the
// queries / highlights.scm.
const keywords = [
  // ...collationKeywords,
  // 'ALL',
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
  // 'DISTINCT',
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
  // 'SATISFIES',
  'SELECT',
  // 'SOME',
  // 'THEN',
  // 'VALUED',
  // 'WHEN',
  // 'WHERE',
]

module.exports = grammar({
  name: 'sql_plus_plus',
  word: ($) => $.identifier,
  extras: ($) => [/\s+/, $.single_line_comment, $.multi_line_comment],
  supertypes: ($) => [$._expr, $._literal],

  rules: {
    // A file may:
    // - be empty.
    // - contain a single select_list.
    // - contain statements separated by semicolons.
    source_file: ($) => choice($.select_list, repeat(seq($._statement, ';'))),

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

    array_literal: ($) => seq('[', optional(commaList($._expr)), ']'),
    dict_literal: ($) => seq('{', optional(commaList($.dict_entry)), '}'),
    dict_entry: ($) =>
      seq(field('key', $.string_literal), ':', field('value', $._expr)),

    // === Identifiers & Keywords =============================================

    identifier: ($) => token(choice(/[a-zA-Z_][a-zA-Z0-9_$]*/, /`([^`]|``)*`/)),

    ...keywordRules(keywords),

    // === Expressions ========================================================

    _expr: ($) => choice($._literal, $.parameter_expr, $.grouping_expr),

    parameter_expr: ($) => seq('$', $.identifier),
    grouping_expr: ($) => seq('(', $._expr, ')'),

    // === Statements =========================================================

    _statement: ($) => choice($.select_statement),

    select_statement: ($) => seq($.SELECT, field('select_list', $.select_list)),
    select_list: ($) => commaList($.select_result),
    select_result: ($) =>
      seq($._expr, optional(seq(optional($.AS), field('alias', $.identifier)))),
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

function commaList(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
