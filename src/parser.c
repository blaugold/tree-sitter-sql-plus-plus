#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_SEMI = 1,
  anon_sym_COMMA = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_STAR = 6,
  anon_sym_DOT = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LBRACK2 = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_COLON = 13,
  sym_int_literal = 14,
  sym_float_literal = 15,
  aux_sym_string_literal_token1 = 16,
  aux_sym_string_literal_token2 = 17,
  aux_sym_identifier_token1 = 18,
  aux_sym_identifier_token2 = 19,
  sym_unary_minus = 20,
  sym_unary_plus = 21,
  sym_CASE = 22,
  sym_NOCASE = 23,
  sym_DIAC = 24,
  sym_NODIAC = 25,
  sym_UNICODE = 26,
  sym_NOUNICODE = 27,
  sym_AS = 28,
  sym_COLLATE = 29,
  sym_FALSE = 30,
  sym_MISSING = 31,
  sym_NOT = 32,
  sym_NULL = 33,
  sym_SELECT = 34,
  sym_TRUE = 35,
  sym_source_file = 36,
  sym__statement = 37,
  sym_select_statement = 38,
  sym_select_list = 39,
  sym_select_result = 40,
  sym__expression = 41,
  sym_unary_op = 42,
  sym_parameter = 43,
  sym__property = 44,
  sym_star_property = 45,
  sym_collection_alias_star_property = 46,
  sym_property_path = 47,
  sym_array_literal = 48,
  sym_dict_literal = 49,
  sym_dict_entry = 50,
  sym__literal = 51,
  sym_string_literal = 52,
  sym_identifier = 53,
  aux_sym_select_list_repeat1 = 54,
  aux_sym_property_path_repeat1 = 55,
  aux_sym_array_literal_repeat1 = 56,
  aux_sym_dict_literal_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [sym_unary_minus] = "unary_minus",
  [sym_unary_plus] = "unary_plus",
  [sym_CASE] = "CASE",
  [sym_NOCASE] = "NOCASE",
  [sym_DIAC] = "DIAC",
  [sym_NODIAC] = "NODIAC",
  [sym_UNICODE] = "UNICODE",
  [sym_NOUNICODE] = "NOUNICODE",
  [sym_AS] = "AS",
  [sym_COLLATE] = "COLLATE",
  [sym_FALSE] = "FALSE",
  [sym_MISSING] = "MISSING",
  [sym_NOT] = "NOT",
  [sym_NULL] = "NULL",
  [sym_SELECT] = "SELECT",
  [sym_TRUE] = "TRUE",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_list] = "select_list",
  [sym_select_result] = "select_result",
  [sym__expression] = "_expression",
  [sym_unary_op] = "unary_op",
  [sym_parameter] = "parameter",
  [sym__property] = "_property",
  [sym_star_property] = "star_property",
  [sym_collection_alias_star_property] = "collection_alias_star_property",
  [sym_property_path] = "property_path",
  [sym_array_literal] = "array_literal",
  [sym_dict_literal] = "dict_literal",
  [sym_dict_entry] = "dict_entry",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
  [aux_sym_property_path_repeat1] = "property_path_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [sym_unary_minus] = sym_unary_minus,
  [sym_unary_plus] = sym_unary_plus,
  [sym_CASE] = sym_CASE,
  [sym_NOCASE] = sym_NOCASE,
  [sym_DIAC] = sym_DIAC,
  [sym_NODIAC] = sym_NODIAC,
  [sym_UNICODE] = sym_UNICODE,
  [sym_NOUNICODE] = sym_NOUNICODE,
  [sym_AS] = sym_AS,
  [sym_COLLATE] = sym_COLLATE,
  [sym_FALSE] = sym_FALSE,
  [sym_MISSING] = sym_MISSING,
  [sym_NOT] = sym_NOT,
  [sym_NULL] = sym_NULL,
  [sym_SELECT] = sym_SELECT,
  [sym_TRUE] = sym_TRUE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_list] = sym_select_list,
  [sym_select_result] = sym_select_result,
  [sym__expression] = sym__expression,
  [sym_unary_op] = sym_unary_op,
  [sym_parameter] = sym_parameter,
  [sym__property] = sym__property,
  [sym_star_property] = sym_star_property,
  [sym_collection_alias_star_property] = sym_collection_alias_star_property,
  [sym_property_path] = sym_property_path,
  [sym_array_literal] = sym_array_literal,
  [sym_dict_literal] = sym_dict_literal,
  [sym_dict_entry] = sym_dict_entry,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [aux_sym_select_list_repeat1] = aux_sym_select_list_repeat1,
  [aux_sym_property_path_repeat1] = aux_sym_property_path_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
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
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_unary_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_CASE] = {
    .visible = true,
    .named = true,
  },
  [sym_NOCASE] = {
    .visible = true,
    .named = true,
  },
  [sym_DIAC] = {
    .visible = true,
    .named = true,
  },
  [sym_NODIAC] = {
    .visible = true,
    .named = true,
  },
  [sym_UNICODE] = {
    .visible = true,
    .named = true,
  },
  [sym_NOUNICODE] = {
    .visible = true,
    .named = true,
  },
  [sym_AS] = {
    .visible = true,
    .named = true,
  },
  [sym_COLLATE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym_MISSING] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_NULL] = {
    .visible = true,
    .named = true,
  },
  [sym_SELECT] = {
    .visible = true,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_list] = {
    .visible = true,
    .named = true,
  },
  [sym_select_result] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__property] = {
    .visible = false,
    .named = true,
  },
  [sym_star_property] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_alias_star_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_path] = {
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
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_select_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_path_repeat1] = {
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
};

