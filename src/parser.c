#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  sym_single_line_comment = 3,
  sym_multi_line_comment = 4,
  sym_null_literal = 5,
  sym_missing_literal = 6,
  sym_true_literal = 7,
  sym_false_literal = 8,
  sym_number_literal = 9,
  aux_sym_string_literal_token1 = 10,
  aux_sym_string_literal_token2 = 11,
  anon_sym_LBRACK = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_COLON = 17,
  sym_AS = 18,
  sym_NOT = 19,
  sym_SELECT = 20,
  anon_sym_DOLLAR = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  sym_source_file = 24,
  sym__literal = 25,
  sym_string_literal = 26,
  sym_array_literal = 27,
  sym_dict_literal = 28,
  sym_dict_entry = 29,
  sym__expr = 30,
  sym_parameter_expr = 31,
  sym_grouping_expr = 32,
  sym__statement = 33,
  sym_select_statement = 34,
  sym_select_list = 35,
  sym_select_result = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_array_literal_repeat1 = 38,
  aux_sym_dict_literal_repeat1 = 39,
  aux_sym_select_list_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
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
  [sym_AS] = "AS",
  [sym_NOT] = "NOT",
  [sym_SELECT] = "SELECT",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_array_literal] = "array_literal",
  [sym_dict_literal] = "dict_literal",
  [sym_dict_entry] = "dict_entry",
  [sym__expr] = "_expr",
  [sym_parameter_expr] = "parameter_expr",
  [sym_grouping_expr] = "grouping_expr",
  [sym__statement] = "_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_list] = "select_list",
  [sym_select_result] = "select_result",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_AS] = sym_AS,
  [sym_NOT] = sym_NOT,
  [sym_SELECT] = sym_SELECT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_array_literal] = sym_array_literal,
  [sym_dict_literal] = sym_dict_literal,
  [sym_dict_entry] = sym_dict_entry,
  [sym__expr] = sym__expr,
  [sym_parameter_expr] = sym_parameter_expr,
  [sym_grouping_expr] = sym_grouping_expr,
  [sym__statement] = sym__statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_list] = sym_select_list,
  [sym_select_result] = sym_select_result,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
  [aux_sym_select_list_repeat1] = aux_sym_select_list_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [sym_AS] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_SELECT] = {
    .visible = true,
    .named = true,
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
  [sym_parameter_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_grouping_expr] = {
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
  [aux_sym_select_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_key = 2,
  field_select_list = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_key] = "key",
  [field_select_list] = "select_list",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_select_list, 1},
  [1] =
    {field_alias, 1},
  [2] =
    {field_alias, 2},
  [3] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(28);
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
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '0') ADVANCE(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(41);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_multi_line_comment);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(10);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(5);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_AS);
      END_STATE();
    case 8:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_NOT);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_SELECT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_missing_literal);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_AS] = ACTIONS(1),
    [sym_NOT] = ACTIONS(1),
    [sym_SELECT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__literal] = STATE(10),
    [sym_string_literal] = STATE(13),
    [sym_array_literal] = STATE(13),
    [sym_dict_literal] = STATE(13),
    [sym__expr] = STATE(19),
    [sym_parameter_expr] = STATE(10),
    [sym_grouping_expr] = STATE(10),
    [sym__statement] = STATE(46),
    [sym_select_statement] = STATE(46),
    [sym_select_list] = STATE(45),
    [sym_select_result] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(7),
    [sym_missing_literal] = ACTIONS(7),
    [sym_true_literal] = ACTIONS(7),
    [sym_false_literal] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(7),
    [aux_sym_string_literal_token1] = ACTIONS(9),
    [aux_sym_string_literal_token2] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_SELECT] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
  [2] = {
    [sym__literal] = STATE(10),
    [sym_string_literal] = STATE(13),
    [sym_array_literal] = STATE(13),
    [sym_dict_literal] = STATE(13),
    [sym__expr] = STATE(19),
    [sym_parameter_expr] = STATE(10),
    [sym_grouping_expr] = STATE(10),
    [sym_select_list] = STATE(43),
    [sym_select_result] = STATE(24),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(7),
    [sym_missing_literal] = ACTIONS(7),
    [sym_true_literal] = ACTIONS(7),
    [sym_false_literal] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(7),
    [aux_sym_string_literal_token1] = ACTIONS(9),
    [aux_sym_string_literal_token2] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
  [3] = {
    [sym__literal] = STATE(10),
    [sym_string_literal] = STATE(13),
    [sym_array_literal] = STATE(13),
    [sym_dict_literal] = STATE(13),
    [sym__expr] = STATE(31),
    [sym_parameter_expr] = STATE(10),
    [sym_grouping_expr] = STATE(10),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(7),
    [sym_missing_literal] = ACTIONS(7),
    [sym_true_literal] = ACTIONS(7),
    [sym_false_literal] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(7),
    [aux_sym_string_literal_token1] = ACTIONS(9),
    [aux_sym_string_literal_token2] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
  [4] = {
    [sym__literal] = STATE(10),
    [sym_string_literal] = STATE(13),
    [sym_array_literal] = STATE(13),
    [sym_dict_literal] = STATE(13),
    [sym__expr] = STATE(19),
    [sym_parameter_expr] = STATE(10),
    [sym_grouping_expr] = STATE(10),
    [sym_select_result] = STATE(33),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(7),
    [sym_missing_literal] = ACTIONS(7),
    [sym_true_literal] = ACTIONS(7),
    [sym_false_literal] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(7),
    [aux_sym_string_literal_token1] = ACTIONS(9),
    [aux_sym_string_literal_token2] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(9), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(10), 3,
      sym__literal,
      sym_parameter_expr,
      sym_grouping_expr,
    STATE(13), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(7), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
  [41] = 10,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(9), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(10), 3,
      sym__literal,
      sym_parameter_expr,
      sym_grouping_expr,
    STATE(13), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(7), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
  [82] = 10,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym__expr,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(9), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(10), 3,
      sym__literal,
      sym_parameter_expr,
      sym_grouping_expr,
    STATE(13), 3,
      sym_string_literal,
      sym_array_literal,
      sym_dict_literal,
    ACTIONS(7), 5,
      sym_null_literal,
      sym_missing_literal,
      sym_true_literal,
      sym_false_literal,
      sym_number_literal,
  [123] = 3,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_AS,
      anon_sym_RPAREN,
  [141] = 3,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [158] = 3,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [175] = 3,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [192] = 3,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [209] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [226] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [243] = 3,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [260] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [277] = 3,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [294] = 3,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_AS,
      anon_sym_RPAREN,
  [311] = 4,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      sym_AS,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [327] = 5,
    ACTIONS(15), 1,
      sym_SELECT,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 2,
      sym__statement,
      sym_select_statement,
  [345] = 5,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_dict_entry,
    STATE(44), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(9), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [363] = 5,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_SELECT,
    STATE(22), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 2,
      sym__statement,
      sym_select_statement,
  [381] = 4,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [396] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [411] = 4,
    STATE(39), 1,
      sym_dict_entry,
    STATE(44), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(9), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [426] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [441] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [455] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [465] = 4,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [479] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [493] = 4,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [507] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [517] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [527] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [541] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [555] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_SELECT,
  [564] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [573] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [582] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [591] = 2,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [599] = 2,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [607] = 2,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [615] = 2,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [623] = 2,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [631] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [639] = 2,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [647] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 209,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 363,
  [SMALL_STATE(23)] = 381,
  [SMALL_STATE(24)] = 396,
  [SMALL_STATE(25)] = 411,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 441,
  [SMALL_STATE(28)] = 455,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 479,
  [SMALL_STATE(31)] = 493,
  [SMALL_STATE(32)] = 507,
  [SMALL_STATE(33)] = 517,
  [SMALL_STATE(34)] = 527,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 555,
  [SMALL_STATE(37)] = 564,
  [SMALL_STATE(38)] = 573,
  [SMALL_STATE(39)] = 582,
  [SMALL_STATE(40)] = 591,
  [SMALL_STATE(41)] = 599,
  [SMALL_STATE(42)] = 607,
  [SMALL_STATE(43)] = 615,
  [SMALL_STATE(44)] = 623,
  [SMALL_STATE(45)] = 631,
  [SMALL_STATE(46)] = 639,
  [SMALL_STATE(47)] = 647,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping_expr, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping_expr, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_expr, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_expr, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_result, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_result, 2, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_result, 3, .production_id = 3),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entry, 3, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
