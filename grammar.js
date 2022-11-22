const collationKeywords = ['CASE', 'DIAC', 'UNICODE'].flatMap((keyword) => [
  keyword,
  `NO${keyword}`,
])

// When uncommenting a keyword, also add it to the list of keywords in the
// queries / highlights.scm.
const keywords = [
  ...collationKeywords,
  // 'ALL',
  // 'AND',
  // 'ANY',
  'AS',
  // 'ASC',
  // 'BETWEEN',
  // 'BY',
  // 'CASE',
  'COLLATE',
  // 'CROSS',
  // 'DESC',
  // 'DISTINCT',
  // 'ELSE',
  // 'END',
  // 'EVERY',
  // 'EXISTS',
  'FALSE',
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
  'MISSING',
  'NOT',
  'NULL',
  // 'OFFSET',
  // 'ON',
  // 'OR',
  // 'ORDER',
  // 'OUTER',
  // 'SATISFIES',
  'SELECT',
  // 'SOME',
  // 'THEN',
  'TRUE',
  // 'VALUED',
  // 'WHEN',
  // 'WHERE',
]

module.exports = grammar({
  name: 'sql_plus_plus',

  rules: {
    source_file: ($) => choice($._statement, $.select_list),

    word: ($) => $.identifier,

    // === Statements =========================================================

    _statement: ($) => seq(choice($.select_statement), ';'),

    select_statement: ($) => seq($.SELECT, $.select_list),

    select_list: ($) => commaList($.select_result),

    select_result: ($) =>
      seq($._expression, optional(seq($.AS, field('alias', $.identifier)))),

    // === Expressions ========================================================

    _expression: ($) =>
      choice(
        $._literal,
        $.array_literal,
        $.dict_literal,
        $.unary_op,
        $.parameter,
        $._property
      ),

    parameter: ($) => seq('$', $.identifier),

    unary_op: ($) =>
      prec(2, seq(choice($.unary_minus, $.unary_plus, $.NOT), $._expression)),

    collate_suffix: ($) =>
      seq($.COLLATE, choice($.collation, seq('(', repeat1($.collation), ')'))),

    collation: ($) =>
      choice(...collationKeywords.map((ruleName) => $[ruleName])),

    // === Properties =========================================================

    _property: ($) =>
      choice(
        $.star_property,
        $.collection_alias_star_property,
        $.property_path
      ),

    star_property: ($) => '*',

    collection_alias_star_property: ($) =>
      seq(collectionAlias($), token.immediate('.'), '*'),

    property_path: ($) =>
      seq(
        propertyName($),
        repeat(
          choice(
            seq(token.immediate('.'), propertyName($)),
            seq(token.immediate('['), $.int_literal, ']')
          )
        )
      ),

    // === Compound Literals ==================================================

    array_literal: ($) => seq('[', optional(commaList($._expression)), ']'),

    dict_literal: ($) => seq('{', optional(commaList($.dict_entry)), '}'),

    dict_entry: ($) =>
      seq(field('key', $.string_literal), ':', field('value', $._expression)),

    // === Literals ===========================================================

    _literal: ($) =>
      choice(
        $.NULL,
        $.MISSING,
        $.TRUE,
        $.FALSE,
        $.int_literal,
        $.float_literal,
        $.string_literal
      ),

    int_literal: ($) => /-?\d+/,
    float_literal: ($) =>
      /-?((\.\d+)|(\d+(\.\d*)([Ee][-+]?\d+)?|(\d+([Ee][-+]?\d+))))/,
    string_literal: ($) => choice(/'([^']|'')*'/, /"([^"]|"")*"/),

    // === Identifiers & Keywords =============================================

    identifier: ($) => choice(/[a-zA-Z_][a-zA-Z0-9_$]*/, /`([^`]|``)*`/),

    unary_minus: ($) => '-',
    unary_plus: ($) => '+',

    ...keywordRules(keywords),
  },
})

function collectionAlias($) {
  return $.identifier
}

function propertyName($) {
  return $.identifier
}

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

function commaList(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
