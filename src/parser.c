#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  anon_sym_puzzle_DASHview = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_puzzle_DASHskeleton = 5,
  anon_sym_script = 6,
  anon_sym_style = 7,
  anon_sym_SLASH_GT = 8,
  anon_sym_SLASH = 9,
  aux_sym_tag_name_token1 = 10,
  anon_sym_area = 11,
  anon_sym_base = 12,
  anon_sym_br = 13,
  anon_sym_col = 14,
  anon_sym_embed = 15,
  anon_sym_hr = 16,
  anon_sym_img = 17,
  anon_sym_input = 18,
  anon_sym_link = 19,
  anon_sym_meta = 20,
  anon_sym_param = 21,
  anon_sym_source = 22,
  anon_sym_track = 23,
  anon_sym_wbr = 24,
  anon_sym_EQ = 25,
  anon_sym_AT = 26,
  anon_sym_COLON = 27,
  sym_attribute_name = 28,
  aux_sym_event_name_token1 = 29,
  sym_unquoted_attribute_value = 30,
  anon_sym_DQUOTE = 31,
  anon_sym_SQUOTE = 32,
  sym_attribute_text = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_PIPE = 36,
  sym_formatter_name = 37,
  anon_sym_LPAREN = 38,
  anon_sym_COMMA = 39,
  anon_sym_RPAREN = 40,
  anon_sym_POUND = 41,
  anon_sym_if = 42,
  anon_sym_else = 43,
  anon_sym_if2 = 44,
  anon_sym_unless = 45,
  anon_sym_unless2 = 46,
  anon_sym_case = 47,
  anon_sym_when = 48,
  anon_sym_case2 = 49,
  anon_sym_for = 50,
  anon_sym_for2 = 51,
  anon_sym_svg = 52,
  anon_sym_raw = 53,
  sym_raw_opener_rest = 54,
  anon_sym_raw2 = 55,
  sym_raw_attribute_name = 56,
  sym_raw_unquoted_attribute_value = 57,
  sym_raw_attribute_text = 58,
  sym_escaped_brace = 59,
  sym_text = 60,
  sym_comment = 61,
  sym_script_content = 62,
  sym_style_content = 63,
  sym_expression_content = 64,
  sym_inline_comment = 65,
  sym_block_comment = 66,
  sym_directive_expression = 67,
  sym_formatter_argument = 68,
  sym_raw_text = 69,
  sym_raw_brace_value = 70,
  sym_document = 71,
  sym__top_level = 72,
  sym__node = 73,
  sym_view_element = 74,
  sym_view_start_tag = 75,
  sym_view_end_tag = 76,
  sym_skeleton_element = 77,
  sym_skeleton_start_tag = 78,
  sym_skeleton_end_tag = 79,
  sym_script_element = 80,
  sym_script_start_tag = 81,
  sym_script_end_tag = 82,
  sym_style_element = 83,
  sym_style_start_tag = 84,
  sym_style_end_tag = 85,
  sym_element = 86,
  sym_start_tag = 87,
  sym_end_tag = 88,
  sym_self_closing_element = 89,
  sym_void_element = 90,
  sym_tag_name = 91,
  sym_void_tag_name = 92,
  sym_attribute = 93,
  sym_normal_attribute = 94,
  sym_event_attribute = 95,
  sym_event_name = 96,
  sym_event_modifier = 97,
  sym_quoted_attribute_value = 98,
  sym__attribute_node = 99,
  sym_interpolation = 100,
  sym_formatter = 101,
  sym_formatter_arguments = 102,
  sym_if_statement = 103,
  sym_if_start = 104,
  sym_else_if_block = 105,
  sym_else_if_start = 106,
  sym_else_block = 107,
  sym_else_start = 108,
  sym_if_end = 109,
  sym_unless_statement = 110,
  sym_unless_start = 111,
  sym_unless_end = 112,
  sym_case_statement = 113,
  sym_case_start = 114,
  sym_when_block = 115,
  sym_when_start = 116,
  sym_case_else_block = 117,
  sym_case_end = 118,
  sym_for_statement = 119,
  sym_for_start = 120,
  sym_for_else_block = 121,
  sym_for_end = 122,
  sym_svg_directive = 123,
  sym_raw_block = 124,
  sym_raw_start = 125,
  sym_raw_end = 126,
  sym__raw_node = 127,
  sym_raw_element = 128,
  sym_raw_start_tag = 129,
  sym_raw_end_tag = 130,
  sym_raw_self_closing_element = 131,
  sym_raw_void_element = 132,
  sym_raw_tag_name = 133,
  sym_raw_attribute = 134,
  sym_raw_quoted_attribute_value = 135,
  sym_attribute_if_statement = 136,
  sym_attribute_else_if_block = 137,
  sym_attribute_else_block = 138,
  sym_attribute_unless_statement = 139,
  sym_attribute_case_statement = 140,
  sym_attribute_when_block = 141,
  sym_attribute_case_else_block = 142,
  sym_attribute_for_statement = 143,
  sym_attribute_for_else_block = 144,
  aux_sym_document_repeat1 = 145,
  aux_sym_view_element_repeat1 = 146,
  aux_sym_view_start_tag_repeat1 = 147,
  aux_sym_event_attribute_repeat1 = 148,
  aux_sym_quoted_attribute_value_repeat1 = 149,
  aux_sym_interpolation_repeat1 = 150,
  aux_sym_formatter_arguments_repeat1 = 151,
  aux_sym_if_statement_repeat1 = 152,
  aux_sym_case_statement_repeat1 = 153,
  aux_sym_raw_block_repeat1 = 154,
  aux_sym_raw_start_tag_repeat1 = 155,
  aux_sym_attribute_if_statement_repeat1 = 156,
  aux_sym_attribute_case_statement_repeat1 = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_puzzle_DASHview] = "section_tag_name",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_puzzle_DASHskeleton] = "section_tag_name",
  [anon_sym_script] = "section_tag_name",
  [anon_sym_style] = "section_tag_name",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_SLASH] = "/",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [anon_sym_area] = "area",
  [anon_sym_base] = "base",
  [anon_sym_br] = "br",
  [anon_sym_col] = "col",
  [anon_sym_embed] = "embed",
  [anon_sym_hr] = "hr",
  [anon_sym_img] = "img",
  [anon_sym_input] = "input",
  [anon_sym_link] = "link",
  [anon_sym_meta] = "meta",
  [anon_sym_param] = "param",
  [anon_sym_source] = "source",
  [anon_sym_track] = "track",
  [anon_sym_wbr] = "wbr",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_event_name_token1] = "event_name_token1",
  [sym_unquoted_attribute_value] = "unquoted_attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_attribute_text] = "attribute_text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [sym_formatter_name] = "formatter_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND] = "#",
  [anon_sym_if] = "directive_name",
  [anon_sym_else] = "directive_name",
  [anon_sym_if2] = "directive_name",
  [anon_sym_unless] = "directive_name",
  [anon_sym_unless2] = "directive_name",
  [anon_sym_case] = "directive_name",
  [anon_sym_when] = "directive_name",
  [anon_sym_case2] = "directive_name",
  [anon_sym_for] = "directive_name",
  [anon_sym_for2] = "directive_name",
  [anon_sym_svg] = "directive_name",
  [anon_sym_raw] = "directive_name",
  [sym_raw_opener_rest] = "raw_opener_rest",
  [anon_sym_raw2] = "directive_name",
  [sym_raw_attribute_name] = "raw_attribute_name",
  [sym_raw_unquoted_attribute_value] = "raw_unquoted_attribute_value",
  [sym_raw_attribute_text] = "raw_attribute_text",
  [sym_escaped_brace] = "escaped_brace",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_script_content] = "script_content",
  [sym_style_content] = "style_content",
  [sym_expression_content] = "expression_content",
  [sym_inline_comment] = "inline_comment",
  [sym_block_comment] = "block_comment",
  [sym_directive_expression] = "expression_content",
  [sym_formatter_argument] = "expression_content",
  [sym_raw_text] = "raw_text",
  [sym_raw_brace_value] = "raw_brace_value",
  [sym_document] = "document",
  [sym__top_level] = "_top_level",
  [sym__node] = "_node",
  [sym_view_element] = "view_element",
  [sym_view_start_tag] = "view_start_tag",
  [sym_view_end_tag] = "view_end_tag",
  [sym_skeleton_element] = "skeleton_element",
  [sym_skeleton_start_tag] = "skeleton_start_tag",
  [sym_skeleton_end_tag] = "skeleton_end_tag",
  [sym_script_element] = "script_element",
  [sym_script_start_tag] = "script_start_tag",
  [sym_script_end_tag] = "script_end_tag",
  [sym_style_element] = "style_element",
  [sym_style_start_tag] = "style_start_tag",
  [sym_style_end_tag] = "style_end_tag",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_element] = "self_closing_element",
  [sym_void_element] = "void_element",
  [sym_tag_name] = "tag_name",
  [sym_void_tag_name] = "void_tag_name",
  [sym_attribute] = "attribute",
  [sym_normal_attribute] = "normal_attribute",
  [sym_event_attribute] = "event_attribute",
  [sym_event_name] = "event_name",
  [sym_event_modifier] = "event_modifier",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__attribute_node] = "_attribute_node",
  [sym_interpolation] = "interpolation",
  [sym_formatter] = "formatter",
  [sym_formatter_arguments] = "formatter_arguments",
  [sym_if_statement] = "if_statement",
  [sym_if_start] = "if_start",
  [sym_else_if_block] = "else_if_block",
  [sym_else_if_start] = "else_if_start",
  [sym_else_block] = "else_block",
  [sym_else_start] = "else_start",
  [sym_if_end] = "if_end",
  [sym_unless_statement] = "unless_statement",
  [sym_unless_start] = "unless_start",
  [sym_unless_end] = "unless_end",
  [sym_case_statement] = "case_statement",
  [sym_case_start] = "case_start",
  [sym_when_block] = "when_block",
  [sym_when_start] = "when_start",
  [sym_case_else_block] = "case_else_block",
  [sym_case_end] = "case_end",
  [sym_for_statement] = "for_statement",
  [sym_for_start] = "for_start",
  [sym_for_else_block] = "for_else_block",
  [sym_for_end] = "for_end",
  [sym_svg_directive] = "svg_directive",
  [sym_raw_block] = "raw_block",
  [sym_raw_start] = "raw_start",
  [sym_raw_end] = "raw_end",
  [sym__raw_node] = "_raw_node",
  [sym_raw_element] = "raw_element",
  [sym_raw_start_tag] = "raw_start_tag",
  [sym_raw_end_tag] = "raw_end_tag",
  [sym_raw_self_closing_element] = "raw_self_closing_element",
  [sym_raw_void_element] = "raw_void_element",
  [sym_raw_tag_name] = "raw_tag_name",
  [sym_raw_attribute] = "raw_attribute",
  [sym_raw_quoted_attribute_value] = "raw_quoted_attribute_value",
  [sym_attribute_if_statement] = "attribute_if_statement",
  [sym_attribute_else_if_block] = "attribute_else_if_block",
  [sym_attribute_else_block] = "attribute_else_block",
  [sym_attribute_unless_statement] = "attribute_unless_statement",
  [sym_attribute_case_statement] = "attribute_case_statement",
  [sym_attribute_when_block] = "attribute_when_block",
  [sym_attribute_case_else_block] = "attribute_case_else_block",
  [sym_attribute_for_statement] = "attribute_for_statement",
  [sym_attribute_for_else_block] = "attribute_for_else_block",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_view_element_repeat1] = "view_element_repeat1",
  [aux_sym_view_start_tag_repeat1] = "view_start_tag_repeat1",
  [aux_sym_event_attribute_repeat1] = "event_attribute_repeat1",
  [aux_sym_quoted_attribute_value_repeat1] = "quoted_attribute_value_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
  [aux_sym_formatter_arguments_repeat1] = "formatter_arguments_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_raw_block_repeat1] = "raw_block_repeat1",
  [aux_sym_raw_start_tag_repeat1] = "raw_start_tag_repeat1",
  [aux_sym_attribute_if_statement_repeat1] = "attribute_if_statement_repeat1",
  [aux_sym_attribute_case_statement_repeat1] = "attribute_case_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_puzzle_DASHview] = anon_sym_puzzle_DASHview,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_puzzle_DASHskeleton] = anon_sym_puzzle_DASHview,
  [anon_sym_script] = anon_sym_puzzle_DASHview,
  [anon_sym_style] = anon_sym_puzzle_DASHview,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [anon_sym_area] = anon_sym_area,
  [anon_sym_base] = anon_sym_base,
  [anon_sym_br] = anon_sym_br,
  [anon_sym_col] = anon_sym_col,
  [anon_sym_embed] = anon_sym_embed,
  [anon_sym_hr] = anon_sym_hr,
  [anon_sym_img] = anon_sym_img,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_track] = anon_sym_track,
  [anon_sym_wbr] = anon_sym_wbr,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_event_name_token1] = aux_sym_event_name_token1,
  [sym_unquoted_attribute_value] = sym_unquoted_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_attribute_text] = sym_attribute_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_formatter_name] = sym_formatter_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_if,
  [anon_sym_if2] = anon_sym_if,
  [anon_sym_unless] = anon_sym_if,
  [anon_sym_unless2] = anon_sym_if,
  [anon_sym_case] = anon_sym_if,
  [anon_sym_when] = anon_sym_if,
  [anon_sym_case2] = anon_sym_if,
  [anon_sym_for] = anon_sym_if,
  [anon_sym_for2] = anon_sym_if,
  [anon_sym_svg] = anon_sym_if,
  [anon_sym_raw] = anon_sym_if,
  [sym_raw_opener_rest] = sym_raw_opener_rest,
  [anon_sym_raw2] = anon_sym_if,
  [sym_raw_attribute_name] = sym_raw_attribute_name,
  [sym_raw_unquoted_attribute_value] = sym_raw_unquoted_attribute_value,
  [sym_raw_attribute_text] = sym_raw_attribute_text,
  [sym_escaped_brace] = sym_escaped_brace,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_script_content] = sym_script_content,
  [sym_style_content] = sym_style_content,
  [sym_expression_content] = sym_expression_content,
  [sym_inline_comment] = sym_inline_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_directive_expression] = sym_expression_content,
  [sym_formatter_argument] = sym_expression_content,
  [sym_raw_text] = sym_raw_text,
  [sym_raw_brace_value] = sym_raw_brace_value,
  [sym_document] = sym_document,
  [sym__top_level] = sym__top_level,
  [sym__node] = sym__node,
  [sym_view_element] = sym_view_element,
  [sym_view_start_tag] = sym_view_start_tag,
  [sym_view_end_tag] = sym_view_end_tag,
  [sym_skeleton_element] = sym_skeleton_element,
  [sym_skeleton_start_tag] = sym_skeleton_start_tag,
  [sym_skeleton_end_tag] = sym_skeleton_end_tag,
  [sym_script_element] = sym_script_element,
  [sym_script_start_tag] = sym_script_start_tag,
  [sym_script_end_tag] = sym_script_end_tag,
  [sym_style_element] = sym_style_element,
  [sym_style_start_tag] = sym_style_start_tag,
  [sym_style_end_tag] = sym_style_end_tag,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_element] = sym_self_closing_element,
  [sym_void_element] = sym_void_element,
  [sym_tag_name] = sym_tag_name,
  [sym_void_tag_name] = sym_void_tag_name,
  [sym_attribute] = sym_attribute,
  [sym_normal_attribute] = sym_normal_attribute,
  [sym_event_attribute] = sym_event_attribute,
  [sym_event_name] = sym_event_name,
  [sym_event_modifier] = sym_event_modifier,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__attribute_node] = sym__attribute_node,
  [sym_interpolation] = sym_interpolation,
  [sym_formatter] = sym_formatter,
  [sym_formatter_arguments] = sym_formatter_arguments,
  [sym_if_statement] = sym_if_statement,
  [sym_if_start] = sym_if_start,
  [sym_else_if_block] = sym_else_if_block,
  [sym_else_if_start] = sym_else_if_start,
  [sym_else_block] = sym_else_block,
  [sym_else_start] = sym_else_start,
  [sym_if_end] = sym_if_end,
  [sym_unless_statement] = sym_unless_statement,
  [sym_unless_start] = sym_unless_start,
  [sym_unless_end] = sym_unless_end,
  [sym_case_statement] = sym_case_statement,
  [sym_case_start] = sym_case_start,
  [sym_when_block] = sym_when_block,
  [sym_when_start] = sym_when_start,
  [sym_case_else_block] = sym_case_else_block,
  [sym_case_end] = sym_case_end,
  [sym_for_statement] = sym_for_statement,
  [sym_for_start] = sym_for_start,
  [sym_for_else_block] = sym_for_else_block,
  [sym_for_end] = sym_for_end,
  [sym_svg_directive] = sym_svg_directive,
  [sym_raw_block] = sym_raw_block,
  [sym_raw_start] = sym_raw_start,
  [sym_raw_end] = sym_raw_end,
  [sym__raw_node] = sym__raw_node,
  [sym_raw_element] = sym_raw_element,
  [sym_raw_start_tag] = sym_raw_start_tag,
  [sym_raw_end_tag] = sym_raw_end_tag,
  [sym_raw_self_closing_element] = sym_raw_self_closing_element,
  [sym_raw_void_element] = sym_raw_void_element,
  [sym_raw_tag_name] = sym_raw_tag_name,
  [sym_raw_attribute] = sym_raw_attribute,
  [sym_raw_quoted_attribute_value] = sym_raw_quoted_attribute_value,
  [sym_attribute_if_statement] = sym_attribute_if_statement,
  [sym_attribute_else_if_block] = sym_attribute_else_if_block,
  [sym_attribute_else_block] = sym_attribute_else_block,
  [sym_attribute_unless_statement] = sym_attribute_unless_statement,
  [sym_attribute_case_statement] = sym_attribute_case_statement,
  [sym_attribute_when_block] = sym_attribute_when_block,
  [sym_attribute_case_else_block] = sym_attribute_case_else_block,
  [sym_attribute_for_statement] = sym_attribute_for_statement,
  [sym_attribute_for_else_block] = sym_attribute_for_else_block,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_view_element_repeat1] = aux_sym_view_element_repeat1,
  [aux_sym_view_start_tag_repeat1] = aux_sym_view_start_tag_repeat1,
  [aux_sym_event_attribute_repeat1] = aux_sym_event_attribute_repeat1,
  [aux_sym_quoted_attribute_value_repeat1] = aux_sym_quoted_attribute_value_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
  [aux_sym_formatter_arguments_repeat1] = aux_sym_formatter_arguments_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
  [aux_sym_raw_block_repeat1] = aux_sym_raw_block_repeat1,
  [aux_sym_raw_start_tag_repeat1] = aux_sym_raw_start_tag_repeat1,
  [aux_sym_attribute_if_statement_repeat1] = aux_sym_attribute_if_statement_repeat1,
  [aux_sym_attribute_case_statement_repeat1] = aux_sym_attribute_case_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_puzzle_DASHview] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_puzzle_DASHskeleton] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_area] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_br] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_img] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_track] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wbr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_event_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_formatter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unless2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_svg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_opener_rest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_raw2] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_unquoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_attribute_text] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_script_content] = {
    .visible = true,
    .named = true,
  },
  [sym_style_content] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_content] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_formatter_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_brace_value] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_view_element] = {
    .visible = true,
    .named = true,
  },
  [sym_view_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_view_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_skeleton_element] = {
    .visible = true,
    .named = true,
  },
  [sym_skeleton_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_skeleton_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_element] = {
    .visible = true,
    .named = true,
  },
  [sym_void_element] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_void_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_event_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_event_name] = {
    .visible = true,
    .named = true,
  },
  [sym_event_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_node] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_formatter] = {
    .visible = true,
    .named = true,
  },
  [sym_formatter_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_start] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_start] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_start] = {
    .visible = true,
    .named = true,
  },
  [sym_if_end] = {
    .visible = true,
    .named = true,
  },
  [sym_unless_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unless_start] = {
    .visible = true,
    .named = true,
  },
  [sym_unless_end] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_start] = {
    .visible = true,
    .named = true,
  },
  [sym_when_block] = {
    .visible = true,
    .named = true,
  },
  [sym_when_start] = {
    .visible = true,
    .named = true,
  },
  [sym_case_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_case_end] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_start] = {
    .visible = true,
    .named = true,
  },
  [sym_for_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_for_end] = {
    .visible = true,
    .named = true,
  },
  [sym_svg_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_block] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_start] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_end] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_node] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_element] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_self_closing_element] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_void_element] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_else_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_unless_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_when_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_case_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_for_else_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_view_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_view_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formatter_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_clause = 1,
  field_condition = 2,
  field_modifier = 3,
  field_name = 4,
  field_path = 5,
  field_value = 6,
  field_values = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_clause] = "clause",
  [field_condition] = "condition",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_path] = "path",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 3},
  [15] = {.index = 20, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_value, 1},
  [3] =
    {field_modifier, 2, .inherited = true},
    {field_name, 1},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_condition, 3},
  [8] =
    {field_value, 3},
  [9] =
    {field_clause, 3},
  [10] =
    {field_path, 3},
  [11] =
    {field_name, 1},
    {field_value, 3},
  [13] =
    {field_modifier, 1},
  [14] =
    {field_modifier, 0, .inherited = true},
    {field_modifier, 1, .inherited = true},
  [16] =
    {field_values, 3},
  [17] =
    {field_modifier, 2, .inherited = true},
    {field_name, 1},
    {field_value, 4},
  [20] =
    {field_condition, 4},
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
  [40] = 38,
  [41] = 41,
  [42] = 37,
  [43] = 41,
  [44] = 39,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 99,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 137,
  [139] = 118,
  [140] = 116,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 148,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 160,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 153,
  [182] = 80,
  [183] = 82,
  [184] = 83,
  [185] = 84,
  [186] = 161,
  [187] = 63,
  [188] = 72,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 63,
  [210] = 210,
  [211] = 211,
  [212] = 72,
  [213] = 200,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 206,
  [220] = 207,
  [221] = 216,
  [222] = 195,
  [223] = 214,
  [224] = 224,
  [225] = 63,
  [226] = 72,
  [227] = 192,
  [228] = 201,
  [229] = 201,
  [230] = 208,
  [231] = 192,
  [232] = 201,
  [233] = 192,
  [234] = 234,
  [235] = 235,
  [236] = 122,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 131,
  [241] = 235,
  [242] = 242,
  [243] = 243,
  [244] = 123,
  [245] = 127,
  [246] = 129,
  [247] = 237,
  [248] = 134,
  [249] = 211,
  [250] = 250,
  [251] = 251,
  [252] = 242,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 284,
  [295] = 295,
  [296] = 296,
  [297] = 261,
  [298] = 264,
  [299] = 299,
  [300] = 300,
  [301] = 285,
  [302] = 302,
  [303] = 295,
  [304] = 299,
  [305] = 280,
  [306] = 292,
  [307] = 288,
  [308] = 296,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 316,
  [355] = 319,
  [356] = 321,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 311,
  [363] = 350,
  [364] = 349,
  [365] = 352,
  [366] = 366,
  [367] = 342,
  [368] = 368,
  [369] = 369,
  [370] = 310,
  [371] = 313,
  [372] = 372,
  [373] = 373,
  [374] = 351,
  [375] = 309,
  [376] = 366,
  [377] = 341,
  [378] = 360,
  [379] = 338,
  [380] = 346,
  [381] = 361,
  [382] = 382,
  [383] = 322,
  [384] = 325,
  [385] = 326,
  [386] = 336,
  [387] = 387,
  [388] = 388,
  [389] = 337,
  [390] = 327,
  [391] = 323,
  [392] = 324,
  [393] = 382,
  [394] = 312,
  [395] = 343,
  [396] = 396,
  [397] = 329,
  [398] = 396,
  [399] = 315,
  [400] = 340,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(124);
      ADVANCE_MAP(
        '"', 238,
        '#', 250,
        '\'', 239,
        '(', 247,
        ')', 249,
        ',', 248,
        '/', 137,
        ':', 233,
        '<', 125,
        '=', 231,
        '>', 128,
        '@', 232,
        '\\', 116,
        'a', 89,
        'b', 13,
        'c', 24,
        'e', 71,
        'f', 79,
        'h', 84,
        'i', 54,
        'l', 59,
        'm', 37,
        'p', 22,
        'r', 14,
        's', 32,
        't', 90,
        'u', 77,
        'w', 28,
        '{', 243,
        '|', 245,
        '}', 244,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '{') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(241);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '>') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(265);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '>') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(265);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'a', 187,
        'b', 139,
        'c', 178,
        'e', 175,
        'h', 183,
        'i', 173,
        'l', 163,
        'm', 152,
        'p', 144,
        's', 149,
        't', 184,
        'w', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        'a', 187,
        'b', 139,
        'c', 178,
        'e', 175,
        'h', 183,
        'i', 173,
        'l', 163,
        'm', 152,
        'p', 145,
        's', 179,
        't', 184,
        'w', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '}') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(251);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(253);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(219);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 109:
      if (lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 110:
      if (lookahead == 'w') ADVANCE(264);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 113:
      if (lookahead == 'z') ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == '}') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(115);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 116:
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(269);
      END_STATE();
    case 117:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 118:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(118);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 119:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 120:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 121:
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(271);
      END_STATE();
    case 122:
      if (eof) ADVANCE(124);
      ADVANCE_MAP(
        '"', 238,
        '#', 250,
        '\'', 239,
        '(', 247,
        ')', 249,
        ',', 248,
        '/', 137,
        ':', 233,
        '<', 125,
        '=', 231,
        '>', 128,
        '@', 232,
        '\\', 116,
        'a', 89,
        'b', 13,
        'c', 26,
        'e', 72,
        'f', 81,
        'h', 84,
        'i', 56,
        'l', 59,
        'm', 37,
        'p', 22,
        'r', 20,
        's', 31,
        't', 90,
        'u', 78,
        'w', 27,
        '{', 243,
        '|', 245,
        '}', 244,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      END_STATE();
    case 123:
      if (eof) ADVANCE(124);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '{') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(271);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHview);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHview);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHskeleton);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHskeleton);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_style);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'g') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'y') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'z') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'z') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_area);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_br);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_col);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_col);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_embed);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_hr);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_hr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_img);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_img);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_track);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_wbr);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_wbr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_event_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead == '\\') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\') ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_formatter_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_if2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_unless2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_case2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_for2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_raw_opener_rest);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_raw2);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_raw_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_raw_unquoted_attribute_value);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_raw_attribute_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_raw_attribute_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_escaped_brace);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(272);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\') ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 123, .external_lex_state = 2},
  [2] = {.lex_state = 123, .external_lex_state = 2},
  [3] = {.lex_state = 123, .external_lex_state = 2},
  [4] = {.lex_state = 123, .external_lex_state = 2},
  [5] = {.lex_state = 123, .external_lex_state = 2},
  [6] = {.lex_state = 123, .external_lex_state = 2},
  [7] = {.lex_state = 123, .external_lex_state = 2},
  [8] = {.lex_state = 123, .external_lex_state = 2},
  [9] = {.lex_state = 123, .external_lex_state = 2},
  [10] = {.lex_state = 123, .external_lex_state = 2},
  [11] = {.lex_state = 123, .external_lex_state = 2},
  [12] = {.lex_state = 123, .external_lex_state = 2},
  [13] = {.lex_state = 123, .external_lex_state = 2},
  [14] = {.lex_state = 123, .external_lex_state = 2},
  [15] = {.lex_state = 123, .external_lex_state = 2},
  [16] = {.lex_state = 123, .external_lex_state = 2},
  [17] = {.lex_state = 123, .external_lex_state = 2},
  [18] = {.lex_state = 123, .external_lex_state = 2},
  [19] = {.lex_state = 123, .external_lex_state = 2},
  [20] = {.lex_state = 123, .external_lex_state = 2},
  [21] = {.lex_state = 123, .external_lex_state = 2},
  [22] = {.lex_state = 123, .external_lex_state = 2},
  [23] = {.lex_state = 123, .external_lex_state = 2},
  [24] = {.lex_state = 123, .external_lex_state = 2},
  [25] = {.lex_state = 123, .external_lex_state = 2},
  [26] = {.lex_state = 123, .external_lex_state = 2},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 123, .external_lex_state = 2},
  [61] = {.lex_state = 123, .external_lex_state = 2},
  [62] = {.lex_state = 123, .external_lex_state = 2},
  [63] = {.lex_state = 123, .external_lex_state = 2},
  [64] = {.lex_state = 123, .external_lex_state = 2},
  [65] = {.lex_state = 123, .external_lex_state = 2},
  [66] = {.lex_state = 123, .external_lex_state = 2},
  [67] = {.lex_state = 123, .external_lex_state = 2},
  [68] = {.lex_state = 123, .external_lex_state = 2},
  [69] = {.lex_state = 123, .external_lex_state = 2},
  [70] = {.lex_state = 123, .external_lex_state = 2},
  [71] = {.lex_state = 123, .external_lex_state = 2},
  [72] = {.lex_state = 123, .external_lex_state = 2},
  [73] = {.lex_state = 123, .external_lex_state = 2},
  [74] = {.lex_state = 123, .external_lex_state = 2},
  [75] = {.lex_state = 123, .external_lex_state = 2},
  [76] = {.lex_state = 123, .external_lex_state = 2},
  [77] = {.lex_state = 123, .external_lex_state = 2},
  [78] = {.lex_state = 123, .external_lex_state = 2},
  [79] = {.lex_state = 123, .external_lex_state = 2},
  [80] = {.lex_state = 123, .external_lex_state = 2},
  [81] = {.lex_state = 123, .external_lex_state = 2},
  [82] = {.lex_state = 123, .external_lex_state = 2},
  [83] = {.lex_state = 123, .external_lex_state = 2},
  [84] = {.lex_state = 123, .external_lex_state = 2},
  [85] = {.lex_state = 123, .external_lex_state = 2},
  [86] = {.lex_state = 123, .external_lex_state = 2},
  [87] = {.lex_state = 123, .external_lex_state = 2},
  [88] = {.lex_state = 123, .external_lex_state = 2},
  [89] = {.lex_state = 123, .external_lex_state = 2},
  [90] = {.lex_state = 123, .external_lex_state = 2},
  [91] = {.lex_state = 123, .external_lex_state = 2},
  [92] = {.lex_state = 123, .external_lex_state = 2},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 123, .external_lex_state = 2},
  [95] = {.lex_state = 123, .external_lex_state = 2},
  [96] = {.lex_state = 123, .external_lex_state = 2},
  [97] = {.lex_state = 123, .external_lex_state = 2},
  [98] = {.lex_state = 123, .external_lex_state = 2},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 123, .external_lex_state = 2},
  [101] = {.lex_state = 123, .external_lex_state = 2},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 123, .external_lex_state = 2},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 123, .external_lex_state = 2},
  [106] = {.lex_state = 123, .external_lex_state = 2},
  [107] = {.lex_state = 123, .external_lex_state = 2},
  [108] = {.lex_state = 123, .external_lex_state = 2},
  [109] = {.lex_state = 123, .external_lex_state = 2},
  [110] = {.lex_state = 123, .external_lex_state = 2},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 123, .external_lex_state = 2},
  [113] = {.lex_state = 123, .external_lex_state = 2},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 123, .external_lex_state = 2},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 123, .external_lex_state = 2},
  [123] = {.lex_state = 123, .external_lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 123, .external_lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 123, .external_lex_state = 2},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 123, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 123, .external_lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 33},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 2, .external_lex_state = 4},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 2, .external_lex_state = 4},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0, .external_lex_state = 5},
  [194] = {.lex_state = 0, .external_lex_state = 3},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0, .external_lex_state = 5},
  [197] = {.lex_state = 0, .external_lex_state = 5},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 5},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 33},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 0, .external_lex_state = 7},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0, .external_lex_state = 6},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 119},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 115},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 8},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 117},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 119},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0, .external_lex_state = 7},
  [287] = {.lex_state = 117},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0, .external_lex_state = 5},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0, .external_lex_state = 5},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 119},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 35},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 119},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 7},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0, .external_lex_state = 6},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 35},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 35},
  [323] = {.lex_state = 0, .external_lex_state = 9},
  [324] = {.lex_state = 0, .external_lex_state = 5},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 35},
  [336] = {.lex_state = 35},
  [337] = {.lex_state = 35},
  [338] = {.lex_state = 35},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0, .external_lex_state = 9},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 35},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 118},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0, .external_lex_state = 8},
  [360] = {.lex_state = 0, .external_lex_state = 9},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0, .external_lex_state = 9},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0, .external_lex_state = 9},
  [377] = {.lex_state = 0, .external_lex_state = 9},
  [378] = {.lex_state = 0, .external_lex_state = 9},
  [379] = {.lex_state = 35},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0, .external_lex_state = 9},
  [383] = {.lex_state = 35},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 35},
  [387] = {.lex_state = 0, .external_lex_state = 9},
  [388] = {.lex_state = 0, .external_lex_state = 9},
  [389] = {.lex_state = 35},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0, .external_lex_state = 9},
  [392] = {.lex_state = 0, .external_lex_state = 5},
  [393] = {.lex_state = 0, .external_lex_state = 9},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 35},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_puzzle_DASHview] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_puzzle_DASHskeleton] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_area] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_br] = ACTIONS(1),
    [anon_sym_col] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_hr] = ACTIONS(1),
    [anon_sym_img] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_track] = ACTIONS(1),
    [anon_sym_wbr] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_if2] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_unless2] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_case2] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_for2] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_raw2] = ACTIONS(1),
    [sym_escaped_brace] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_script_content] = ACTIONS(1),
    [sym_style_content] = ACTIONS(1),
    [sym_expression_content] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
    [sym_directive_expression] = ACTIONS(1),
    [sym_formatter_argument] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_raw_brace_value] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(339),
    [sym__top_level] = STATE(2),
    [sym__node] = STATE(2),
    [sym_view_element] = STATE(2),
    [sym_view_start_tag] = STATE(12),
    [sym_skeleton_element] = STATE(2),
    [sym_skeleton_start_tag] = STATE(11),
    [sym_script_element] = STATE(2),
    [sym_script_start_tag] = STATE(243),
    [sym_style_element] = STATE(2),
    [sym_style_start_tag] = STATE(238),
    [sym_element] = STATE(77),
    [sym_start_tag] = STATE(14),
    [sym_self_closing_element] = STATE(77),
    [sym_void_element] = STATE(77),
    [sym_interpolation] = STATE(77),
    [sym_if_statement] = STATE(77),
    [sym_if_start] = STATE(4),
    [sym_unless_statement] = STATE(77),
    [sym_unless_start] = STATE(8),
    [sym_case_statement] = STATE(77),
    [sym_case_start] = STATE(132),
    [sym_for_statement] = STATE(77),
    [sym_for_start] = STATE(9),
    [sym_svg_directive] = STATE(77),
    [sym_raw_block] = STATE(77),
    [sym_raw_start] = STATE(58),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_escaped_brace] = ACTIONS(9),
    [sym_text] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_inline_comment] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(11), 1,
      sym_skeleton_start_tag,
    STATE(12), 1,
      sym_view_start_tag,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    STATE(238), 1,
      sym_style_start_tag,
    STATE(243), 1,
      sym_script_start_tag,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(3), 7,
      sym__top_level,
      sym__node,
      sym_view_element,
      sym_skeleton_element,
      sym_script_element,
      sym_style_element,
      aux_sym_document_repeat1,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [70] = 17,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(20), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(11), 1,
      sym_skeleton_start_tag,
    STATE(12), 1,
      sym_view_start_tag,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    STATE(238), 1,
      sym_style_start_tag,
    STATE(243), 1,
      sym_script_start_tag,
    ACTIONS(23), 2,
      sym_escaped_brace,
      sym_text,
    ACTIONS(26), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(3), 7,
      sym__top_level,
      sym__node,
      sym_view_element,
      sym_skeleton_element,
      sym_script_element,
      sym_style_element,
      aux_sym_document_repeat1,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [140] = 17,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_else_start,
    STATE(19), 1,
      sym_else_if_start,
    STATE(58), 1,
      sym_raw_start,
    STATE(89), 1,
      sym_if_end,
    STATE(132), 1,
      sym_case_start,
    STATE(281), 1,
      sym_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(5), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(130), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [206] = 17,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_else_start,
    STATE(19), 1,
      sym_else_if_start,
    STATE(58), 1,
      sym_raw_start,
    STATE(65), 1,
      sym_if_end,
    STATE(132), 1,
      sym_case_start,
    STATE(279), 1,
      sym_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(135), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [272] = 15,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_else_start,
    STATE(58), 1,
      sym_raw_start,
    STATE(66), 1,
      sym_unless_end,
    STATE(132), 1,
      sym_case_start,
    STATE(290), 1,
      sym_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [331] = 15,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_else_start,
    STATE(58), 1,
      sym_raw_start,
    STATE(68), 1,
      sym_for_end,
    STATE(132), 1,
      sym_case_start,
    STATE(267), 1,
      sym_for_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [390] = 15,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_else_start,
    STATE(58), 1,
      sym_raw_start,
    STATE(70), 1,
      sym_unless_end,
    STATE(132), 1,
      sym_case_start,
    STATE(278), 1,
      sym_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(6), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [449] = 15,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_else_start,
    STATE(58), 1,
      sym_raw_start,
    STATE(87), 1,
      sym_for_end,
    STATE(132), 1,
      sym_case_start,
    STATE(263), 1,
      sym_for_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(7), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [508] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(95), 1,
      sym_skeleton_end_tag,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [564] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(105), 1,
      sym_skeleton_end_tag,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(10), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [620] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(94), 1,
      sym_view_end_tag,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(13), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [676] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(92), 1,
      sym_view_end_tag,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [732] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(90), 1,
      sym_end_tag,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(15), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [788] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(64), 1,
      sym_end_tag,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [844] = 13,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(46), 1,
      anon_sym_LT_SLASH,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(51), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(54), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [897] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(25), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [947] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(26), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [997] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(22), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1047] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(23), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1097] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(24), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1147] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1197] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1247] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1297] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1347] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(8), 1,
      sym_unless_start,
    STATE(9), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_raw_start,
    STATE(132), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(11), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    STATE(77), 10,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
      sym_raw_block,
  [1397] = 8,
    ACTIONS(87), 1,
      anon_sym_puzzle_DASHview,
    ACTIONS(89), 1,
      anon_sym_puzzle_DASHskeleton,
    ACTIONS(91), 1,
      anon_sym_script,
    ACTIONS(93), 1,
      anon_sym_style,
    ACTIONS(95), 1,
      aux_sym_tag_name_token1,
    STATE(93), 1,
      sym_void_tag_name,
    STATE(111), 1,
      sym_tag_name,
    ACTIONS(97), 14,
      anon_sym_area,
      anon_sym_base,
      anon_sym_br,
      anon_sym_col,
      anon_sym_embed,
      anon_sym_hr,
      anon_sym_img,
      anon_sym_input,
      anon_sym_link,
      anon_sym_meta,
      anon_sym_param,
      anon_sym_source,
      anon_sym_track,
      anon_sym_wbr,
  [1435] = 12,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(119), 1,
      sym_case_start,
    STATE(165), 1,
      sym_if_end,
    STATE(255), 1,
      sym_attribute_else_block,
    ACTIONS(99), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(125), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
    STATE(29), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1480] = 12,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(119), 1,
      sym_case_start,
    STATE(170), 1,
      sym_if_end,
    STATE(269), 1,
      sym_attribute_else_block,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(133), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1525] = 4,
    ACTIONS(95), 1,
      aux_sym_tag_name_token1,
    STATE(93), 1,
      sym_void_tag_name,
    STATE(111), 1,
      sym_tag_name,
    ACTIONS(97), 14,
      anon_sym_area,
      anon_sym_base,
      anon_sym_br,
      anon_sym_col,
      anon_sym_embed,
      anon_sym_hr,
      anon_sym_img,
      anon_sym_input,
      anon_sym_link,
      anon_sym_meta,
      anon_sym_param,
      anon_sym_source,
      anon_sym_track,
      anon_sym_wbr,
  [1551] = 4,
    ACTIONS(105), 1,
      aux_sym_tag_name_token1,
    STATE(171), 1,
      sym_raw_tag_name,
    STATE(189), 1,
      sym_void_tag_name,
    ACTIONS(107), 14,
      anon_sym_area,
      anon_sym_base,
      anon_sym_br,
      anon_sym_col,
      anon_sym_embed,
      anon_sym_hr,
      anon_sym_img,
      anon_sym_input,
      anon_sym_link,
      anon_sym_meta,
      anon_sym_param,
      anon_sym_source,
      anon_sym_track,
      anon_sym_wbr,
  [1577] = 10,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(46), 1,
      sym_else_start,
    STATE(119), 1,
      sym_case_start,
    STATE(166), 1,
      sym_unless_end,
    STATE(258), 1,
      sym_attribute_else_block,
    ACTIONS(109), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(34), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1615] = 10,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(50), 1,
      sym_else_start,
    STATE(119), 1,
      sym_case_start,
    STATE(168), 1,
      sym_for_end,
    STATE(262), 1,
      sym_attribute_for_else_block,
    ACTIONS(113), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1653] = 10,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(46), 1,
      sym_else_start,
    STATE(119), 1,
      sym_case_start,
    STATE(172), 1,
      sym_unless_end,
    STATE(272), 1,
      sym_attribute_else_block,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1691] = 10,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(50), 1,
      sym_else_start,
    STATE(119), 1,
      sym_case_start,
    STATE(175), 1,
      sym_for_end,
    STATE(274), 1,
      sym_attribute_for_else_block,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1729] = 8,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(117), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(119), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1762] = 8,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(127), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(39), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1794] = 8,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1826] = 8,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1858] = 8,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1890] = 8,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(135), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(40), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1922] = 8,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(139), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(44), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1954] = 8,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(141), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(38), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1986] = 8,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2018] = 7,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(143), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(49), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2047] = 7,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(148), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(54), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2076] = 7,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(153), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(52), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2105] = 7,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(158), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(51), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2134] = 7,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2163] = 7,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(166), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(53), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2192] = 7,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2221] = 7,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2250] = 7,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2279] = 7,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(119), 1,
      sym_case_start,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2308] = 6,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(69), 1,
      sym_raw_end,
    ACTIONS(187), 2,
      sym_comment,
      sym_raw_text,
    STATE(57), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2332] = 6,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(174), 1,
      sym_raw_end_tag,
    ACTIONS(193), 2,
      sym_comment,
      sym_raw_text,
    STATE(59), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2356] = 5,
    ACTIONS(195), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym_raw_start_tag,
    ACTIONS(198), 2,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(200), 2,
      sym_comment,
      sym_raw_text,
    STATE(57), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2378] = 6,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(88), 1,
      sym_raw_end,
    ACTIONS(203), 2,
      sym_comment,
      sym_raw_text,
    STATE(55), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2402] = 6,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(158), 1,
      sym_raw_end_tag,
    ACTIONS(187), 2,
      sym_comment,
      sym_raw_text,
    STATE(57), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2426] = 2,
    ACTIONS(205), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(207), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2440] = 2,
    ACTIONS(209), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(211), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2454] = 2,
    ACTIONS(213), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(215), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2468] = 2,
    ACTIONS(217), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(219), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2482] = 2,
    ACTIONS(221), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(223), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2496] = 2,
    ACTIONS(225), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(227), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2510] = 2,
    ACTIONS(229), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(231), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2524] = 2,
    ACTIONS(233), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(235), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2538] = 2,
    ACTIONS(237), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(239), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2552] = 2,
    ACTIONS(241), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(243), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2566] = 2,
    ACTIONS(245), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(247), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2580] = 2,
    ACTIONS(249), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(251), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2594] = 2,
    ACTIONS(253), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(255), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2608] = 2,
    ACTIONS(257), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(259), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2622] = 2,
    ACTIONS(261), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(263), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2636] = 2,
    ACTIONS(265), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(267), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2650] = 2,
    ACTIONS(269), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(271), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2664] = 2,
    ACTIONS(273), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(275), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2678] = 2,
    ACTIONS(277), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(279), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2692] = 2,
    ACTIONS(281), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(283), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2706] = 2,
    ACTIONS(285), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(287), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2720] = 2,
    ACTIONS(289), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(291), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2734] = 2,
    ACTIONS(293), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(295), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2748] = 2,
    ACTIONS(297), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(299), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2762] = 2,
    ACTIONS(301), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(303), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2776] = 2,
    ACTIONS(305), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(307), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2790] = 2,
    ACTIONS(309), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(311), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2804] = 2,
    ACTIONS(313), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(315), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2818] = 2,
    ACTIONS(317), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(319), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2832] = 2,
    ACTIONS(321), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(323), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2846] = 2,
    ACTIONS(325), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(327), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2860] = 2,
    ACTIONS(329), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(331), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2874] = 2,
    ACTIONS(333), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(335), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2887] = 6,
    ACTIONS(337), 1,
      anon_sym_GT,
    ACTIONS(339), 1,
      anon_sym_SLASH,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym_attribute_name,
    STATE(102), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(208), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2908] = 2,
    ACTIONS(345), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(347), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2921] = 2,
    ACTIONS(349), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2934] = 2,
    ACTIONS(353), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(355), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2947] = 2,
    ACTIONS(357), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(359), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2960] = 2,
    ACTIONS(363), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(361), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2973] = 5,
    ACTIONS(367), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      sym_attribute_name,
    ACTIONS(365), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(99), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2992] = 2,
    ACTIONS(375), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(373), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3005] = 2,
    ACTIONS(379), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(377), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3018] = 6,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym_attribute_name,
    ACTIONS(381), 1,
      anon_sym_GT,
    ACTIONS(383), 1,
      anon_sym_SLASH,
    STATE(114), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(208), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3039] = 2,
    ACTIONS(387), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(385), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3052] = 6,
    ACTIONS(389), 1,
      anon_sym_GT,
    ACTIONS(391), 1,
      anon_sym_SLASH_GT,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    STATE(99), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3073] = 2,
    ACTIONS(397), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(399), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3086] = 2,
    ACTIONS(401), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3099] = 2,
    ACTIONS(405), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3112] = 2,
    ACTIONS(409), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(411), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3125] = 2,
    ACTIONS(413), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(415), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3138] = 2,
    ACTIONS(417), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(419), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3151] = 6,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(421), 1,
      anon_sym_GT,
    ACTIONS(423), 1,
      anon_sym_SLASH_GT,
    STATE(104), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3172] = 2,
    ACTIONS(427), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(425), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3185] = 2,
    ACTIONS(429), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(431), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3198] = 5,
    ACTIONS(433), 1,
      anon_sym_AT,
    ACTIONS(436), 1,
      sym_attribute_name,
    ACTIONS(365), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    STATE(114), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(208), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3217] = 2,
    ACTIONS(441), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(439), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3230] = 4,
    ACTIONS(445), 1,
      anon_sym_EQ,
    ACTIONS(447), 1,
      anon_sym_COLON,
    STATE(138), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(443), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3246] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(449), 1,
      anon_sym_GT,
    STATE(99), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3264] = 3,
    ACTIONS(453), 1,
      anon_sym_COLON,
    STATE(118), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(451), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      sym_attribute_name,
  [3278] = 6,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(48), 1,
      sym_else_start,
    STATE(167), 1,
      sym_case_end,
    STATE(259), 1,
      sym_attribute_case_else_block,
    STATE(128), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [3298] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(458), 1,
      anon_sym_GT,
    STATE(141), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3316] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(460), 1,
      anon_sym_GT,
    STATE(142), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3334] = 2,
    ACTIONS(464), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(462), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3346] = 2,
    ACTIONS(468), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(466), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3358] = 6,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_else_start,
    STATE(21), 1,
      sym_when_start,
    STATE(67), 1,
      sym_case_end,
    STATE(257), 1,
      sym_case_else_block,
    STATE(191), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [3378] = 6,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(170), 1,
      sym_if_end,
    STATE(269), 1,
      sym_attribute_else_block,
    STATE(198), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3398] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(474), 1,
      anon_sym_GT,
    STATE(117), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3416] = 2,
    ACTIONS(478), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(476), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3428] = 6,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(48), 1,
      sym_else_start,
    STATE(173), 1,
      sym_case_end,
    STATE(254), 1,
      sym_attribute_case_else_block,
    STATE(190), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [3448] = 2,
    ACTIONS(482), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(480), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3460] = 6,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_else_start,
    STATE(19), 1,
      sym_else_if_start,
    STATE(65), 1,
      sym_if_end,
    STATE(279), 1,
      sym_else_block,
    STATE(199), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [3480] = 2,
    ACTIONS(488), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(486), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3492] = 6,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_else_start,
    STATE(21), 1,
      sym_when_start,
    STATE(86), 1,
      sym_case_end,
    STATE(283), 1,
      sym_case_else_block,
    STATE(124), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [3512] = 6,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(176), 1,
      sym_if_end,
    STATE(277), 1,
      sym_attribute_else_block,
    STATE(198), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3532] = 2,
    ACTIONS(492), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(490), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3544] = 6,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_else_start,
    STATE(19), 1,
      sym_else_if_start,
    STATE(73), 1,
      sym_if_end,
    STATE(282), 1,
      sym_else_block,
    STATE(199), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [3564] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(494), 1,
      anon_sym_GT,
    STATE(99), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3582] = 4,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(500), 1,
      anon_sym_COLON,
    STATE(118), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(496), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3598] = 4,
    ACTIONS(447), 1,
      anon_sym_COLON,
    ACTIONS(502), 1,
      anon_sym_EQ,
    STATE(139), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(496), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3614] = 3,
    ACTIONS(504), 1,
      anon_sym_COLON,
    STATE(139), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(451), 5,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      sym_attribute_name,
  [3628] = 4,
    ACTIONS(500), 1,
      anon_sym_COLON,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(137), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(443), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3644] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(509), 1,
      anon_sym_GT,
    STATE(99), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3662] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(511), 1,
      anon_sym_GT,
    STATE(99), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3680] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      sym_attribute_name,
    ACTIONS(513), 1,
      anon_sym_GT,
    STATE(136), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(230), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3698] = 1,
    ACTIONS(515), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3707] = 1,
    ACTIONS(515), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3716] = 1,
    ACTIONS(517), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3725] = 1,
    ACTIONS(517), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3734] = 5,
    ACTIONS(519), 1,
      sym_unquoted_attribute_value,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(214), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3751] = 1,
    ACTIONS(527), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3760] = 1,
    ACTIONS(527), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3769] = 5,
    ACTIONS(529), 1,
      sym_unquoted_attribute_value,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(223), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3786] = 6,
    ACTIONS(537), 1,
      anon_sym_if,
    ACTIONS(539), 1,
      anon_sym_unless,
    ACTIONS(541), 1,
      anon_sym_case,
    ACTIONS(543), 1,
      anon_sym_for,
    ACTIONS(545), 1,
      anon_sym_svg,
    ACTIONS(547), 1,
      anon_sym_raw,
  [3805] = 2,
    ACTIONS(551), 1,
      anon_sym_EQ,
    ACTIONS(549), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3815] = 2,
    ACTIONS(553), 1,
      anon_sym_LT,
    ACTIONS(555), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3825] = 4,
    ACTIONS(557), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      anon_sym_SLASH,
    ACTIONS(561), 1,
      sym_raw_attribute_name,
    STATE(161), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3839] = 2,
    ACTIONS(563), 1,
      anon_sym_LT,
    ACTIONS(565), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3849] = 4,
    ACTIONS(567), 1,
      anon_sym_GT,
    ACTIONS(569), 1,
      anon_sym_SLASH_GT,
    ACTIONS(571), 1,
      sym_raw_attribute_name,
    STATE(186), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3863] = 2,
    ACTIONS(573), 1,
      anon_sym_LT,
    ACTIONS(575), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3873] = 2,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(579), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3883] = 4,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      sym_raw_quoted_attribute_value,
    ACTIONS(585), 2,
      sym_raw_brace_value,
      sym_raw_unquoted_attribute_value,
  [3897] = 3,
    ACTIONS(589), 1,
      sym_raw_attribute_name,
    ACTIONS(587), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    STATE(161), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3909] = 2,
    ACTIONS(592), 1,
      anon_sym_LT,
    ACTIONS(594), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3919] = 2,
    ACTIONS(596), 1,
      anon_sym_LT,
    ACTIONS(598), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3929] = 2,
    ACTIONS(600), 1,
      anon_sym_LT,
    ACTIONS(602), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3939] = 1,
    ACTIONS(604), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [3947] = 1,
    ACTIONS(606), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [3955] = 1,
    ACTIONS(608), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [3963] = 1,
    ACTIONS(610), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [3971] = 4,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_raw_quoted_attribute_value,
    ACTIONS(616), 2,
      sym_raw_brace_value,
      sym_raw_unquoted_attribute_value,
  [3985] = 1,
    ACTIONS(618), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [3993] = 4,
    ACTIONS(571), 1,
      sym_raw_attribute_name,
    ACTIONS(620), 1,
      anon_sym_GT,
    ACTIONS(622), 1,
      anon_sym_SLASH_GT,
    STATE(157), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4007] = 1,
    ACTIONS(624), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4015] = 1,
    ACTIONS(626), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4023] = 2,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(630), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4033] = 1,
    ACTIONS(632), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4041] = 1,
    ACTIONS(634), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4049] = 1,
    ACTIONS(636), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4057] = 1,
    ACTIONS(638), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4065] = 1,
    ACTIONS(640), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4073] = 1,
    ACTIONS(642), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4081] = 2,
    ACTIONS(644), 1,
      anon_sym_EQ,
    ACTIONS(549), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4091] = 1,
    ACTIONS(287), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4099] = 1,
    ACTIONS(295), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4107] = 1,
    ACTIONS(299), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4115] = 1,
    ACTIONS(303), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4123] = 3,
    ACTIONS(646), 1,
      sym_raw_attribute_name,
    ACTIONS(587), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(186), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4135] = 1,
    ACTIONS(219), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4143] = 1,
    ACTIONS(255), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4151] = 4,
    ACTIONS(561), 1,
      sym_raw_attribute_name,
    ACTIONS(649), 1,
      anon_sym_GT,
    ACTIONS(651), 1,
      anon_sym_SLASH,
    STATE(155), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4165] = 3,
    ACTIONS(653), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(190), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [4176] = 3,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_when_start,
    STATE(191), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [4187] = 3,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    STATE(229), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4198] = 4,
    ACTIONS(663), 1,
      anon_sym_SLASH,
    ACTIONS(665), 1,
      anon_sym_COLON,
    ACTIONS(667), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      sym_expression_content,
  [4211] = 1,
    ACTIONS(671), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT,
      anon_sym_LBRACE,
  [4218] = 1,
    ACTIONS(673), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4225] = 4,
    ACTIONS(675), 1,
      anon_sym_SLASH,
    ACTIONS(677), 1,
      anon_sym_COLON,
    ACTIONS(679), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_expression_content,
  [4238] = 4,
    ACTIONS(677), 1,
      anon_sym_COLON,
    ACTIONS(679), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_expression_content,
    ACTIONS(683), 1,
      anon_sym_SLASH,
  [4251] = 3,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(198), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [4262] = 3,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_else_if_start,
    STATE(199), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [4273] = 2,
    ACTIONS(693), 1,
      anon_sym_EQ,
    ACTIONS(691), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4282] = 3,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    STATE(215), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4293] = 1,
    ACTIONS(697), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT,
      anon_sym_LBRACE,
  [4300] = 2,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(701), 3,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4309] = 2,
    ACTIONS(703), 1,
      anon_sym_LT,
    ACTIONS(705), 3,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4318] = 4,
    ACTIONS(679), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_expression_content,
    ACTIONS(707), 1,
      anon_sym_SLASH,
    ACTIONS(709), 1,
      anon_sym_COLON,
  [4331] = 1,
    ACTIONS(711), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4338] = 1,
    ACTIONS(713), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4345] = 1,
    ACTIONS(715), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4352] = 1,
    ACTIONS(217), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4359] = 1,
    ACTIONS(717), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4366] = 1,
    ACTIONS(719), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4373] = 1,
    ACTIONS(253), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4380] = 2,
    ACTIONS(721), 1,
      anon_sym_EQ,
    ACTIONS(691), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4389] = 1,
    ACTIONS(723), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4396] = 3,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_PIPE,
    STATE(215), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4407] = 1,
    ACTIONS(730), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4414] = 4,
    ACTIONS(541), 1,
      anon_sym_case,
    ACTIONS(732), 1,
      anon_sym_if,
    ACTIONS(734), 1,
      anon_sym_unless,
    ACTIONS(736), 1,
      anon_sym_for,
  [4427] = 4,
    ACTIONS(667), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      sym_expression_content,
    ACTIONS(738), 1,
      anon_sym_SLASH,
    ACTIONS(740), 1,
      anon_sym_COLON,
  [4440] = 1,
    ACTIONS(711), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4447] = 1,
    ACTIONS(713), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4454] = 1,
    ACTIONS(730), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4461] = 1,
    ACTIONS(673), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4468] = 1,
    ACTIONS(723), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4475] = 4,
    ACTIONS(665), 1,
      anon_sym_COLON,
    ACTIONS(667), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      sym_expression_content,
    ACTIONS(742), 1,
      anon_sym_SLASH,
  [4488] = 1,
    ACTIONS(217), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4495] = 1,
    ACTIONS(253), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4502] = 3,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(228), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4513] = 3,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    STATE(215), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4524] = 3,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    STATE(215), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4535] = 1,
    ACTIONS(715), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4542] = 3,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    STATE(232), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4553] = 3,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(215), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4564] = 3,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(201), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4575] = 3,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    STATE(271), 1,
      sym_formatter_arguments,
    ACTIONS(756), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4586] = 1,
    ACTIONS(760), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4592] = 1,
    ACTIONS(462), 3,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4598] = 1,
    ACTIONS(762), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4604] = 3,
    ACTIONS(764), 1,
      anon_sym_LT_SLASH,
    ACTIONS(766), 1,
      sym_style_content,
    STATE(113), 1,
      sym_style_end_tag,
  [4614] = 1,
    ACTIONS(768), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4620] = 1,
    ACTIONS(486), 3,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4626] = 1,
    ACTIONS(760), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4632] = 1,
    ACTIONS(770), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4638] = 3,
    ACTIONS(772), 1,
      anon_sym_LT_SLASH,
    ACTIONS(774), 1,
      sym_script_content,
    STATE(109), 1,
      sym_script_end_tag,
  [4648] = 1,
    ACTIONS(466), 3,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4654] = 1,
    ACTIONS(476), 3,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4660] = 1,
    ACTIONS(480), 3,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4666] = 1,
    ACTIONS(762), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4672] = 1,
    ACTIONS(490), 3,
      sym_attribute_text,
      anon_sym_LBRACE,
      sym_escaped_brace,
  [4678] = 1,
    ACTIONS(719), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4684] = 3,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_formatter_arguments_repeat1,
  [4694] = 3,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_formatter_arguments_repeat1,
  [4704] = 1,
    ACTIONS(770), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4710] = 3,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_formatter_arguments_repeat1,
  [4720] = 2,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_case_end,
  [4727] = 2,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_if_end,
  [4734] = 2,
    ACTIONS(772), 1,
      anon_sym_LT_SLASH,
    STATE(96), 1,
      sym_script_end_tag,
  [4741] = 2,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_case_end,
  [4748] = 2,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_unless_end,
  [4755] = 2,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_case_end,
  [4762] = 1,
    ACTIONS(795), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [4767] = 2,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_interpolation,
  [4774] = 2,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym_for_end,
  [4781] = 2,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_for_end,
  [4788] = 2,
    ACTIONS(801), 1,
      aux_sym_event_name_token1,
    STATE(147), 1,
      sym_event_modifier,
  [4795] = 2,
    ACTIONS(764), 1,
      anon_sym_LT_SLASH,
    STATE(97), 1,
      sym_style_end_tag,
  [4802] = 1,
    ACTIONS(803), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4807] = 2,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_for_end,
  [4814] = 2,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      sym_raw_opener_rest,
  [4821] = 2,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_if_end,
  [4828] = 2,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(811), 1,
      sym_formatter_argument,
  [4835] = 1,
    ACTIONS(813), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4840] = 2,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_unless_end,
  [4847] = 2,
    ACTIONS(815), 1,
      aux_sym_tag_name_token1,
    STATE(358), 1,
      sym_raw_tag_name,
  [4854] = 2,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_for_end,
  [4861] = 1,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4866] = 1,
    ACTIONS(817), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4871] = 2,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_if_end,
  [4878] = 2,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_unless_end,
  [4885] = 2,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_if_end,
  [4892] = 2,
    ACTIONS(707), 1,
      anon_sym_SLASH,
    ACTIONS(709), 1,
      anon_sym_COLON,
  [4899] = 2,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_if_end,
  [4906] = 2,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_if_end,
  [4913] = 2,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_case_end,
  [4920] = 2,
    ACTIONS(823), 1,
      aux_sym_event_name_token1,
    STATE(140), 1,
      sym_event_name,
  [4927] = 2,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_interpolation,
  [4934] = 1,
    ACTIONS(825), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [4939] = 2,
    ACTIONS(827), 1,
      aux_sym_tag_name_token1,
    STATE(320), 1,
      sym_tag_name,
  [4946] = 2,
    ACTIONS(829), 1,
      anon_sym_SLASH,
    ACTIONS(831), 1,
      anon_sym_COLON,
  [4953] = 2,
    ACTIONS(667), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      sym_expression_content,
  [4960] = 2,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_unless_end,
  [4967] = 2,
    ACTIONS(679), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_expression_content,
  [4974] = 2,
    ACTIONS(833), 1,
      anon_sym_else,
    ACTIONS(835), 1,
      anon_sym_when,
  [4981] = 1,
    ACTIONS(837), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4986] = 2,
    ACTIONS(839), 1,
      aux_sym_event_name_token1,
    STATE(116), 1,
      sym_event_name,
  [4993] = 2,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      sym_raw_attribute_text,
  [5000] = 2,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    ACTIONS(847), 1,
      anon_sym_if2,
  [5007] = 2,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym_interpolation,
  [5014] = 2,
    ACTIONS(849), 1,
      aux_sym_event_name_token1,
    STATE(146), 1,
      sym_event_modifier,
  [5021] = 2,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 1,
      sym_raw_attribute_text,
  [5028] = 1,
    ACTIONS(853), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [5033] = 2,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_interpolation,
  [5040] = 1,
    ACTIONS(855), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [5045] = 2,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    ACTIONS(859), 1,
      sym_raw_attribute_text,
  [5052] = 2,
    ACTIONS(857), 1,
      anon_sym_SQUOTE,
    ACTIONS(861), 1,
      sym_raw_attribute_text,
  [5059] = 2,
    ACTIONS(738), 1,
      anon_sym_SLASH,
    ACTIONS(740), 1,
      anon_sym_COLON,
  [5066] = 2,
    ACTIONS(863), 1,
      anon_sym_else,
    ACTIONS(865), 1,
      anon_sym_when,
  [5073] = 2,
    ACTIONS(867), 1,
      anon_sym_SLASH,
    ACTIONS(869), 1,
      anon_sym_COLON,
  [5080] = 2,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    ACTIONS(873), 1,
      anon_sym_if2,
  [5087] = 1,
    ACTIONS(867), 1,
      anon_sym_SLASH,
  [5091] = 1,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
  [5095] = 1,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
  [5099] = 1,
    ACTIONS(835), 1,
      anon_sym_when,
  [5103] = 1,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
  [5107] = 1,
    ACTIONS(879), 1,
      anon_sym_GT,
  [5111] = 1,
    ACTIONS(881), 1,
      anon_sym_COLON,
  [5115] = 1,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
  [5119] = 1,
    ACTIONS(885), 1,
      anon_sym_GT,
  [5123] = 1,
    ACTIONS(887), 1,
      anon_sym_SLASH,
  [5127] = 1,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
  [5131] = 1,
    ACTIONS(889), 1,
      anon_sym_GT,
  [5135] = 1,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
  [5139] = 1,
    ACTIONS(893), 1,
      anon_sym_unless2,
  [5143] = 1,
    ACTIONS(895), 1,
      sym_directive_expression,
  [5147] = 1,
    ACTIONS(897), 1,
      sym_expression_content,
  [5151] = 1,
    ACTIONS(833), 1,
      anon_sym_else,
  [5155] = 1,
    ACTIONS(675), 1,
      anon_sym_SLASH,
  [5159] = 1,
    ACTIONS(683), 1,
      anon_sym_SLASH,
  [5163] = 1,
    ACTIONS(899), 1,
      anon_sym_GT,
  [5167] = 1,
    ACTIONS(901), 1,
      anon_sym_COLON,
  [5171] = 1,
    ACTIONS(381), 1,
      anon_sym_GT,
  [5175] = 1,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [5179] = 1,
    ACTIONS(905), 1,
      anon_sym_script,
  [5183] = 1,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
  [5187] = 1,
    ACTIONS(909), 1,
      anon_sym_puzzle_DASHskeleton,
  [5191] = 1,
    ACTIONS(911), 1,
      anon_sym_raw2,
  [5195] = 1,
    ACTIONS(913), 1,
      anon_sym_case2,
  [5199] = 1,
    ACTIONS(915), 1,
      anon_sym_for2,
  [5203] = 1,
    ACTIONS(917), 1,
      anon_sym_if2,
  [5207] = 1,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
  [5211] = 1,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
  [5215] = 1,
    ACTIONS(923), 1,
      sym_directive_expression,
  [5219] = 1,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
  [5223] = 1,
    ACTIONS(873), 1,
      anon_sym_if2,
  [5227] = 1,
    ACTIONS(927), 1,
      anon_sym_puzzle_DASHview,
  [5231] = 1,
    ACTIONS(929), 1,
      anon_sym_GT,
  [5235] = 1,
    ACTIONS(931), 1,
      anon_sym_else,
  [5239] = 1,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
  [5243] = 1,
    ACTIONS(935), 1,
      sym_formatter_name,
  [5247] = 1,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
  [5251] = 1,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
  [5255] = 1,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
  [5259] = 1,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
  [5263] = 1,
    ACTIONS(945), 1,
      anon_sym_GT,
  [5267] = 1,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
  [5271] = 1,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
  [5275] = 1,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
  [5279] = 1,
    ACTIONS(951), 1,
      anon_sym_GT,
  [5283] = 1,
    ACTIONS(953), 1,
      anon_sym_GT,
  [5287] = 1,
    ACTIONS(955), 1,
      sym_formatter_argument,
  [5291] = 1,
    ACTIONS(957), 1,
      sym_directive_expression,
  [5295] = 1,
    ACTIONS(707), 1,
      anon_sym_SLASH,
  [5299] = 1,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
  [5303] = 1,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [5307] = 1,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
  [5311] = 1,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [5315] = 1,
    ACTIONS(967), 1,
      sym_directive_expression,
  [5319] = 1,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
  [5323] = 1,
    ACTIONS(971), 1,
      anon_sym_style,
  [5327] = 1,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [5331] = 1,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
  [5335] = 1,
    ACTIONS(975), 1,
      anon_sym_SQUOTE,
  [5339] = 1,
    ACTIONS(557), 1,
      anon_sym_GT,
  [5343] = 1,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [5347] = 1,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
  [5351] = 1,
    ACTIONS(829), 1,
      anon_sym_SLASH,
  [5355] = 1,
    ACTIONS(981), 1,
      sym_directive_expression,
  [5359] = 1,
    ACTIONS(983), 1,
      sym_directive_expression,
  [5363] = 1,
    ACTIONS(985), 1,
      sym_directive_expression,
  [5367] = 1,
    ACTIONS(987), 1,
      anon_sym_if2,
  [5371] = 1,
    ACTIONS(989), 1,
      anon_sym_else,
  [5375] = 1,
    ACTIONS(738), 1,
      anon_sym_SLASH,
  [5379] = 1,
    ACTIONS(991), 1,
      sym_directive_expression,
  [5383] = 1,
    ACTIONS(993), 1,
      anon_sym_unless2,
  [5387] = 1,
    ACTIONS(863), 1,
      anon_sym_else,
  [5391] = 1,
    ACTIONS(742), 1,
      anon_sym_SLASH,
  [5395] = 1,
    ACTIONS(995), 1,
      anon_sym_case2,
  [5399] = 1,
    ACTIONS(997), 1,
      sym_directive_expression,
  [5403] = 1,
    ACTIONS(999), 1,
      sym_directive_expression,
  [5407] = 1,
    ACTIONS(1001), 1,
      anon_sym_for2,
  [5411] = 1,
    ACTIONS(663), 1,
      anon_sym_SLASH,
  [5415] = 1,
    ACTIONS(1003), 1,
      sym_directive_expression,
  [5419] = 1,
    ACTIONS(1005), 1,
      sym_expression_content,
  [5423] = 1,
    ACTIONS(1007), 1,
      sym_directive_expression,
  [5427] = 1,
    ACTIONS(865), 1,
      anon_sym_when,
  [5431] = 1,
    ACTIONS(847), 1,
      anon_sym_if2,
  [5435] = 1,
    ACTIONS(1009), 1,
      anon_sym_else,
  [5439] = 1,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [5443] = 1,
    ACTIONS(1013), 1,
      anon_sym_else,
  [5447] = 1,
    ACTIONS(1015), 1,
      anon_sym_COLON,
  [5451] = 1,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 206,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 331,
  [SMALL_STATE(8)] = 390,
  [SMALL_STATE(9)] = 449,
  [SMALL_STATE(10)] = 508,
  [SMALL_STATE(11)] = 564,
  [SMALL_STATE(12)] = 620,
  [SMALL_STATE(13)] = 676,
  [SMALL_STATE(14)] = 732,
  [SMALL_STATE(15)] = 788,
  [SMALL_STATE(16)] = 844,
  [SMALL_STATE(17)] = 897,
  [SMALL_STATE(18)] = 947,
  [SMALL_STATE(19)] = 997,
  [SMALL_STATE(20)] = 1047,
  [SMALL_STATE(21)] = 1097,
  [SMALL_STATE(22)] = 1147,
  [SMALL_STATE(23)] = 1197,
  [SMALL_STATE(24)] = 1247,
  [SMALL_STATE(25)] = 1297,
  [SMALL_STATE(26)] = 1347,
  [SMALL_STATE(27)] = 1397,
  [SMALL_STATE(28)] = 1435,
  [SMALL_STATE(29)] = 1480,
  [SMALL_STATE(30)] = 1525,
  [SMALL_STATE(31)] = 1551,
  [SMALL_STATE(32)] = 1577,
  [SMALL_STATE(33)] = 1615,
  [SMALL_STATE(34)] = 1653,
  [SMALL_STATE(35)] = 1691,
  [SMALL_STATE(36)] = 1729,
  [SMALL_STATE(37)] = 1762,
  [SMALL_STATE(38)] = 1794,
  [SMALL_STATE(39)] = 1826,
  [SMALL_STATE(40)] = 1858,
  [SMALL_STATE(41)] = 1890,
  [SMALL_STATE(42)] = 1922,
  [SMALL_STATE(43)] = 1954,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2018,
  [SMALL_STATE(46)] = 2047,
  [SMALL_STATE(47)] = 2076,
  [SMALL_STATE(48)] = 2105,
  [SMALL_STATE(49)] = 2134,
  [SMALL_STATE(50)] = 2163,
  [SMALL_STATE(51)] = 2192,
  [SMALL_STATE(52)] = 2221,
  [SMALL_STATE(53)] = 2250,
  [SMALL_STATE(54)] = 2279,
  [SMALL_STATE(55)] = 2308,
  [SMALL_STATE(56)] = 2332,
  [SMALL_STATE(57)] = 2356,
  [SMALL_STATE(58)] = 2378,
  [SMALL_STATE(59)] = 2402,
  [SMALL_STATE(60)] = 2426,
  [SMALL_STATE(61)] = 2440,
  [SMALL_STATE(62)] = 2454,
  [SMALL_STATE(63)] = 2468,
  [SMALL_STATE(64)] = 2482,
  [SMALL_STATE(65)] = 2496,
  [SMALL_STATE(66)] = 2510,
  [SMALL_STATE(67)] = 2524,
  [SMALL_STATE(68)] = 2538,
  [SMALL_STATE(69)] = 2552,
  [SMALL_STATE(70)] = 2566,
  [SMALL_STATE(71)] = 2580,
  [SMALL_STATE(72)] = 2594,
  [SMALL_STATE(73)] = 2608,
  [SMALL_STATE(74)] = 2622,
  [SMALL_STATE(75)] = 2636,
  [SMALL_STATE(76)] = 2650,
  [SMALL_STATE(77)] = 2664,
  [SMALL_STATE(78)] = 2678,
  [SMALL_STATE(79)] = 2692,
  [SMALL_STATE(80)] = 2706,
  [SMALL_STATE(81)] = 2720,
  [SMALL_STATE(82)] = 2734,
  [SMALL_STATE(83)] = 2748,
  [SMALL_STATE(84)] = 2762,
  [SMALL_STATE(85)] = 2776,
  [SMALL_STATE(86)] = 2790,
  [SMALL_STATE(87)] = 2804,
  [SMALL_STATE(88)] = 2818,
  [SMALL_STATE(89)] = 2832,
  [SMALL_STATE(90)] = 2846,
  [SMALL_STATE(91)] = 2860,
  [SMALL_STATE(92)] = 2874,
  [SMALL_STATE(93)] = 2887,
  [SMALL_STATE(94)] = 2908,
  [SMALL_STATE(95)] = 2921,
  [SMALL_STATE(96)] = 2934,
  [SMALL_STATE(97)] = 2947,
  [SMALL_STATE(98)] = 2960,
  [SMALL_STATE(99)] = 2973,
  [SMALL_STATE(100)] = 2992,
  [SMALL_STATE(101)] = 3005,
  [SMALL_STATE(102)] = 3018,
  [SMALL_STATE(103)] = 3039,
  [SMALL_STATE(104)] = 3052,
  [SMALL_STATE(105)] = 3073,
  [SMALL_STATE(106)] = 3086,
  [SMALL_STATE(107)] = 3099,
  [SMALL_STATE(108)] = 3112,
  [SMALL_STATE(109)] = 3125,
  [SMALL_STATE(110)] = 3138,
  [SMALL_STATE(111)] = 3151,
  [SMALL_STATE(112)] = 3172,
  [SMALL_STATE(113)] = 3185,
  [SMALL_STATE(114)] = 3198,
  [SMALL_STATE(115)] = 3217,
  [SMALL_STATE(116)] = 3230,
  [SMALL_STATE(117)] = 3246,
  [SMALL_STATE(118)] = 3264,
  [SMALL_STATE(119)] = 3278,
  [SMALL_STATE(120)] = 3298,
  [SMALL_STATE(121)] = 3316,
  [SMALL_STATE(122)] = 3334,
  [SMALL_STATE(123)] = 3346,
  [SMALL_STATE(124)] = 3358,
  [SMALL_STATE(125)] = 3378,
  [SMALL_STATE(126)] = 3398,
  [SMALL_STATE(127)] = 3416,
  [SMALL_STATE(128)] = 3428,
  [SMALL_STATE(129)] = 3448,
  [SMALL_STATE(130)] = 3460,
  [SMALL_STATE(131)] = 3480,
  [SMALL_STATE(132)] = 3492,
  [SMALL_STATE(133)] = 3512,
  [SMALL_STATE(134)] = 3532,
  [SMALL_STATE(135)] = 3544,
  [SMALL_STATE(136)] = 3564,
  [SMALL_STATE(137)] = 3582,
  [SMALL_STATE(138)] = 3598,
  [SMALL_STATE(139)] = 3614,
  [SMALL_STATE(140)] = 3628,
  [SMALL_STATE(141)] = 3644,
  [SMALL_STATE(142)] = 3662,
  [SMALL_STATE(143)] = 3680,
  [SMALL_STATE(144)] = 3698,
  [SMALL_STATE(145)] = 3707,
  [SMALL_STATE(146)] = 3716,
  [SMALL_STATE(147)] = 3725,
  [SMALL_STATE(148)] = 3734,
  [SMALL_STATE(149)] = 3751,
  [SMALL_STATE(150)] = 3760,
  [SMALL_STATE(151)] = 3769,
  [SMALL_STATE(152)] = 3786,
  [SMALL_STATE(153)] = 3805,
  [SMALL_STATE(154)] = 3815,
  [SMALL_STATE(155)] = 3825,
  [SMALL_STATE(156)] = 3839,
  [SMALL_STATE(157)] = 3849,
  [SMALL_STATE(158)] = 3863,
  [SMALL_STATE(159)] = 3873,
  [SMALL_STATE(160)] = 3883,
  [SMALL_STATE(161)] = 3897,
  [SMALL_STATE(162)] = 3909,
  [SMALL_STATE(163)] = 3919,
  [SMALL_STATE(164)] = 3929,
  [SMALL_STATE(165)] = 3939,
  [SMALL_STATE(166)] = 3947,
  [SMALL_STATE(167)] = 3955,
  [SMALL_STATE(168)] = 3963,
  [SMALL_STATE(169)] = 3971,
  [SMALL_STATE(170)] = 3985,
  [SMALL_STATE(171)] = 3993,
  [SMALL_STATE(172)] = 4007,
  [SMALL_STATE(173)] = 4015,
  [SMALL_STATE(174)] = 4023,
  [SMALL_STATE(175)] = 4033,
  [SMALL_STATE(176)] = 4041,
  [SMALL_STATE(177)] = 4049,
  [SMALL_STATE(178)] = 4057,
  [SMALL_STATE(179)] = 4065,
  [SMALL_STATE(180)] = 4073,
  [SMALL_STATE(181)] = 4081,
  [SMALL_STATE(182)] = 4091,
  [SMALL_STATE(183)] = 4099,
  [SMALL_STATE(184)] = 4107,
  [SMALL_STATE(185)] = 4115,
  [SMALL_STATE(186)] = 4123,
  [SMALL_STATE(187)] = 4135,
  [SMALL_STATE(188)] = 4143,
  [SMALL_STATE(189)] = 4151,
  [SMALL_STATE(190)] = 4165,
  [SMALL_STATE(191)] = 4176,
  [SMALL_STATE(192)] = 4187,
  [SMALL_STATE(193)] = 4198,
  [SMALL_STATE(194)] = 4211,
  [SMALL_STATE(195)] = 4218,
  [SMALL_STATE(196)] = 4225,
  [SMALL_STATE(197)] = 4238,
  [SMALL_STATE(198)] = 4251,
  [SMALL_STATE(199)] = 4262,
  [SMALL_STATE(200)] = 4273,
  [SMALL_STATE(201)] = 4282,
  [SMALL_STATE(202)] = 4293,
  [SMALL_STATE(203)] = 4300,
  [SMALL_STATE(204)] = 4309,
  [SMALL_STATE(205)] = 4318,
  [SMALL_STATE(206)] = 4331,
  [SMALL_STATE(207)] = 4338,
  [SMALL_STATE(208)] = 4345,
  [SMALL_STATE(209)] = 4352,
  [SMALL_STATE(210)] = 4359,
  [SMALL_STATE(211)] = 4366,
  [SMALL_STATE(212)] = 4373,
  [SMALL_STATE(213)] = 4380,
  [SMALL_STATE(214)] = 4389,
  [SMALL_STATE(215)] = 4396,
  [SMALL_STATE(216)] = 4407,
  [SMALL_STATE(217)] = 4414,
  [SMALL_STATE(218)] = 4427,
  [SMALL_STATE(219)] = 4440,
  [SMALL_STATE(220)] = 4447,
  [SMALL_STATE(221)] = 4454,
  [SMALL_STATE(222)] = 4461,
  [SMALL_STATE(223)] = 4468,
  [SMALL_STATE(224)] = 4475,
  [SMALL_STATE(225)] = 4488,
  [SMALL_STATE(226)] = 4495,
  [SMALL_STATE(227)] = 4502,
  [SMALL_STATE(228)] = 4513,
  [SMALL_STATE(229)] = 4524,
  [SMALL_STATE(230)] = 4535,
  [SMALL_STATE(231)] = 4542,
  [SMALL_STATE(232)] = 4553,
  [SMALL_STATE(233)] = 4564,
  [SMALL_STATE(234)] = 4575,
  [SMALL_STATE(235)] = 4586,
  [SMALL_STATE(236)] = 4592,
  [SMALL_STATE(237)] = 4598,
  [SMALL_STATE(238)] = 4604,
  [SMALL_STATE(239)] = 4614,
  [SMALL_STATE(240)] = 4620,
  [SMALL_STATE(241)] = 4626,
  [SMALL_STATE(242)] = 4632,
  [SMALL_STATE(243)] = 4638,
  [SMALL_STATE(244)] = 4648,
  [SMALL_STATE(245)] = 4654,
  [SMALL_STATE(246)] = 4660,
  [SMALL_STATE(247)] = 4666,
  [SMALL_STATE(248)] = 4672,
  [SMALL_STATE(249)] = 4678,
  [SMALL_STATE(250)] = 4684,
  [SMALL_STATE(251)] = 4694,
  [SMALL_STATE(252)] = 4704,
  [SMALL_STATE(253)] = 4710,
  [SMALL_STATE(254)] = 4720,
  [SMALL_STATE(255)] = 4727,
  [SMALL_STATE(256)] = 4734,
  [SMALL_STATE(257)] = 4741,
  [SMALL_STATE(258)] = 4748,
  [SMALL_STATE(259)] = 4755,
  [SMALL_STATE(260)] = 4762,
  [SMALL_STATE(261)] = 4767,
  [SMALL_STATE(262)] = 4774,
  [SMALL_STATE(263)] = 4781,
  [SMALL_STATE(264)] = 4788,
  [SMALL_STATE(265)] = 4795,
  [SMALL_STATE(266)] = 4802,
  [SMALL_STATE(267)] = 4807,
  [SMALL_STATE(268)] = 4814,
  [SMALL_STATE(269)] = 4821,
  [SMALL_STATE(270)] = 4828,
  [SMALL_STATE(271)] = 4835,
  [SMALL_STATE(272)] = 4840,
  [SMALL_STATE(273)] = 4847,
  [SMALL_STATE(274)] = 4854,
  [SMALL_STATE(275)] = 4861,
  [SMALL_STATE(276)] = 4866,
  [SMALL_STATE(277)] = 4871,
  [SMALL_STATE(278)] = 4878,
  [SMALL_STATE(279)] = 4885,
  [SMALL_STATE(280)] = 4892,
  [SMALL_STATE(281)] = 4899,
  [SMALL_STATE(282)] = 4906,
  [SMALL_STATE(283)] = 4913,
  [SMALL_STATE(284)] = 4920,
  [SMALL_STATE(285)] = 4927,
  [SMALL_STATE(286)] = 4934,
  [SMALL_STATE(287)] = 4939,
  [SMALL_STATE(288)] = 4946,
  [SMALL_STATE(289)] = 4953,
  [SMALL_STATE(290)] = 4960,
  [SMALL_STATE(291)] = 4967,
  [SMALL_STATE(292)] = 4974,
  [SMALL_STATE(293)] = 4981,
  [SMALL_STATE(294)] = 4986,
  [SMALL_STATE(295)] = 4993,
  [SMALL_STATE(296)] = 5000,
  [SMALL_STATE(297)] = 5007,
  [SMALL_STATE(298)] = 5014,
  [SMALL_STATE(299)] = 5021,
  [SMALL_STATE(300)] = 5028,
  [SMALL_STATE(301)] = 5033,
  [SMALL_STATE(302)] = 5040,
  [SMALL_STATE(303)] = 5045,
  [SMALL_STATE(304)] = 5052,
  [SMALL_STATE(305)] = 5059,
  [SMALL_STATE(306)] = 5066,
  [SMALL_STATE(307)] = 5073,
  [SMALL_STATE(308)] = 5080,
  [SMALL_STATE(309)] = 5087,
  [SMALL_STATE(310)] = 5091,
  [SMALL_STATE(311)] = 5095,
  [SMALL_STATE(312)] = 5099,
  [SMALL_STATE(313)] = 5103,
  [SMALL_STATE(314)] = 5107,
  [SMALL_STATE(315)] = 5111,
  [SMALL_STATE(316)] = 5115,
  [SMALL_STATE(317)] = 5119,
  [SMALL_STATE(318)] = 5123,
  [SMALL_STATE(319)] = 5127,
  [SMALL_STATE(320)] = 5131,
  [SMALL_STATE(321)] = 5135,
  [SMALL_STATE(322)] = 5139,
  [SMALL_STATE(323)] = 5143,
  [SMALL_STATE(324)] = 5147,
  [SMALL_STATE(325)] = 5151,
  [SMALL_STATE(326)] = 5155,
  [SMALL_STATE(327)] = 5159,
  [SMALL_STATE(328)] = 5163,
  [SMALL_STATE(329)] = 5167,
  [SMALL_STATE(330)] = 5171,
  [SMALL_STATE(331)] = 5175,
  [SMALL_STATE(332)] = 5179,
  [SMALL_STATE(333)] = 5183,
  [SMALL_STATE(334)] = 5187,
  [SMALL_STATE(335)] = 5191,
  [SMALL_STATE(336)] = 5195,
  [SMALL_STATE(337)] = 5199,
  [SMALL_STATE(338)] = 5203,
  [SMALL_STATE(339)] = 5207,
  [SMALL_STATE(340)] = 5211,
  [SMALL_STATE(341)] = 5215,
  [SMALL_STATE(342)] = 5219,
  [SMALL_STATE(343)] = 5223,
  [SMALL_STATE(344)] = 5227,
  [SMALL_STATE(345)] = 5231,
  [SMALL_STATE(346)] = 5235,
  [SMALL_STATE(347)] = 5239,
  [SMALL_STATE(348)] = 5243,
  [SMALL_STATE(349)] = 5247,
  [SMALL_STATE(350)] = 5251,
  [SMALL_STATE(351)] = 5255,
  [SMALL_STATE(352)] = 5259,
  [SMALL_STATE(353)] = 5263,
  [SMALL_STATE(354)] = 5267,
  [SMALL_STATE(355)] = 5271,
  [SMALL_STATE(356)] = 5275,
  [SMALL_STATE(357)] = 5279,
  [SMALL_STATE(358)] = 5283,
  [SMALL_STATE(359)] = 5287,
  [SMALL_STATE(360)] = 5291,
  [SMALL_STATE(361)] = 5295,
  [SMALL_STATE(362)] = 5299,
  [SMALL_STATE(363)] = 5303,
  [SMALL_STATE(364)] = 5307,
  [SMALL_STATE(365)] = 5311,
  [SMALL_STATE(366)] = 5315,
  [SMALL_STATE(367)] = 5319,
  [SMALL_STATE(368)] = 5323,
  [SMALL_STATE(369)] = 5327,
  [SMALL_STATE(370)] = 5331,
  [SMALL_STATE(371)] = 5335,
  [SMALL_STATE(372)] = 5339,
  [SMALL_STATE(373)] = 5343,
  [SMALL_STATE(374)] = 5347,
  [SMALL_STATE(375)] = 5351,
  [SMALL_STATE(376)] = 5355,
  [SMALL_STATE(377)] = 5359,
  [SMALL_STATE(378)] = 5363,
  [SMALL_STATE(379)] = 5367,
  [SMALL_STATE(380)] = 5371,
  [SMALL_STATE(381)] = 5375,
  [SMALL_STATE(382)] = 5379,
  [SMALL_STATE(383)] = 5383,
  [SMALL_STATE(384)] = 5387,
  [SMALL_STATE(385)] = 5391,
  [SMALL_STATE(386)] = 5395,
  [SMALL_STATE(387)] = 5399,
  [SMALL_STATE(388)] = 5403,
  [SMALL_STATE(389)] = 5407,
  [SMALL_STATE(390)] = 5411,
  [SMALL_STATE(391)] = 5415,
  [SMALL_STATE(392)] = 5419,
  [SMALL_STATE(393)] = 5423,
  [SMALL_STATE(394)] = 5427,
  [SMALL_STATE(395)] = 5431,
  [SMALL_STATE(396)] = 5435,
  [SMALL_STATE(397)] = 5439,
  [SMALL_STATE(398)] = 5443,
  [SMALL_STATE(399)] = 5447,
  [SMALL_STATE(400)] = 5451,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 1, 0, 0), SHIFT(291),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 1, 0, 0), SHIFT(291),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 1, 0, 0), SHIFT(291),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 1, 0, 0), SHIFT(291),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 1, 0, 0), SHIFT(291),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 2, 0, 0), SHIFT(291),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 2, 0, 0), SHIFT(291),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 2, 0, 0), SHIFT(291),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 2, 0, 0), SHIFT(291),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 2, 0, 0), SHIFT(291),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 1, 0, 0), SHIFT(289),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 1, 0, 0), SHIFT(289),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 1, 0, 0), SHIFT(289),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 1, 0, 0), SHIFT(289),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 2, 0, 0), SHIFT(289),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 1, 0, 0), SHIFT(289),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 2, 0, 0), SHIFT(289),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 2, 0, 0), SHIFT(289),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 2, 0, 0), SHIFT(289),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 2, 0, 0), SHIFT(289),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 3, 0, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 3, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 4, 0, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 4, 0, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 5, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 5, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_end, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_end, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_end, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_end, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_end, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_end, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_end, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_end, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_end, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_end, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 4, 0, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 4, 0, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_end_tag, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_end_tag, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_end_tag, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_end_tag, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 2, 0, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(264),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_start, 5, 0, 13),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_start, 5, 0, 13),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_start, 5, 0, 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_start, 5, 0, 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_start, 5, 0, 6),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_start, 5, 0, 6),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_start, 5, 0, 8),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_start, 5, 0, 8),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_start, 6, 0, 15),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_start, 6, 0, 15),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_start, 4, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_start, 4, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 3, 0, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(298),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_modifier, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 11),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_name, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 1, 0, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 3, 0, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 3, 0, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_self_closing_element, 3, 0, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_self_closing_element, 3, 0, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_element, 3, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_element, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 4, 0, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 4, 0, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_self_closing_element, 4, 0, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_self_closing_element, 4, 0, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_end_tag, 3, 0, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_end_tag, 3, 0, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 5, 0, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 5, 0, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 3, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_element, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_element, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 3, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 4, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 4, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 4, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 4, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 5, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start, 5, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_attribute, 1, 0, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start, 4, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_start_tag, 3, 0, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start_tag, 3, 0, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_start_tag, 4, 0, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start_tag, 4, 0, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 4, 0, 10),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_tag_name, 1, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 3, 0, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 5, 0, 14),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter, 2, 0, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_quoted_attribute_value, 2, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_attribute, 3, 0, 5),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_tag_name, 1, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_quoted_attribute_value, 3, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formatter_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formatter_arguments_repeat1, 2, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 3, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter, 3, 0, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 4, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 2, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [919] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_start, 5, 0, 7),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_comment = 0,
  ts_external_token_script_content = 1,
  ts_external_token_style_content = 2,
  ts_external_token_expression_content = 3,
  ts_external_token_inline_comment = 4,
  ts_external_token_block_comment = 5,
  ts_external_token_directive_expression = 6,
  ts_external_token_formatter_argument = 7,
  ts_external_token_raw_text = 8,
  ts_external_token_raw_brace_value = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_script_content] = sym_script_content,
  [ts_external_token_style_content] = sym_style_content,
  [ts_external_token_expression_content] = sym_expression_content,
  [ts_external_token_inline_comment] = sym_inline_comment,
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token_directive_expression] = sym_directive_expression,
  [ts_external_token_formatter_argument] = sym_formatter_argument,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_raw_brace_value] = sym_raw_brace_value,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token_script_content] = true,
    [ts_external_token_style_content] = true,
    [ts_external_token_expression_content] = true,
    [ts_external_token_inline_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_directive_expression] = true,
    [ts_external_token_formatter_argument] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_raw_brace_value] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
    [ts_external_token_inline_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token_comment] = true,
    [ts_external_token_raw_text] = true,
  },
  [4] = {
    [ts_external_token_raw_brace_value] = true,
  },
  [5] = {
    [ts_external_token_expression_content] = true,
  },
  [6] = {
    [ts_external_token_style_content] = true,
  },
  [7] = {
    [ts_external_token_script_content] = true,
  },
  [8] = {
    [ts_external_token_formatter_argument] = true,
  },
  [9] = {
    [ts_external_token_directive_expression] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_puzzle_external_scanner_create(void);
void tree_sitter_puzzle_external_scanner_destroy(void *);
bool tree_sitter_puzzle_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_puzzle_external_scanner_serialize(void *, char *);
void tree_sitter_puzzle_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_puzzle(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_puzzle_external_scanner_create,
      tree_sitter_puzzle_external_scanner_destroy,
      tree_sitter_puzzle_external_scanner_scan,
      tree_sitter_puzzle_external_scanner_serialize,
      tree_sitter_puzzle_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