enum {
  field_alias = 1,
  field_key = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 2},
  [1] =
    {field_key, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(88);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '`') ADVANCE(6);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unary_minus);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unary_plus);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_CASE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_NOCASE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_DIAC);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_NODIAC);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_UNICODE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_NOUNICODE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_AS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_COLLATE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_MISSING);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_NOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_SELECT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [sym_unary_minus] = ACTIONS(1),
    [sym_unary_plus] = ACTIONS(1),
    [sym_CASE] = ACTIONS(1),
    [sym_NOCASE] = ACTIONS(1),
    [sym_DIAC] = ACTIONS(1),
    [sym_NODIAC] = ACTIONS(1),
    [sym_UNICODE] = ACTIONS(1),
    [sym_NOUNICODE] = ACTIONS(1),
    [sym_AS] = ACTIONS(1),
    [sym_COLLATE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
    [sym_MISSING] = ACTIONS(1),
    [sym_NOT] = ACTIONS(1),
    [sym_NULL] = ACTIONS(1),
    [sym_SELECT] = ACTIONS(1),
    [sym_TRUE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__statement] = STATE(50),
    [sym_select_statement] = STATE(47),
    [sym_select_list] = STATE(50),
    [sym_select_result] = STATE(27),
    [sym__expression] = STATE(29),
    [sym_unary_op] = STATE(29),
    [sym_parameter] = STATE(29),
    [sym__property] = STATE(29),
    [sym_star_property] = STATE(29),
    [sym_collection_alias_star_property] = STATE(29),
    [sym_property_path] = STATE(29),
    [sym_array_literal] = STATE(29),
    [sym_dict_literal] = STATE(29),
    [sym__literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [sym_identifier] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_LBRACK2] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_int_literal] = ACTIONS(11),
    [sym_float_literal] = ACTIONS(13),
    [aux_sym_string_literal_token1] = ACTIONS(15),
    [aux_sym_string_literal_token2] = ACTIONS(15),
    [aux_sym_identifier_token1] = ACTIONS(17),
    [aux_sym_identifier_token2] = ACTIONS(19),
    [sym_unary_minus] = ACTIONS(21),
    [sym_unary_plus] = ACTIONS(23),
    [sym_FALSE] = ACTIONS(13),
    [sym_MISSING] = ACTIONS(13),
    [sym_NOT] = ACTIONS(23),
    [sym_NULL] = ACTIONS(13),
    [sym_SELECT] = ACTIONS(25),
    [sym_TRUE] = ACTIONS(13),
  },
  [2] = {
    [sym_select_list] = STATE(51),
    [sym_select_result] = STATE(27),
    [sym__expression] = STATE(29),
    [sym_unary_op] = STATE(29),
    [sym_parameter] = STATE(29),
    [sym__property] = STATE(29),
    [sym_star_property] = STATE(29),
    [sym_collection_alias_star_property] = STATE(29),
    [sym_property_path] = STATE(29),
    [sym_array_literal] = STATE(29),
    [sym_dict_literal] = STATE(29),
    [sym__literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [sym_identifier] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_LBRACK2] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_int_literal] = ACTIONS(11),
    [sym_float_literal] = ACTIONS(13),
    [aux_sym_string_literal_token1] = ACTIONS(15),
    [aux_sym_string_literal_token2] = ACTIONS(15),
    [aux_sym_identifier_token1] = ACTIONS(17),
    [aux_sym_identifier_token2] = ACTIONS(19),
    [sym_unary_minus] = ACTIONS(21),
    [sym_unary_plus] = ACTIONS(23),
    [sym_FALSE] = ACTIONS(13),
    [sym_MISSING] = ACTIONS(13),
    [sym_NOT] = ACTIONS(23),
    [sym_NULL] = ACTIONS(13),
    [sym_TRUE] = ACTIONS(13),
  },
  [3] = {
    [sym_select_result] = STATE(37),
    [sym__expression] = STATE(29),
    [sym_unary_op] = STATE(29),
    [sym_parameter] = STATE(29),
    [sym__property] = STATE(29),
    [sym_star_property] = STATE(29),
    [sym_collection_alias_star_property] = STATE(29),
    [sym_property_path] = STATE(29),
    [sym_array_literal] = STATE(29),
    [sym_dict_literal] = STATE(29),
    [sym__literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [sym_identifier] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_LBRACK2] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_int_literal] = ACTIONS(11),
    [sym_float_literal] = ACTIONS(13),
    [aux_sym_string_literal_token1] = ACTIONS(15),
    [aux_sym_string_literal_token2] = ACTIONS(15),
    [aux_sym_identifier_token1] = ACTIONS(17),
    [aux_sym_identifier_token2] = ACTIONS(19),
    [sym_unary_minus] = ACTIONS(21),
    [sym_unary_plus] = ACTIONS(23),
    [sym_FALSE] = ACTIONS(13),
    [sym_MISSING] = ACTIONS(13),
    [sym_NOT] = ACTIONS(23),
    [sym_NULL] = ACTIONS(13),
    [sym_TRUE] = ACTIONS(13),
  },
  [4] = {
    [sym__expression] = STATE(40),
    [sym_unary_op] = STATE(40),
    [sym_parameter] = STATE(40),
    [sym__property] = STATE(40),
    [sym_star_property] = STATE(40),
    [sym_collection_alias_star_property] = STATE(40),
    [sym_property_path] = STATE(40),
    [sym_array_literal] = STATE(40),
    [sym_dict_literal] = STATE(40),
    [sym__literal] = STATE(40),
    [sym_string_literal] = STATE(40),
    [sym_identifier] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACK2] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_int_literal] = ACTIONS(29),
    [sym_float_literal] = ACTIONS(31),
    [aux_sym_string_literal_token1] = ACTIONS(15),
    [aux_sym_string_literal_token2] = ACTIONS(15),
    [aux_sym_identifier_token1] = ACTIONS(17),
    [aux_sym_identifier_token2] = ACTIONS(19),
    [sym_unary_minus] = ACTIONS(21),
    [sym_unary_plus] = ACTIONS(23),
    [sym_FALSE] = ACTIONS(31),
    [sym_MISSING] = ACTIONS(31),
    [sym_NOT] = ACTIONS(23),
    [sym_NULL] = ACTIONS(31),
    [sym_TRUE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(7), 1,
      anon_sym_LBRACK2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      aux_sym_identifier_token2,
    ACTIONS(21), 1,
      sym_unary_minus,
    ACTIONS(33), 1,
      sym_int_literal,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(15), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(23), 2,
      sym_unary_plus,
      sym_NOT,
    ACTIONS(35), 5,
      sym_float_literal,
      sym_FALSE,
      sym_MISSING,
      sym_NULL,
      sym_TRUE,
    STATE(23), 11,
      sym__expression,
      sym_unary_op,
      sym_parameter,
      sym__property,
      sym_star_property,
      sym_collection_alias_star_property,
      sym_property_path,
      sym_array_literal,
      sym_dict_literal,
      sym__literal,
      sym_string_literal,
  [56] = 13,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(7), 1,
      anon_sym_LBRACK2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      aux_sym_identifier_token2,
    ACTIONS(21), 1,
      sym_unary_minus,
    ACTIONS(37), 1,
      sym_int_literal,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(15), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(23), 2,
      sym_unary_plus,
      sym_NOT,
    ACTIONS(39), 5,
      sym_float_literal,
      sym_FALSE,
      sym_MISSING,
      sym_NULL,
      sym_TRUE,
    STATE(45), 11,
      sym__expression,
      sym_unary_op,
      sym_parameter,
      sym__property,
      sym_star_property,
      sym_collection_alias_star_property,
      sym_property_path,
      sym_array_literal,
      sym_dict_literal,
      sym__literal,
      sym_string_literal,
  [112] = 13,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(7), 1,
      anon_sym_LBRACK2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      aux_sym_identifier_token2,
    ACTIONS(21), 1,
      sym_unary_minus,
    ACTIONS(41), 1,
      sym_int_literal,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(15), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(23), 2,
      sym_unary_plus,
      sym_NOT,
    ACTIONS(43), 5,
      sym_float_literal,
      sym_FALSE,
      sym_MISSING,
      sym_NULL,
      sym_TRUE,
    STATE(43), 11,
      sym__expression,
      sym_unary_op,
      sym_parameter,
      sym__property,
      sym_star_property,
      sym_collection_alias_star_property,
      sym_property_path,
      sym_array_literal,
      sym_dict_literal,
      sym__literal,
      sym_string_literal,
  [168] = 4,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      aux_sym_property_path_repeat1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [186] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_property_path_repeat1,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [204] = 4,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_property_path_repeat1,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [222] = 1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [233] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [244] = 1,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [255] = 1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
  [265] = 1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [274] = 1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [283] = 1,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [292] = 1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [301] = 1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [310] = 1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [319] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [328] = 1,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [337] = 1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [346] = 1,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
  [355] = 4,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_dict_entry,
    STATE(52), 1,
      sym_string_literal,
    ACTIONS(15), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [369] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [380] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [391] = 3,
    ACTIONS(97), 1,
      anon_sym_STAR,
    STATE(12), 1,
      sym_identifier,
    ACTIONS(19), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [402] = 2,
    ACTIONS(101), 1,
      sym_AS,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [411] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [422] = 3,
    STATE(44), 1,
      sym_dict_entry,
    STATE(52), 1,
      sym_string_literal,
    ACTIONS(15), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [433] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_literal_repeat1,
  [443] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_literal_repeat1,
  [453] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_dict_literal_repeat1,
  [463] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_dict_literal_repeat1,
  [473] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_dict_literal_repeat1,
  [483] = 1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [489] = 2,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(19), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [497] = 1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [503] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_array_literal_repeat1,
  [513] = 2,
    STATE(12), 1,
      sym_identifier,
    ACTIONS(19), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [521] = 2,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(19), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [529] = 1,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [534] = 1,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [539] = 1,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [544] = 1,
    ACTIONS(134), 1,
      sym_int_literal,
  [548] = 1,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [552] = 1,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
  [556] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [560] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [564] = 1,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [568] = 1,
    ACTIONS(146), 1,
      anon_sym_COLON,
  [572] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 244,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 274,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 328,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 391,
  [SMALL_STATE(29)] = 402,
  [SMALL_STATE(30)] = 411,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 433,
  [SMALL_STATE(33)] = 443,
  [SMALL_STATE(34)] = 453,
  [SMALL_STATE(35)] = 463,
  [SMALL_STATE(36)] = 473,
  [SMALL_STATE(37)] = 483,
  [SMALL_STATE(38)] = 489,
  [SMALL_STATE(39)] = 497,
  [SMALL_STATE(40)] = 503,
  [SMALL_STATE(41)] = 513,
  [SMALL_STATE(42)] = 521,
  [SMALL_STATE(43)] = 529,
  [SMALL_STATE(44)] = 534,
  [SMALL_STATE(45)] = 539,
  [SMALL_STATE(46)] = 544,
  [SMALL_STATE(47)] = 548,
  [SMALL_STATE(48)] = 552,
  [SMALL_STATE(49)] = 556,
  [SMALL_STATE(50)] = 560,
  [SMALL_STATE(51)] = 564,
  [SMALL_STATE(52)] = 568,
  [SMALL_STATE(53)] = 572,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_path_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_path_repeat1, 2), SHIFT_REPEAT(41),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_path_repeat1, 2), SHIFT_REPEAT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_path, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_path, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_path_repeat1, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_alias_star_property, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_star_property, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_result, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2), SHIFT_REPEAT(3),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_result, 3, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entry, 3, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
