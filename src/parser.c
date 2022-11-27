#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 21

enum {
  sym_identifier = 1,
  sym_single_line_comment = 2,
  sym_multi_line_comment = 3,
  sym_null_literal = 4,
  sym_missing_literal = 5,
  sym_true_literal = 6,
  sym_false_literal = 7,
  sym_number_literal = 8,
  aux_sym_string_literal_token1 = 9,
  aux_sym_string_literal_token2 = 10,
  anon_sym_LBRACK = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_COLON = 16,
  sym_ALL = 17,
  sym_AS = 18,
  sym_DISTINCT = 19,
  sym_ELEMENT = 20,
  sym_NOT = 21,
  sym_RAW = 22,
  sym_SELECT = 23,
  sym_VALUE = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_DOLLAR = 27,
  anon_sym_DOT = 28,
  sym_case_insensitive_suffix = 29,
  anon_sym_SEMI = 30,
  anon_sym_STAR = 31,
  sym_source_file = 32,
  sym__literal = 33,
  sym_string_literal = 34,
  sym_array_literal = 35,
  sym_dict_literal = 36,
  sym_dict_entry = 37,
  sym__expr = 38,
  sym_grouping_expr = 39,
  sym_parameter_expr = 40,
  sym_field_expr = 41,
  sym_element_expr = 42,
  sym_slice_expr = 43,
  sym__statement = 44,
  sym_select_statement = 45,
  sym_select_expr = 46,
  sym_select_clause = 47,
  sym_projection = 48,
  sym_star_expr = 49,
  sym_select_path_segment = 50,
  sym_result_expr = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_array_literal_repeat1 = 53,
  aux_sym_dict_literal_repeat1 = 54,
  aux_sym_projection_repeat1 = 55,
  aux_sym_select_path_segment_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_null_literal] = "null_literal",
  [sym_missing_literal] = "missing_literal",
  [sym_true_literal] = "true_literal",
  [sym_false_literal] = "false_literal",
  [sym_number_literal] = "number_literal",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_ALL] = "ALL",
  [sym_AS] = "AS",
  [sym_DISTINCT] = "DISTINCT",
  [sym_ELEMENT] = "ELEMENT",
  [sym_NOT] = "NOT",
  [sym_RAW] = "RAW",
  [sym_SELECT] = "SELECT",
  [sym_VALUE] = "VALUE",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [sym_case_insensitive_suffix] = "case_insensitive_suffix",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [sym_source_file] = "source_file",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_array_literal] = "array_literal",
  [sym_dict_literal] = "dict_literal",
  [sym_dict_entry] = "dict_entry",
  [sym__expr] = "_expr",
  [sym_grouping_expr] = "grouping_expr",
  [sym_parameter_expr] = "parameter_expr",
  [sym_field_expr] = "field_expr",
  [sym_element_expr] = "element_expr",
  [sym_slice_expr] = "slice_expr",
  [sym__statement] = "_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_expr] = "select_expr",
  [sym_select_clause] = "select_clause",
  [sym_projection] = "projection",
  [sym_star_expr] = "star_expr",
  [sym_select_path_segment] = "select_path_segment",
  [sym_result_expr] = "result_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
  [aux_sym_projection_repeat1] = "projection_repeat1",
  [aux_sym_select_path_segment_repeat1] = "select_path_segment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_null_literal] = sym_null_literal,
  [sym_missing_literal] = sym_missing_literal,
  [sym_true_literal] = sym_true_literal,
  [sym_false_literal] = sym_false_literal,
  [sym_number_literal] = sym_number_literal,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_ALL] = sym_ALL,
  [sym_AS] = sym_AS,
  [sym_DISTINCT] = sym_DISTINCT,
  [sym_ELEMENT] = sym_ELEMENT,
  [sym_NOT] = sym_NOT,
  [sym_RAW] = sym_RAW,
  [sym_SELECT] = sym_SELECT,
  [sym_VALUE] = sym_VALUE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_case_insensitive_suffix] = sym_case_insensitive_suffix,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_source_file] = sym_source_file,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_array_literal] = sym_array_literal,
  [sym_dict_literal] = sym_dict_literal,
  [sym_dict_entry] = sym_dict_entry,
  [sym__expr] = sym__expr,
  [sym_grouping_expr] = sym_grouping_expr,
  [sym_parameter_expr] = sym_parameter_expr,
  [sym_field_expr] = sym_field_expr,
  [sym_element_expr] = sym_element_expr,
  [sym_slice_expr] = sym_slice_expr,
  [sym__statement] = sym__statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_expr] = sym_select_expr,
  [sym_select_clause] = sym_select_clause,
  [sym_projection] = sym_projection,
  [sym_star_expr] = sym_star_expr,
  [sym_select_path_segment] = sym_select_path_segment,
  [sym_result_expr] = sym_result_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
  [aux_sym_projection_repeat1] = aux_sym_projection_repeat1,
  [aux_sym_select_path_segment_repeat1] = aux_sym_select_path_segment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_missing_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_false_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_ALL] = {
    .visible = true,
    .named = true,
  },
  [sym_AS] = {
    .visible = true,
    .named = true,
  },
  [sym_DISTINCT] = {
    .visible = true,
    .named = true,
  },
  [sym_ELEMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_RAW] = {
    .visible = true,
    .named = true,
  },
  [sym_SELECT] = {
    .visible = true,
    .named = true,
  },
  [sym_VALUE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_case_insensitive_suffix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_grouping_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_element_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_slice_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_projection] = {
    .visible = true,
    .named = true,
  },
  [sym_star_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_select_path_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_result_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_projection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_path_segment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_case_insensitive = 2,
  field_end = 3,
  field_expr = 4,
  field_identifier = 5,
  field_key = 6,
  field_name = 7,
  field_next = 8,
  field_path = 9,
  field_position = 10,
  field_projection = 11,
  field_raw = 12,
  field_return = 13,
  field_select = 14,
  field_start = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_case_insensitive] = "case_insensitive",
  [field_end] = "end",
  [field_expr] = "expr",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_name] = "name",
  [field_next] = "next",
  [field_path] = "path",
  [field_position] = "position",
  [field_projection] = "projection",
  [field_raw] = "raw",
  [field_return] = "return",
  [field_select] = "select",
  [field_start] = "start",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 4},
  [19] = {.index = 37, .length = 3},
  [20] = {.index = 40, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_expr, 0},
  [2] =
    {field_select, 0},
  [3] =
    {field_return, 0},
  [4] =
    {field_raw, 0},
    {field_raw, 1},
  [6] =
    {field_projection, 1},
  [7] =
    {field_alias, 1},
    {field_expr, 0},
  [9] =
    {field_identifier, 0},
    {field_next, 1},
    {field_next, 2},
  [12] =
    {field_raw, 1},
    {field_raw, 2},
    {field_return, 0},
  [15] =
    {field_alias, 2},
    {field_expr, 0},
  [17] =
    {field_expr, 0},
    {field_identifier, 2},
  [19] =
    {field_path, 0},
    {field_path, 1},
  [21] =
    {field_key, 0},
    {field_value, 2},
  [23] =
    {field_identifier, 0},
    {field_next, 2},
    {field_next, 3},
  [26] =
    {field_expr, 0},
    {field_position, 2},
  [28] =
    {field_case_insensitive, 3},
    {field_expr, 0},
    {field_identifier, 2},
  [31] =
    {field_expr, 0},
    {field_start, 2},
  [33] =
    {field_expr, 0},
    {field_name, 2},
    {field_name, 3},
    {field_name, 4},
  [37] =
    {field_end, 4},
    {field_expr, 0},
    {field_start, 2},
  [40] =
    {field_case_insensitive, 5},
    {field_expr, 0},
    {field_name, 2},
    {field_name, 3},
    {field_name, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(40);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(2);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 16:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 19:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_multi_line_comment);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(10);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'i') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(5);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(6);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(9);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(sym_case_insensitive_suffix);
      END_STATE();
    case 2:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_AS);
      END_STATE();
    case 14:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ALL);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_NOT);
      END_STATE();
    case 30:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_RAW);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_VALUE);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_SELECT);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ELEMENT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_missing_literal);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_DISTINCT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(1),
    [sym_missing_literal] = ACTIONS(1),
    [sym_true_literal] = ACTIONS(1),
    [sym_false_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_ALL] = ACTIONS(1),
    [sym_AS] = ACTIONS(1),
    [sym_DISTINCT] = ACTIONS(1),
    [sym_ELEMENT] = ACTIONS(1),
    [sym_NOT] = ACTIONS(1),
    [sym_RAW] = ACTIONS(1),
    [sym_SELECT] = ACTIONS(1),
    [sym_VALUE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_case_insensitive_suffix] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(85),
    [sym__literal] = STATE(30),
    [sym_string_literal] = STATE(20),
    [sym_array_literal] = STATE(20),
    [sym_dict_literal] = STATE(20),
    [sym__expr] = STATE(34),
    [sym_grouping_expr] = STATE(30),
    [sym_parameter_expr] = STATE(30),
    [sym_field_expr] = STATE(30),
    [sym_element_expr] = STATE(30),
    [sym_slice_expr] = STATE(30),
    [sym__statement] = STATE(36),
    [sym_select_statement] = STATE(72),
    [sym_select_expr] = STATE(84),
    [sym_select_clause] = STATE(83),
    [sym_projection] = STATE(81),
    [sym_star_expr] = STATE(39),
    [sym_select_path_segment] = STATE(80),
    [sym_result_expr] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(9),
    [sym_missing_literal] = ACTIONS(9),
    [sym_true_literal] = ACTIONS(9),
    [sym_false_literal] = ACTIONS(9),
    [sym_number_literal] = ACTIONS(9),
    [aux_sym_string_literal_token1] = ACTIONS(11),
    [aux_sym_string_literal_token2] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_ALL] = ACTIONS(17),
    [sym_DISTINCT] = ACTIONS(17),
    [sym_ELEMENT] = ACTIONS(19),
    [sym_RAW] = ACTIONS(19),
    [sym_SELECT] = ACTIONS(21),
    [sym_VALUE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
  },
  [2] = {
    [sym__literal] = STATE(30),
    [sym_string_literal] = STATE(20),
    [sym_array_literal] = STATE(20),
    [sym_dict_literal] = STATE(20),
    [sym__expr] = STATE(34),
    [sym_grouping_expr] = STATE(30),
    [sym_parameter_expr] = STATE(30),
    [sym_field_expr] = STATE(30),
    [sym_element_expr] = STATE(30),
    [sym_slice_expr] = STATE(30),
    [sym_projection] = STATE(76),
    [sym_star_expr] = STATE(39),
    [sym_select_path_segment] = STATE(80),
    [sym_result_expr] = STATE(39),
    [sym_identifier] = ACTIONS(7),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(9),
    [sym_missing_literal] = ACTIONS(9),
    [sym_true_literal] = ACTIONS(9),
    [sym_false_literal] = ACTIONS(9),
    [sym_number_literal] = ACTIONS(9),
    [aux_sym_string_literal_token1] = ACTIONS(11),
    [aux_sym_string_literal_token2] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_ALL] = ACTIONS(17),
    [sym_DISTINCT] = ACTIONS(17),
    [sym_ELEMENT] = ACTIONS(19),
    [sym_RAW] = ACTIONS(19),
    [sym_VALUE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
  },
  [3] = {
    [sym__literal] = STATE(30),
    [sym_string_literal] = STATE(20),
    [sym_array_literal] = STATE(20),
    [sym_dict_literal] = STATE(20),
    [sym__expr] = STATE(34),
    [sym_grouping_expr] = STATE(30),
    [sym_parameter_expr] = STATE(30),
    [sym_field_expr] = STATE(30),
    [sym_element_expr] = STATE(30),
    [sym_slice_expr] = STATE(30),
    [sym_star_expr] = STATE(42),
    [sym_select_path_segment] = STATE(80),
    [sym_result_expr] = STATE(42),
    [sym_identifier] = ACTIONS(7),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(9),
    [sym_missing_literal] = ACTIONS(9),
    [sym_true_literal] = ACTIONS(9),
    [sym_false_literal] = ACTIONS(9),
    [sym_number_literal] = ACTIONS(9),
    [aux_sym_string_literal_token1] = ACTIONS(11),
    [aux_sym_string_literal_token2] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_ELEMENT] = ACTIONS(29),
    [sym_RAW] = ACTIONS(29),
    [sym_VALUE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym__expr,
    STATE(80), 1,
      sym_select_path_segment,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(64), 2,
      sym_star_expr,
      sym_result_expr,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [57] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [107] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(34), 1,
      sym__expr,
    STATE(65), 1,
      sym_result_expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [157] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(34), 1,
      sym__expr,
    STATE(67), 1,
      sym_result_expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [207] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [257] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(44), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [304] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(41), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [351] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(47), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [398] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(52), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [445] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(56), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [492] = 11,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(53), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(20), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(9), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
    STATE(30), 6,
      sym__literal,
      sym_grouping_expr,
      sym_parameter_expr,
      sym_field_expr,
      sym_element_expr,
      sym_slice_expr,
  [539] = 4,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_case_insensitive_suffix,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(37), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [562] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_case_insensitive_suffix,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(43), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [585] = 3,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(49), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [605] = 3,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(53), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [625] = 3,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(57), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [645] = 3,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [665] = 3,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(65), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [685] = 3,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(69), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [705] = 3,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [725] = 3,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [745] = 3,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [765] = 3,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(85), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [785] = 3,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(89), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [805] = 3,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(93), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [825] = 3,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [845] = 3,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [865] = 3,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(105), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [885] = 3,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [905] = 6,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_select_path_segment_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_AS,
      anon_sym_SEMI,
  [928] = 6,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_AS,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [950] = 7,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      sym_SELECT,
    STATE(72), 1,
      sym_select_statement,
    STATE(83), 1,
      sym_select_clause,
    STATE(84), 1,
      sym_select_expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(35), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [974] = 7,
    ACTIONS(21), 1,
      sym_SELECT,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_select_statement,
    STATE(83), 1,
      sym_select_clause,
    STATE(84), 1,
      sym_select_expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(35), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [998] = 5,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_dict_entry,
    STATE(77), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [1016] = 6,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1036] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_projection_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1051] = 4,
    STATE(69), 1,
      sym_dict_entry,
    STATE(77), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(11), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [1066] = 5,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1083] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_projection_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1098] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_projection_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1113] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1128] = 4,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_projection_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1143] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_projection_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1158] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1173] = 4,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1187] = 4,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1201] = 4,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1215] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1229] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1243] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1257] = 4,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_select_path_segment_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1271] = 4,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1285] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1299] = 4,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_select_path_segment_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1313] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1323] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1337] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1347] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1357] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1367] = 4,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_select_path_segment_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1381] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1391] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1400] = 3,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(75), 1,
      sym_select_path_segment,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1411] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1420] = 3,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(79), 1,
      sym_select_path_segment,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1431] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1440] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(215), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [1449] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym_SELECT,
  [1458] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_SELECT,
  [1467] = 3,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1478] = 2,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1486] = 2,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1494] = 2,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1502] = 2,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1510] = 2,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1518] = 2,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1526] = 2,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1534] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1542] = 2,
    ACTIONS(239), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1550] = 2,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1558] = 2,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1566] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 257,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 398,
  [SMALL_STATE(13)] = 445,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 539,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 585,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 625,
  [SMALL_STATE(20)] = 645,
  [SMALL_STATE(21)] = 665,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 705,
  [SMALL_STATE(24)] = 725,
  [SMALL_STATE(25)] = 745,
  [SMALL_STATE(26)] = 765,
  [SMALL_STATE(27)] = 785,
  [SMALL_STATE(28)] = 805,
  [SMALL_STATE(29)] = 825,
  [SMALL_STATE(30)] = 845,
  [SMALL_STATE(31)] = 865,
  [SMALL_STATE(32)] = 885,
  [SMALL_STATE(33)] = 905,
  [SMALL_STATE(34)] = 928,
  [SMALL_STATE(35)] = 950,
  [SMALL_STATE(36)] = 974,
  [SMALL_STATE(37)] = 998,
  [SMALL_STATE(38)] = 1016,
  [SMALL_STATE(39)] = 1036,
  [SMALL_STATE(40)] = 1051,
  [SMALL_STATE(41)] = 1066,
  [SMALL_STATE(42)] = 1083,
  [SMALL_STATE(43)] = 1098,
  [SMALL_STATE(44)] = 1113,
  [SMALL_STATE(45)] = 1128,
  [SMALL_STATE(46)] = 1143,
  [SMALL_STATE(47)] = 1158,
  [SMALL_STATE(48)] = 1173,
  [SMALL_STATE(49)] = 1187,
  [SMALL_STATE(50)] = 1201,
  [SMALL_STATE(51)] = 1215,
  [SMALL_STATE(52)] = 1229,
  [SMALL_STATE(53)] = 1243,
  [SMALL_STATE(54)] = 1257,
  [SMALL_STATE(55)] = 1271,
  [SMALL_STATE(56)] = 1285,
  [SMALL_STATE(57)] = 1299,
  [SMALL_STATE(58)] = 1313,
  [SMALL_STATE(59)] = 1323,
  [SMALL_STATE(60)] = 1337,
  [SMALL_STATE(61)] = 1347,
  [SMALL_STATE(62)] = 1357,
  [SMALL_STATE(63)] = 1367,
  [SMALL_STATE(64)] = 1381,
  [SMALL_STATE(65)] = 1391,
  [SMALL_STATE(66)] = 1400,
  [SMALL_STATE(67)] = 1411,
  [SMALL_STATE(68)] = 1420,
  [SMALL_STATE(69)] = 1431,
  [SMALL_STATE(70)] = 1440,
  [SMALL_STATE(71)] = 1449,
  [SMALL_STATE(72)] = 1458,
  [SMALL_STATE(73)] = 1467,
  [SMALL_STATE(74)] = 1478,
  [SMALL_STATE(75)] = 1486,
  [SMALL_STATE(76)] = 1494,
  [SMALL_STATE(77)] = 1502,
  [SMALL_STATE(78)] = 1510,
  [SMALL_STATE(79)] = 1518,
  [SMALL_STATE(80)] = 1526,
  [SMALL_STATE(81)] = 1534,
  [SMALL_STATE(82)] = 1542,
  [SMALL_STATE(83)] = 1550,
  [SMALL_STATE(84)] = 1558,
  [SMALL_STATE(85)] = 1566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 5, .production_id = 18),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 5, .production_id = 18),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 11),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 11),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping_expr, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping_expr, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expr, 5, .production_id = 17),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expr, 5, .production_id = 17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_expr, 4, .production_id = 15),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_expr, 4, .production_id = 15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_expr, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_expr, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 4, .production_id = 16),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 4, .production_id = 16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 6, .production_id = 20),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 6, .production_id = 20),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expr, 6, .production_id = 19),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expr, 6, .production_id = 19),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), SHIFT(14),
  [116] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym_select_path_segment, 1, .production_id = 1), SHIFT(66),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_expr, 1, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projection, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projection, 2, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projection, 3, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_projection_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_projection_repeat1, 2), SHIFT_REPEAT(4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projection, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entry, 3, .production_id = 13),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(40),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_path_segment_repeat1, 2), SHIFT_REPEAT(14),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_path_segment_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_star_expr, 3, .production_id = 12),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_star_expr, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_expr, 2, .production_id = 7),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_expr, 3, .production_id = 10),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projection, 2, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projection, 3, .production_id = 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_path_segment_repeat1, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_path_segment, 3, .production_id = 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2, .production_id = 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_path_segment, 4, .production_id = 14),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expr, 1, .production_id = 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [245] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql_plus_plus(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
