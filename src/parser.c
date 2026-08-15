#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
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
  sym_text = 59,
  sym_comment = 60,
  sym_script_content = 61,
  sym_style_content = 62,
  sym_expression_content = 63,
  sym_inline_comment = 64,
  sym_block_comment = 65,
  sym_directive_expression = 66,
  sym_formatter_argument = 67,
  sym_raw_text = 68,
  sym_raw_brace_value = 69,
  sym_document = 70,
  sym__top_level = 71,
  sym__node = 72,
  sym_view_element = 73,
  sym_view_start_tag = 74,
  sym_view_end_tag = 75,
  sym_skeleton_element = 76,
  sym_skeleton_start_tag = 77,
  sym_skeleton_end_tag = 78,
  sym_script_element = 79,
  sym_script_start_tag = 80,
  sym_script_end_tag = 81,
  sym_style_element = 82,
  sym_style_start_tag = 83,
  sym_style_end_tag = 84,
  sym_element = 85,
  sym_start_tag = 86,
  sym_end_tag = 87,
  sym_self_closing_element = 88,
  sym_void_element = 89,
  sym_tag_name = 90,
  sym_void_tag_name = 91,
  sym_attribute = 92,
  sym_normal_attribute = 93,
  sym_event_attribute = 94,
  sym_event_name = 95,
  sym_event_modifier = 96,
  sym_quoted_attribute_value = 97,
  sym__attribute_node = 98,
  sym_interpolation = 99,
  sym_formatter = 100,
  sym_formatter_arguments = 101,
  sym_if_statement = 102,
  sym_if_start = 103,
  sym_else_if_block = 104,
  sym_else_if_start = 105,
  sym_else_block = 106,
  sym_else_start = 107,
  sym_if_end = 108,
  sym_unless_statement = 109,
  sym_unless_start = 110,
  sym_unless_end = 111,
  sym_case_statement = 112,
  sym_case_start = 113,
  sym_when_block = 114,
  sym_when_start = 115,
  sym_case_else_block = 116,
  sym_case_end = 117,
  sym_for_statement = 118,
  sym_for_start = 119,
  sym_for_else_block = 120,
  sym_for_end = 121,
  sym_svg_directive = 122,
  sym_raw_block = 123,
  sym_raw_start = 124,
  sym_raw_end = 125,
  sym__raw_node = 126,
  sym_raw_element = 127,
  sym_raw_start_tag = 128,
  sym_raw_end_tag = 129,
  sym_raw_self_closing_element = 130,
  sym_raw_void_element = 131,
  sym_raw_tag_name = 132,
  sym_raw_attribute = 133,
  sym_raw_quoted_attribute_value = 134,
  sym_attribute_if_statement = 135,
  sym_attribute_else_if_block = 136,
  sym_attribute_else_block = 137,
  sym_attribute_unless_statement = 138,
  sym_attribute_case_statement = 139,
  sym_attribute_when_block = 140,
  sym_attribute_case_else_block = 141,
  sym_attribute_for_statement = 142,
  sym_attribute_for_else_block = 143,
  aux_sym_document_repeat1 = 144,
  aux_sym_view_element_repeat1 = 145,
  aux_sym_view_start_tag_repeat1 = 146,
  aux_sym_event_attribute_repeat1 = 147,
  aux_sym_quoted_attribute_value_repeat1 = 148,
  aux_sym_interpolation_repeat1 = 149,
  aux_sym_formatter_arguments_repeat1 = 150,
  aux_sym_if_statement_repeat1 = 151,
  aux_sym_case_statement_repeat1 = 152,
  aux_sym_raw_block_repeat1 = 153,
  aux_sym_raw_start_tag_repeat1 = 154,
  aux_sym_attribute_if_statement_repeat1 = 155,
  aux_sym_attribute_case_statement_repeat1 = 156,
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
  [76] = 74,
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
  [103] = 98,
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
  [114] = 114,
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
  [131] = 101,
  [132] = 110,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 141,
  [145] = 139,
  [146] = 140,
  [147] = 147,
  [148] = 138,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 154,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 153,
  [170] = 162,
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
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
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
  [208] = 195,
  [209] = 65,
  [210] = 210,
  [211] = 211,
  [212] = 77,
  [213] = 174,
  [214] = 193,
  [215] = 85,
  [216] = 87,
  [217] = 88,
  [218] = 89,
  [219] = 179,
  [220] = 180,
  [221] = 182,
  [222] = 192,
  [223] = 65,
  [224] = 77,
  [225] = 65,
  [226] = 77,
  [227] = 200,
  [228] = 198,
  [229] = 198,
  [230] = 230,
  [231] = 200,
  [232] = 198,
  [233] = 200,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 211,
  [239] = 239,
  [240] = 240,
  [241] = 236,
  [242] = 242,
  [243] = 243,
  [244] = 235,
  [245] = 239,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
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
  [278] = 147,
  [279] = 150,
  [280] = 152,
  [281] = 281,
  [282] = 143,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 151,
  [287] = 287,
  [288] = 288,
  [289] = 149,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 283,
  [295] = 273,
  [296] = 256,
  [297] = 259,
  [298] = 298,
  [299] = 299,
  [300] = 287,
  [301] = 301,
  [302] = 302,
  [303] = 276,
  [304] = 302,
  [305] = 275,
  [306] = 293,
  [307] = 285,
  [308] = 308,
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
  [332] = 309,
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
  [350] = 336,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 316,
  [355] = 319,
  [356] = 325,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 311,
  [363] = 363,
  [364] = 364,
  [365] = 349,
  [366] = 366,
  [367] = 363,
  [368] = 352,
  [369] = 351,
  [370] = 322,
  [371] = 323,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 366,
  [377] = 344,
  [378] = 375,
  [379] = 343,
  [380] = 346,
  [381] = 364,
  [382] = 382,
  [383] = 326,
  [384] = 329,
  [385] = 333,
  [386] = 342,
  [387] = 387,
  [388] = 313,
  [389] = 389,
  [390] = 359,
  [391] = 327,
  [392] = 331,
  [393] = 382,
  [394] = 312,
  [395] = 372,
  [396] = 396,
  [397] = 337,
  [398] = 396,
  [399] = 315,
  [400] = 347,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      ADVANCE_MAP(
        '"', 234,
        '#', 245,
        '\'', 235,
        '(', 242,
        ')', 244,
        ',', 243,
        '/', 134,
        ':', 230,
        '<', 122,
        '=', 228,
        '>', 125,
        '@', 229,
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
        '{', 238,
        '|', 240,
        '}', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '{') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(261);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '{') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(263);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(260);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(260);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(261);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'a', 184,
        'b', 136,
        'c', 175,
        'e', 172,
        'h', 180,
        'i', 170,
        'l', 160,
        'm', 149,
        'p', 141,
        's', 146,
        't', 181,
        'w', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        'a', 184,
        'b', 136,
        'c', 175,
        'e', 172,
        'h', 180,
        'i', 170,
        'l', 160,
        'm', 149,
        'p', 142,
        's', 176,
        't', 181,
        'w', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
      if (lookahead == '}') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(222);
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
      if (lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(256);
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
      if (lookahead == 'k') ADVANCE(216);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(224);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(206);
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
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(127);
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
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(255);
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
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(250);
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
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(129);
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
      if (lookahead == 'w') ADVANCE(257);
      END_STATE();
    case 110:
      if (lookahead == 'w') ADVANCE(259);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(123);
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
      if (lookahead == '}') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(115);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 116:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 117:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(117);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 118:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      ADVANCE_MAP(
        '"', 234,
        '#', 245,
        '\'', 235,
        '(', 242,
        ')', 244,
        ',', 243,
        '/', 134,
        ':', 230,
        '<', 122,
        '=', 228,
        '>', 125,
        '@', 229,
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
        '{', 238,
        '|', 240,
        '}', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '{') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHview);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHview);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHskeleton);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHskeleton);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_style);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'y') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'z') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'z') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_area);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_br);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_col);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_col);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_embed);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_hr);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_hr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_img);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_img);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_track);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_wbr);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_wbr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_event_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_attribute_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_formatter_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_if2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_unless2);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_case2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_for2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_raw_opener_rest);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_raw2);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_raw_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_raw_unquoted_attribute_value);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_raw_attribute_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_raw_attribute_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 120, .external_lex_state = 2},
  [2] = {.lex_state = 120, .external_lex_state = 2},
  [3] = {.lex_state = 120, .external_lex_state = 2},
  [4] = {.lex_state = 120, .external_lex_state = 2},
  [5] = {.lex_state = 120, .external_lex_state = 2},
  [6] = {.lex_state = 120, .external_lex_state = 2},
  [7] = {.lex_state = 120, .external_lex_state = 2},
  [8] = {.lex_state = 120, .external_lex_state = 2},
  [9] = {.lex_state = 120, .external_lex_state = 2},
  [10] = {.lex_state = 120, .external_lex_state = 2},
  [11] = {.lex_state = 120, .external_lex_state = 2},
  [12] = {.lex_state = 120, .external_lex_state = 2},
  [13] = {.lex_state = 120, .external_lex_state = 2},
  [14] = {.lex_state = 120, .external_lex_state = 2},
  [15] = {.lex_state = 120, .external_lex_state = 2},
  [16] = {.lex_state = 120, .external_lex_state = 2},
  [17] = {.lex_state = 120, .external_lex_state = 2},
  [18] = {.lex_state = 120, .external_lex_state = 2},
  [19] = {.lex_state = 120, .external_lex_state = 2},
  [20] = {.lex_state = 120, .external_lex_state = 2},
  [21] = {.lex_state = 120, .external_lex_state = 2},
  [22] = {.lex_state = 120, .external_lex_state = 2},
  [23] = {.lex_state = 120, .external_lex_state = 2},
  [24] = {.lex_state = 120, .external_lex_state = 2},
  [25] = {.lex_state = 120, .external_lex_state = 2},
  [26] = {.lex_state = 120, .external_lex_state = 2},
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
  [60] = {.lex_state = 120, .external_lex_state = 2},
  [61] = {.lex_state = 120, .external_lex_state = 2},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 120, .external_lex_state = 2},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 120, .external_lex_state = 2},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 120, .external_lex_state = 2},
  [68] = {.lex_state = 120, .external_lex_state = 2},
  [69] = {.lex_state = 120, .external_lex_state = 2},
  [70] = {.lex_state = 120, .external_lex_state = 2},
  [71] = {.lex_state = 120, .external_lex_state = 2},
  [72] = {.lex_state = 120, .external_lex_state = 2},
  [73] = {.lex_state = 120, .external_lex_state = 2},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 120, .external_lex_state = 2},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 120, .external_lex_state = 2},
  [78] = {.lex_state = 120, .external_lex_state = 2},
  [79] = {.lex_state = 120, .external_lex_state = 2},
  [80] = {.lex_state = 120, .external_lex_state = 2},
  [81] = {.lex_state = 120, .external_lex_state = 2},
  [82] = {.lex_state = 120, .external_lex_state = 2},
  [83] = {.lex_state = 120, .external_lex_state = 2},
  [84] = {.lex_state = 120, .external_lex_state = 2},
  [85] = {.lex_state = 120, .external_lex_state = 2},
  [86] = {.lex_state = 120, .external_lex_state = 2},
  [87] = {.lex_state = 120, .external_lex_state = 2},
  [88] = {.lex_state = 120, .external_lex_state = 2},
  [89] = {.lex_state = 120, .external_lex_state = 2},
  [90] = {.lex_state = 120, .external_lex_state = 2},
  [91] = {.lex_state = 120, .external_lex_state = 2},
  [92] = {.lex_state = 120, .external_lex_state = 2},
  [93] = {.lex_state = 120, .external_lex_state = 2},
  [94] = {.lex_state = 120, .external_lex_state = 2},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 120, .external_lex_state = 2},
  [97] = {.lex_state = 120, .external_lex_state = 2},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 120, .external_lex_state = 2},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 120, .external_lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 120, .external_lex_state = 2},
  [107] = {.lex_state = 120, .external_lex_state = 2},
  [108] = {.lex_state = 120, .external_lex_state = 2},
  [109] = {.lex_state = 120, .external_lex_state = 2},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 120, .external_lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 120, .external_lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 120, .external_lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 120, .external_lex_state = 2},
  [122] = {.lex_state = 120, .external_lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 120, .external_lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 120, .external_lex_state = 2},
  [127] = {.lex_state = 120, .external_lex_state = 2},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 120, .external_lex_state = 2},
  [130] = {.lex_state = 120, .external_lex_state = 2},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 120, .external_lex_state = 2},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 120, .external_lex_state = 2},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 33},
  [143] = {.lex_state = 120, .external_lex_state = 2},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 120, .external_lex_state = 2},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 120, .external_lex_state = 2},
  [150] = {.lex_state = 120, .external_lex_state = 2},
  [151] = {.lex_state = 120, .external_lex_state = 2},
  [152] = {.lex_state = 120, .external_lex_state = 2},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 2, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 2, .external_lex_state = 4},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 5},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 33},
  [184] = {.lex_state = 0, .external_lex_state = 5},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 5},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 5},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 0, .external_lex_state = 3},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0, .external_lex_state = 5},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 0, .external_lex_state = 7},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0, .external_lex_state = 7},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 118},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 115},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0, .external_lex_state = 8},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 116},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 35},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 118},
  [284] = {.lex_state = 116},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0, .external_lex_state = 6},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 0, .external_lex_state = 5},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0, .external_lex_state = 5},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 118},
  [295] = {.lex_state = 35},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 118},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 6},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0, .external_lex_state = 7},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 35},
  [310] = {.lex_state = 0, .external_lex_state = 8},
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
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 35},
  [327] = {.lex_state = 0, .external_lex_state = 9},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0, .external_lex_state = 5},
  [332] = {.lex_state = 35},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 35},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0, .external_lex_state = 9},
  [342] = {.lex_state = 35},
  [343] = {.lex_state = 35},
  [344] = {.lex_state = 0, .external_lex_state = 9},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 117},
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
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
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
  [372] = {.lex_state = 35},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0, .external_lex_state = 9},
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
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0, .external_lex_state = 9},
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
    [sym_document] = STATE(345),
    [sym__top_level] = STATE(2),
    [sym__node] = STATE(2),
    [sym_view_element] = STATE(2),
    [sym_view_start_tag] = STATE(12),
    [sym_skeleton_element] = STATE(2),
    [sym_skeleton_start_tag] = STATE(11),
    [sym_script_element] = STATE(2),
    [sym_script_start_tag] = STATE(242),
    [sym_style_element] = STATE(2),
    [sym_style_start_tag] = STATE(247),
    [sym_element] = STATE(82),
    [sym_start_tag] = STATE(14),
    [sym_self_closing_element] = STATE(82),
    [sym_void_element] = STATE(82),
    [sym_interpolation] = STATE(82),
    [sym_if_statement] = STATE(82),
    [sym_if_start] = STATE(4),
    [sym_unless_statement] = STATE(82),
    [sym_unless_start] = STATE(8),
    [sym_case_statement] = STATE(82),
    [sym_case_start] = STATE(123),
    [sym_for_statement] = STATE(82),
    [sym_for_start] = STATE(9),
    [sym_svg_directive] = STATE(82),
    [sym_raw_block] = STATE(82),
    [sym_raw_start] = STATE(58),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [sym_inline_comment] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(242), 1,
      sym_script_start_tag,
    STATE(247), 1,
      sym_style_start_tag,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(3), 7,
      sym__top_level,
      sym__node,
      sym_view_element,
      sym_skeleton_element,
      sym_script_element,
      sym_style_element,
      aux_sym_document_repeat1,
    STATE(82), 10,
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
  [67] = 16,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(242), 1,
      sym_script_start_tag,
    STATE(247), 1,
      sym_style_start_tag,
    ACTIONS(21), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(3), 7,
      sym__top_level,
      sym__node,
      sym_view_element,
      sym_skeleton_element,
      sym_script_element,
      sym_style_element,
      aux_sym_document_repeat1,
    STATE(82), 10,
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
  [134] = 16,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
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
    STATE(94), 1,
      sym_if_end,
    STATE(123), 1,
      sym_case_start,
    STATE(308), 1,
      sym_else_block,
    STATE(5), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(99), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [197] = 16,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
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
    STATE(68), 1,
      sym_if_end,
    STATE(123), 1,
      sym_case_start,
    STATE(274), 1,
      sym_else_block,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(105), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [260] = 14,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(28), 1,
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
    STATE(69), 1,
      sym_unless_end,
    STATE(123), 1,
      sym_case_start,
    STATE(291), 1,
      sym_else_block,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [316] = 14,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(30), 1,
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
    STATE(71), 1,
      sym_for_end,
    STATE(123), 1,
      sym_case_start,
    STATE(262), 1,
      sym_for_else_block,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [372] = 14,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(28), 1,
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
    STATE(73), 1,
      sym_unless_end,
    STATE(123), 1,
      sym_case_start,
    STATE(249), 1,
      sym_else_block,
    STATE(6), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [428] = 14,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(30), 1,
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
    STATE(92), 1,
      sym_for_end,
    STATE(123), 1,
      sym_case_start,
    STATE(258), 1,
      sym_for_else_block,
    STATE(7), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [484] = 13,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(32), 1,
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
    STATE(100), 1,
      sym_skeleton_end_tag,
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [537] = 13,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(32), 1,
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
    STATE(111), 1,
      sym_skeleton_end_tag,
    STATE(123), 1,
      sym_case_start,
    STATE(10), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [590] = 13,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
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
    STATE(115), 1,
      sym_view_end_tag,
    STATE(123), 1,
      sym_case_start,
    STATE(13), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [643] = 13,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(130), 1,
      sym_view_end_tag,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [696] = 13,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
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
    STATE(96), 1,
      sym_end_tag,
    STATE(123), 1,
      sym_case_start,
    STATE(15), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [749] = 13,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
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
    STATE(67), 1,
      sym_end_tag,
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [802] = 12,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(46), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [852] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(25), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [899] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(26), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [946] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(22), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [993] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(58), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(23), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [1040] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(24), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [1087] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [1134] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [1181] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(70), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [1228] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [1275] = 11,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(76), 1,
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
    STATE(123), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(82), 10,
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
  [1322] = 8,
    ACTIONS(79), 1,
      anon_sym_puzzle_DASHview,
    ACTIONS(81), 1,
      anon_sym_puzzle_DASHskeleton,
    ACTIONS(83), 1,
      anon_sym_script,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(87), 1,
      aux_sym_tag_name_token1,
    STATE(66), 1,
      sym_void_tag_name,
    STATE(95), 1,
      sym_tag_name,
    ACTIONS(89), 14,
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
  [1360] = 12,
    ACTIONS(91), 1,
      sym_attribute_text,
    ACTIONS(93), 1,
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
    STATE(112), 1,
      sym_case_start,
    STATE(185), 1,
      sym_if_end,
    STATE(250), 1,
      sym_attribute_else_block,
    STATE(117), 2,
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
  [1404] = 12,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      sym_attribute_text,
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
    STATE(112), 1,
      sym_case_start,
    STATE(194), 1,
      sym_if_end,
    STATE(264), 1,
      sym_attribute_else_block,
    STATE(125), 2,
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
  [1448] = 4,
    ACTIONS(87), 1,
      aux_sym_tag_name_token1,
    STATE(66), 1,
      sym_void_tag_name,
    STATE(95), 1,
      sym_tag_name,
    ACTIONS(89), 14,
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
  [1474] = 4,
    ACTIONS(97), 1,
      aux_sym_tag_name_token1,
    STATE(166), 1,
      sym_void_tag_name,
    STATE(167), 1,
      sym_raw_tag_name,
    ACTIONS(99), 14,
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
  [1500] = 10,
    ACTIONS(101), 1,
      sym_attribute_text,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(46), 1,
      sym_else_start,
    STATE(112), 1,
      sym_case_start,
    STATE(187), 1,
      sym_unless_end,
    STATE(253), 1,
      sym_attribute_else_block,
    STATE(34), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1537] = 10,
    ACTIONS(105), 1,
      sym_attribute_text,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(50), 1,
      sym_else_start,
    STATE(112), 1,
      sym_case_start,
    STATE(191), 1,
      sym_for_end,
    STATE(257), 1,
      sym_attribute_for_else_block,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1574] = 10,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(46), 1,
      sym_else_start,
    STATE(112), 1,
      sym_case_start,
    STATE(197), 1,
      sym_unless_end,
    STATE(267), 1,
      sym_attribute_else_block,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1611] = 10,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(50), 1,
      sym_else_start,
    STATE(112), 1,
      sym_case_start,
    STATE(201), 1,
      sym_for_end,
    STATE(269), 1,
      sym_attribute_for_else_block,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1648] = 8,
    ACTIONS(111), 1,
      sym_attribute_text,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    ACTIONS(109), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1680] = 8,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_attribute_text,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(39), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1711] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1742] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1773] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1804] = 8,
    ACTIONS(117), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(40), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1835] = 8,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(44), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1866] = 8,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(38), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1897] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1928] = 7,
    ACTIONS(135), 1,
      sym_attribute_text,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(49), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1956] = 7,
    ACTIONS(140), 1,
      sym_attribute_text,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(54), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1984] = 7,
    ACTIONS(145), 1,
      sym_attribute_text,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(52), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2012] = 7,
    ACTIONS(150), 1,
      sym_attribute_text,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(51), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2040] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2068] = 7,
    ACTIONS(158), 1,
      sym_attribute_text,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(53), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2096] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2124] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2152] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2180] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(33), 1,
      sym_for_start,
    STATE(112), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2208] = 6,
    ACTIONS(175), 1,
      anon_sym_LT,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(72), 1,
      sym_raw_end,
    ACTIONS(179), 2,
      sym_comment,
      sym_raw_text,
    STATE(57), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2232] = 6,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      anon_sym_LT_SLASH,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(168), 1,
      sym_raw_end_tag,
    ACTIONS(185), 2,
      sym_comment,
      sym_raw_text,
    STATE(59), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2256] = 5,
    ACTIONS(187), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym_raw_start_tag,
    ACTIONS(190), 2,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(192), 2,
      sym_comment,
      sym_raw_text,
    STATE(57), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2278] = 6,
    ACTIONS(175), 1,
      anon_sym_LT,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(93), 1,
      sym_raw_end,
    ACTIONS(195), 2,
      sym_comment,
      sym_raw_text,
    STATE(55), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2302] = 6,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      anon_sym_LT_SLASH,
    STATE(56), 1,
      sym_raw_start_tag,
    STATE(159), 1,
      sym_raw_end_tag,
    ACTIONS(179), 2,
      sym_comment,
      sym_raw_text,
    STATE(57), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2326] = 2,
    ACTIONS(199), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(197), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2339] = 2,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(201), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2352] = 6,
    ACTIONS(205), 1,
      anon_sym_GT,
    ACTIONS(207), 1,
      anon_sym_SLASH_GT,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    STATE(74), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2373] = 2,
    ACTIONS(215), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(213), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2386] = 6,
    ACTIONS(217), 1,
      anon_sym_GT,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      sym_attribute_name,
    STATE(76), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(208), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2407] = 2,
    ACTIONS(227), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(225), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2420] = 6,
    ACTIONS(221), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      sym_attribute_name,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(231), 1,
      anon_sym_SLASH,
    STATE(64), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(208), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2441] = 2,
    ACTIONS(235), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(233), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2454] = 2,
    ACTIONS(239), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(237), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2467] = 2,
    ACTIONS(243), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(241), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2480] = 2,
    ACTIONS(247), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(245), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2493] = 2,
    ACTIONS(251), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(249), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2506] = 2,
    ACTIONS(255), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(253), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2519] = 2,
    ACTIONS(259), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(257), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2532] = 5,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(266), 1,
      sym_attribute_name,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(74), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2551] = 2,
    ACTIONS(271), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(269), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2564] = 5,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      sym_attribute_name,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    STATE(76), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(208), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2583] = 2,
    ACTIONS(281), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(279), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2596] = 2,
    ACTIONS(285), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(283), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2609] = 2,
    ACTIONS(289), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(287), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2622] = 2,
    ACTIONS(293), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(291), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2635] = 2,
    ACTIONS(297), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(295), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2648] = 2,
    ACTIONS(301), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(299), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2661] = 2,
    ACTIONS(305), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(303), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2674] = 2,
    ACTIONS(309), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(307), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2687] = 2,
    ACTIONS(313), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(311), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2700] = 2,
    ACTIONS(317), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(315), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2713] = 2,
    ACTIONS(321), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(319), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2726] = 2,
    ACTIONS(325), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(323), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2739] = 2,
    ACTIONS(329), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(327), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2752] = 2,
    ACTIONS(333), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(331), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2765] = 2,
    ACTIONS(337), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(335), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2778] = 2,
    ACTIONS(341), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(339), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2791] = 2,
    ACTIONS(345), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(343), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2804] = 2,
    ACTIONS(349), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(347), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2817] = 6,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(351), 1,
      anon_sym_GT,
    ACTIONS(353), 1,
      anon_sym_SLASH_GT,
    STATE(62), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2838] = 2,
    ACTIONS(357), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(355), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2851] = 2,
    ACTIONS(361), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(359), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2864] = 4,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(367), 1,
      anon_sym_COLON,
    STATE(131), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(363), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [2880] = 6,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_else_start,
    STATE(19), 1,
      sym_else_if_start,
    STATE(68), 1,
      sym_if_end,
    STATE(274), 1,
      sym_else_block,
    STATE(173), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [2900] = 2,
    ACTIONS(373), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(371), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2912] = 4,
    ACTIONS(377), 1,
      anon_sym_EQ,
    ACTIONS(379), 1,
      anon_sym_COLON,
    STATE(110), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(375), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [2928] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(381), 1,
      anon_sym_GT,
    STATE(128), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2946] = 4,
    ACTIONS(379), 1,
      anon_sym_COLON,
    ACTIONS(383), 1,
      anon_sym_EQ,
    STATE(101), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(363), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [2962] = 2,
    ACTIONS(385), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(387), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [2974] = 6,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_else_start,
    STATE(19), 1,
      sym_else_if_start,
    STATE(78), 1,
      sym_if_end,
    STATE(277), 1,
      sym_else_block,
    STATE(173), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [2994] = 2,
    ACTIONS(389), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(391), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3006] = 2,
    ACTIONS(393), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(395), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3018] = 2,
    ACTIONS(399), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(397), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3030] = 2,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(401), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3042] = 3,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(110), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(405), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      sym_attribute_name,
  [3056] = 2,
    ACTIONS(412), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(410), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3068] = 6,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(48), 1,
      sym_else_start,
    STATE(189), 1,
      sym_case_end,
    STATE(254), 1,
      sym_attribute_case_else_block,
    STATE(120), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [3088] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(416), 1,
      anon_sym_GT,
    STATE(134), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3106] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(418), 1,
      anon_sym_GT,
    STATE(135), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3124] = 2,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(420), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3136] = 6,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_else_start,
    STATE(21), 1,
      sym_when_start,
    STATE(70), 1,
      sym_case_end,
    STATE(252), 1,
      sym_case_else_block,
    STATE(188), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [3156] = 6,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(194), 1,
      sym_if_end,
    STATE(264), 1,
      sym_attribute_else_block,
    STATE(196), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3176] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(428), 1,
      anon_sym_GT,
    STATE(136), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3194] = 2,
    ACTIONS(432), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(430), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3206] = 6,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(48), 1,
      sym_else_start,
    STATE(171), 1,
      sym_case_end,
    STATE(248), 1,
      sym_attribute_case_else_block,
    STATE(199), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [3226] = 2,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(434), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3238] = 2,
    ACTIONS(440), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(438), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3250] = 6,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_else_start,
    STATE(21), 1,
      sym_when_start,
    STATE(91), 1,
      sym_case_end,
    STATE(281), 1,
      sym_case_else_block,
    STATE(116), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [3270] = 2,
    ACTIONS(444), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(442), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3282] = 6,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(202), 1,
      sym_if_end,
    STATE(272), 1,
      sym_attribute_else_block,
    STATE(196), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3302] = 2,
    ACTIONS(448), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(446), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3314] = 2,
    ACTIONS(450), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(452), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3326] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(454), 1,
      anon_sym_GT,
    STATE(74), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3344] = 2,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(456), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3356] = 2,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(460), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3368] = 4,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(132), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(375), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3384] = 3,
    ACTIONS(466), 1,
      anon_sym_COLON,
    STATE(132), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(405), 5,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      sym_attribute_name,
  [3398] = 2,
    ACTIONS(469), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(471), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3410] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(473), 1,
      anon_sym_GT,
    STATE(74), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3428] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(475), 1,
      anon_sym_GT,
    STATE(74), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3446] = 5,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_attribute_name,
    ACTIONS(477), 1,
      anon_sym_GT,
    STATE(74), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(195), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3464] = 2,
    ACTIONS(479), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(481), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3476] = 5,
    ACTIONS(483), 1,
      sym_unquoted_attribute_value,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(193), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3493] = 1,
    ACTIONS(491), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3502] = 1,
    ACTIONS(493), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3511] = 1,
    ACTIONS(495), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3520] = 6,
    ACTIONS(497), 1,
      anon_sym_if,
    ACTIONS(499), 1,
      anon_sym_unless,
    ACTIONS(501), 1,
      anon_sym_case,
    ACTIONS(503), 1,
      anon_sym_for,
    ACTIONS(505), 1,
      anon_sym_svg,
    ACTIONS(507), 1,
      anon_sym_raw,
  [3539] = 2,
    ACTIONS(509), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(511), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3550] = 1,
    ACTIONS(495), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3559] = 1,
    ACTIONS(491), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3568] = 1,
    ACTIONS(493), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3577] = 2,
    ACTIONS(513), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(515), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3588] = 5,
    ACTIONS(517), 1,
      sym_unquoted_attribute_value,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      anon_sym_SQUOTE,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(214), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3605] = 2,
    ACTIONS(525), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(527), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3616] = 2,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(531), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3627] = 2,
    ACTIONS(533), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(535), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3638] = 2,
    ACTIONS(537), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(539), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3649] = 2,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(541), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3659] = 4,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      anon_sym_SQUOTE,
    STATE(245), 1,
      sym_raw_quoted_attribute_value,
    ACTIONS(549), 2,
      sym_raw_brace_value,
      sym_raw_unquoted_attribute_value,
  [3673] = 2,
    ACTIONS(551), 1,
      anon_sym_LT,
    ACTIONS(553), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3683] = 4,
    ACTIONS(555), 1,
      anon_sym_GT,
    ACTIONS(557), 1,
      anon_sym_SLASH,
    ACTIONS(559), 1,
      sym_raw_attribute_name,
    STATE(162), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3697] = 2,
    ACTIONS(561), 1,
      anon_sym_LT,
    ACTIONS(563), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3707] = 4,
    ACTIONS(565), 1,
      anon_sym_GT,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
    ACTIONS(569), 1,
      sym_raw_attribute_name,
    STATE(170), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3721] = 2,
    ACTIONS(571), 1,
      anon_sym_LT,
    ACTIONS(573), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3731] = 2,
    ACTIONS(575), 1,
      anon_sym_LT,
    ACTIONS(577), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3741] = 4,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_raw_quoted_attribute_value,
    ACTIONS(583), 2,
      sym_raw_brace_value,
      sym_raw_unquoted_attribute_value,
  [3755] = 3,
    ACTIONS(587), 1,
      sym_raw_attribute_name,
    ACTIONS(585), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    STATE(162), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3767] = 2,
    ACTIONS(590), 1,
      anon_sym_LT,
    ACTIONS(592), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3777] = 2,
    ACTIONS(594), 1,
      anon_sym_LT,
    ACTIONS(596), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3787] = 2,
    ACTIONS(598), 1,
      anon_sym_LT,
    ACTIONS(600), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3797] = 4,
    ACTIONS(559), 1,
      sym_raw_attribute_name,
    ACTIONS(602), 1,
      anon_sym_GT,
    ACTIONS(604), 1,
      anon_sym_SLASH,
    STATE(156), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3811] = 4,
    ACTIONS(569), 1,
      sym_raw_attribute_name,
    ACTIONS(606), 1,
      anon_sym_GT,
    ACTIONS(608), 1,
      anon_sym_SLASH_GT,
    STATE(158), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3825] = 2,
    ACTIONS(610), 1,
      anon_sym_LT,
    ACTIONS(612), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [3835] = 2,
    ACTIONS(614), 1,
      anon_sym_EQ,
    ACTIONS(541), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3845] = 3,
    ACTIONS(616), 1,
      sym_raw_attribute_name,
    ACTIONS(585), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(170), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [3857] = 2,
    ACTIONS(621), 1,
      sym_attribute_text,
    ACTIONS(619), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3866] = 4,
    ACTIONS(623), 1,
      anon_sym_SLASH,
    ACTIONS(625), 1,
      anon_sym_COLON,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      sym_expression_content,
  [3879] = 3,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_else_if_start,
    STATE(173), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [3890] = 2,
    ACTIONS(636), 1,
      anon_sym_EQ,
    ACTIONS(634), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [3899] = 1,
    ACTIONS(638), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT,
      anon_sym_LBRACE,
  [3906] = 2,
    ACTIONS(640), 1,
      anon_sym_LT,
    ACTIONS(642), 3,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3915] = 2,
    ACTIONS(644), 1,
      anon_sym_LT,
    ACTIONS(646), 3,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3924] = 4,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      sym_expression_content,
    ACTIONS(648), 1,
      anon_sym_SLASH,
    ACTIONS(650), 1,
      anon_sym_COLON,
  [3937] = 1,
    ACTIONS(652), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3944] = 1,
    ACTIONS(654), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3951] = 3,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 1,
      anon_sym_PIPE,
    STATE(181), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [3962] = 1,
    ACTIONS(661), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3969] = 4,
    ACTIONS(501), 1,
      anon_sym_case,
    ACTIONS(663), 1,
      anon_sym_if,
    ACTIONS(665), 1,
      anon_sym_unless,
    ACTIONS(667), 1,
      anon_sym_for,
  [3982] = 4,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    ACTIONS(671), 1,
      anon_sym_COLON,
    ACTIONS(673), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      sym_expression_content,
  [3995] = 2,
    ACTIONS(679), 1,
      sym_attribute_text,
    ACTIONS(677), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4004] = 4,
    ACTIONS(673), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      sym_expression_content,
    ACTIONS(681), 1,
      anon_sym_SLASH,
    ACTIONS(683), 1,
      anon_sym_COLON,
  [4017] = 2,
    ACTIONS(687), 1,
      sym_attribute_text,
    ACTIONS(685), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4026] = 3,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_when_start,
    STATE(188), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [4037] = 2,
    ACTIONS(694), 1,
      sym_attribute_text,
    ACTIONS(692), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4046] = 4,
    ACTIONS(673), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      sym_expression_content,
    ACTIONS(683), 1,
      anon_sym_COLON,
    ACTIONS(696), 1,
      anon_sym_SLASH,
  [4059] = 2,
    ACTIONS(700), 1,
      sym_attribute_text,
    ACTIONS(698), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4068] = 1,
    ACTIONS(702), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4075] = 1,
    ACTIONS(704), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4082] = 2,
    ACTIONS(708), 1,
      sym_attribute_text,
    ACTIONS(706), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4091] = 1,
    ACTIONS(710), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4098] = 3,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(196), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [4109] = 2,
    ACTIONS(717), 1,
      sym_attribute_text,
    ACTIONS(715), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4118] = 3,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    STATE(181), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4129] = 3,
    ACTIONS(723), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(199), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [4140] = 3,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    STATE(229), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4151] = 2,
    ACTIONS(730), 1,
      sym_attribute_text,
    ACTIONS(728), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4160] = 2,
    ACTIONS(734), 1,
      sym_attribute_text,
    ACTIONS(732), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4169] = 3,
    ACTIONS(738), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym_formatter_arguments,
    ACTIONS(736), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4180] = 2,
    ACTIONS(742), 1,
      sym_attribute_text,
    ACTIONS(740), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4189] = 2,
    ACTIONS(746), 1,
      sym_attribute_text,
    ACTIONS(744), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4198] = 2,
    ACTIONS(750), 1,
      sym_attribute_text,
    ACTIONS(748), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4207] = 1,
    ACTIONS(752), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT,
      anon_sym_LBRACE,
  [4214] = 1,
    ACTIONS(710), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4221] = 1,
    ACTIONS(225), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4228] = 1,
    ACTIONS(754), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4235] = 1,
    ACTIONS(756), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4242] = 1,
    ACTIONS(279), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4249] = 2,
    ACTIONS(758), 1,
      anon_sym_EQ,
    ACTIONS(634), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4258] = 1,
    ACTIONS(704), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4265] = 2,
    ACTIONS(311), 1,
      sym_attribute_text,
    ACTIONS(313), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4274] = 2,
    ACTIONS(319), 1,
      sym_attribute_text,
    ACTIONS(321), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4283] = 2,
    ACTIONS(323), 1,
      sym_attribute_text,
    ACTIONS(325), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4292] = 2,
    ACTIONS(327), 1,
      sym_attribute_text,
    ACTIONS(329), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4301] = 1,
    ACTIONS(652), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4308] = 1,
    ACTIONS(654), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4315] = 1,
    ACTIONS(661), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4322] = 1,
    ACTIONS(702), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4329] = 2,
    ACTIONS(225), 1,
      sym_attribute_text,
    ACTIONS(227), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4338] = 2,
    ACTIONS(279), 1,
      sym_attribute_text,
    ACTIONS(281), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4347] = 1,
    ACTIONS(225), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4354] = 1,
    ACTIONS(279), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4361] = 3,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(228), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4372] = 3,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(181), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4383] = 3,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(181), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4394] = 4,
    ACTIONS(625), 1,
      anon_sym_COLON,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      sym_expression_content,
    ACTIONS(766), 1,
      anon_sym_SLASH,
  [4407] = 3,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(232), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4418] = 3,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(181), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4429] = 3,
    ACTIONS(721), 1,
      anon_sym_PIPE,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(198), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4440] = 2,
    ACTIONS(776), 1,
      sym_attribute_text,
    ACTIONS(774), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [4449] = 1,
    ACTIONS(778), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4455] = 1,
    ACTIONS(780), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4461] = 3,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_formatter_arguments_repeat1,
  [4471] = 1,
    ACTIONS(756), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4477] = 1,
    ACTIONS(786), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4483] = 3,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_formatter_arguments_repeat1,
  [4493] = 1,
    ACTIONS(780), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4499] = 3,
    ACTIONS(793), 1,
      anon_sym_LT_SLASH,
    ACTIONS(795), 1,
      sym_script_content,
    STATE(122), 1,
      sym_script_end_tag,
  [4509] = 3,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_formatter_arguments_repeat1,
  [4519] = 1,
    ACTIONS(778), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4525] = 1,
    ACTIONS(786), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4531] = 1,
    ACTIONS(799), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4537] = 3,
    ACTIONS(801), 1,
      anon_sym_LT_SLASH,
    ACTIONS(803), 1,
      sym_style_content,
    STATE(129), 1,
      sym_style_end_tag,
  [4547] = 2,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_case_end,
  [4554] = 2,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_unless_end,
  [4561] = 2,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym_if_end,
  [4568] = 2,
    ACTIONS(793), 1,
      anon_sym_LT_SLASH,
    STATE(108), 1,
      sym_script_end_tag,
  [4575] = 2,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_case_end,
  [4582] = 2,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_unless_end,
  [4589] = 2,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_case_end,
  [4596] = 1,
    ACTIONS(815), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [4601] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_interpolation,
  [4608] = 2,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_for_end,
  [4615] = 2,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_for_end,
  [4622] = 2,
    ACTIONS(821), 1,
      aux_sym_event_name_token1,
    STATE(140), 1,
      sym_event_modifier,
  [4629] = 2,
    ACTIONS(801), 1,
      anon_sym_LT_SLASH,
    STATE(109), 1,
      sym_style_end_tag,
  [4636] = 1,
    ACTIONS(823), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4641] = 2,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_for_end,
  [4648] = 2,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    ACTIONS(827), 1,
      sym_raw_opener_rest,
  [4655] = 2,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_if_end,
  [4662] = 2,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(831), 1,
      sym_formatter_argument,
  [4669] = 1,
    ACTIONS(833), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4674] = 2,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      sym_unless_end,
  [4681] = 2,
    ACTIONS(835), 1,
      aux_sym_tag_name_token1,
    STATE(335), 1,
      sym_raw_tag_name,
  [4688] = 2,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_for_end,
  [4695] = 1,
    ACTIONS(791), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4700] = 1,
    ACTIONS(837), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4705] = 2,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_if_end,
  [4712] = 2,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(841), 1,
      anon_sym_if2,
  [4719] = 2,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_if_end,
  [4726] = 2,
    ACTIONS(648), 1,
      anon_sym_SLASH,
    ACTIONS(650), 1,
      anon_sym_COLON,
  [4733] = 2,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    ACTIONS(847), 1,
      sym_raw_attribute_text,
  [4740] = 2,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_if_end,
  [4747] = 2,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      sym_attribute_text,
  [4754] = 2,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 1,
      sym_attribute_text,
  [4761] = 2,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 1,
      sym_attribute_text,
  [4768] = 2,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_case_end,
  [4775] = 2,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      sym_attribute_text,
  [4782] = 2,
    ACTIONS(849), 1,
      aux_sym_event_name_token1,
    STATE(103), 1,
      sym_event_name,
  [4789] = 2,
    ACTIONS(851), 1,
      aux_sym_tag_name_token1,
    STATE(328), 1,
      sym_tag_name,
  [4796] = 2,
    ACTIONS(853), 1,
      anon_sym_SLASH,
    ACTIONS(855), 1,
      anon_sym_COLON,
  [4803] = 2,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      sym_attribute_text,
  [4810] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_interpolation,
  [4817] = 1,
    ACTIONS(857), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [4822] = 2,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      sym_attribute_text,
  [4829] = 2,
    ACTIONS(673), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      sym_expression_content,
  [4836] = 2,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_unless_end,
  [4843] = 2,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      sym_expression_content,
  [4850] = 2,
    ACTIONS(859), 1,
      anon_sym_else,
    ACTIONS(861), 1,
      anon_sym_when,
  [4857] = 2,
    ACTIONS(863), 1,
      aux_sym_event_name_token1,
    STATE(98), 1,
      sym_event_name,
  [4864] = 2,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    ACTIONS(867), 1,
      anon_sym_if2,
  [4871] = 2,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym_interpolation,
  [4878] = 2,
    ACTIONS(869), 1,
      aux_sym_event_name_token1,
    STATE(146), 1,
      sym_event_modifier,
  [4885] = 1,
    ACTIONS(871), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4890] = 1,
    ACTIONS(873), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [4895] = 2,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_interpolation,
  [4902] = 1,
    ACTIONS(875), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [4907] = 2,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      sym_raw_attribute_text,
  [4914] = 2,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(881), 1,
      sym_raw_attribute_text,
  [4921] = 2,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(883), 1,
      sym_raw_attribute_text,
  [4928] = 2,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    ACTIONS(671), 1,
      anon_sym_COLON,
  [4935] = 2,
    ACTIONS(885), 1,
      anon_sym_else,
    ACTIONS(887), 1,
      anon_sym_when,
  [4942] = 2,
    ACTIONS(889), 1,
      anon_sym_SLASH,
    ACTIONS(891), 1,
      anon_sym_COLON,
  [4949] = 2,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_if_end,
  [4956] = 1,
    ACTIONS(893), 1,
      anon_sym_for2,
  [4960] = 1,
    ACTIONS(895), 1,
      sym_formatter_argument,
  [4964] = 1,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [4968] = 1,
    ACTIONS(861), 1,
      anon_sym_when,
  [4972] = 1,
    ACTIONS(853), 1,
      anon_sym_SLASH,
  [4976] = 1,
    ACTIONS(899), 1,
      anon_sym_style,
  [4980] = 1,
    ACTIONS(901), 1,
      anon_sym_COLON,
  [4984] = 1,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [4988] = 1,
    ACTIONS(905), 1,
      anon_sym_GT,
  [4992] = 1,
    ACTIONS(907), 1,
      anon_sym_SLASH,
  [4996] = 1,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
  [5000] = 1,
    ACTIONS(909), 1,
      anon_sym_script,
  [5004] = 1,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
  [5008] = 1,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
  [5012] = 1,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
  [5016] = 1,
    ACTIONS(915), 1,
      anon_sym_GT,
  [5020] = 1,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
  [5024] = 1,
    ACTIONS(919), 1,
      anon_sym_unless2,
  [5028] = 1,
    ACTIONS(921), 1,
      sym_directive_expression,
  [5032] = 1,
    ACTIONS(923), 1,
      anon_sym_GT,
  [5036] = 1,
    ACTIONS(859), 1,
      anon_sym_else,
  [5040] = 1,
    ACTIONS(217), 1,
      anon_sym_GT,
  [5044] = 1,
    ACTIONS(925), 1,
      sym_expression_content,
  [5048] = 1,
    ACTIONS(927), 1,
      anon_sym_for2,
  [5052] = 1,
    ACTIONS(766), 1,
      anon_sym_SLASH,
  [5056] = 1,
    ACTIONS(929), 1,
      anon_sym_GT,
  [5060] = 1,
    ACTIONS(931), 1,
      anon_sym_GT,
  [5064] = 1,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
  [5068] = 1,
    ACTIONS(935), 1,
      anon_sym_COLON,
  [5072] = 1,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
  [5076] = 1,
    ACTIONS(939), 1,
      anon_sym_raw2,
  [5080] = 1,
    ACTIONS(941), 1,
      anon_sym_puzzle_DASHskeleton,
  [5084] = 1,
    ACTIONS(943), 1,
      sym_directive_expression,
  [5088] = 1,
    ACTIONS(945), 1,
      anon_sym_case2,
  [5092] = 1,
    ACTIONS(947), 1,
      anon_sym_if2,
  [5096] = 1,
    ACTIONS(949), 1,
      sym_directive_expression,
  [5100] = 1,
    ACTIONS(951), 1,
      ts_builtin_sym_end,
  [5104] = 1,
    ACTIONS(953), 1,
      anon_sym_else,
  [5108] = 1,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
  [5112] = 1,
    ACTIONS(957), 1,
      sym_formatter_name,
  [5116] = 1,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
  [5120] = 1,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [5124] = 1,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
  [5128] = 1,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [5132] = 1,
    ACTIONS(967), 1,
      anon_sym_LBRACE,
  [5136] = 1,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
  [5140] = 1,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
  [5144] = 1,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
  [5148] = 1,
    ACTIONS(973), 1,
      anon_sym_GT,
  [5152] = 1,
    ACTIONS(975), 1,
      anon_sym_GT,
  [5156] = 1,
    ACTIONS(623), 1,
      anon_sym_SLASH,
  [5160] = 1,
    ACTIONS(555), 1,
      anon_sym_GT,
  [5164] = 1,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [5168] = 1,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
  [5172] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [5176] = 1,
    ACTIONS(648), 1,
      anon_sym_SLASH,
  [5180] = 1,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
  [5184] = 1,
    ACTIONS(985), 1,
      sym_directive_expression,
  [5188] = 1,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
  [5192] = 1,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
  [5196] = 1,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
  [5200] = 1,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
  [5204] = 1,
    ACTIONS(993), 1,
      anon_sym_SQUOTE,
  [5208] = 1,
    ACTIONS(841), 1,
      anon_sym_if2,
  [5212] = 1,
    ACTIONS(995), 1,
      anon_sym_puzzle_DASHview,
  [5216] = 1,
    ACTIONS(997), 1,
      anon_sym_GT,
  [5220] = 1,
    ACTIONS(999), 1,
      sym_directive_expression,
  [5224] = 1,
    ACTIONS(1001), 1,
      sym_directive_expression,
  [5228] = 1,
    ACTIONS(1003), 1,
      sym_directive_expression,
  [5232] = 1,
    ACTIONS(1005), 1,
      sym_directive_expression,
  [5236] = 1,
    ACTIONS(1007), 1,
      anon_sym_if2,
  [5240] = 1,
    ACTIONS(1009), 1,
      anon_sym_else,
  [5244] = 1,
    ACTIONS(669), 1,
      anon_sym_SLASH,
  [5248] = 1,
    ACTIONS(1011), 1,
      sym_directive_expression,
  [5252] = 1,
    ACTIONS(1013), 1,
      anon_sym_unless2,
  [5256] = 1,
    ACTIONS(885), 1,
      anon_sym_else,
  [5260] = 1,
    ACTIONS(681), 1,
      anon_sym_SLASH,
  [5264] = 1,
    ACTIONS(1015), 1,
      anon_sym_case2,
  [5268] = 1,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
  [5272] = 1,
    ACTIONS(889), 1,
      anon_sym_SLASH,
  [5276] = 1,
    ACTIONS(1019), 1,
      sym_directive_expression,
  [5280] = 1,
    ACTIONS(696), 1,
      anon_sym_SLASH,
  [5284] = 1,
    ACTIONS(1021), 1,
      sym_directive_expression,
  [5288] = 1,
    ACTIONS(1023), 1,
      sym_expression_content,
  [5292] = 1,
    ACTIONS(1025), 1,
      sym_directive_expression,
  [5296] = 1,
    ACTIONS(887), 1,
      anon_sym_when,
  [5300] = 1,
    ACTIONS(867), 1,
      anon_sym_if2,
  [5304] = 1,
    ACTIONS(1027), 1,
      anon_sym_else,
  [5308] = 1,
    ACTIONS(1029), 1,
      anon_sym_COLON,
  [5312] = 1,
    ACTIONS(1031), 1,
      anon_sym_else,
  [5316] = 1,
    ACTIONS(1033), 1,
      anon_sym_COLON,
  [5320] = 1,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 197,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 372,
  [SMALL_STATE(9)] = 428,
  [SMALL_STATE(10)] = 484,
  [SMALL_STATE(11)] = 537,
  [SMALL_STATE(12)] = 590,
  [SMALL_STATE(13)] = 643,
  [SMALL_STATE(14)] = 696,
  [SMALL_STATE(15)] = 749,
  [SMALL_STATE(16)] = 802,
  [SMALL_STATE(17)] = 852,
  [SMALL_STATE(18)] = 899,
  [SMALL_STATE(19)] = 946,
  [SMALL_STATE(20)] = 993,
  [SMALL_STATE(21)] = 1040,
  [SMALL_STATE(22)] = 1087,
  [SMALL_STATE(23)] = 1134,
  [SMALL_STATE(24)] = 1181,
  [SMALL_STATE(25)] = 1228,
  [SMALL_STATE(26)] = 1275,
  [SMALL_STATE(27)] = 1322,
  [SMALL_STATE(28)] = 1360,
  [SMALL_STATE(29)] = 1404,
  [SMALL_STATE(30)] = 1448,
  [SMALL_STATE(31)] = 1474,
  [SMALL_STATE(32)] = 1500,
  [SMALL_STATE(33)] = 1537,
  [SMALL_STATE(34)] = 1574,
  [SMALL_STATE(35)] = 1611,
  [SMALL_STATE(36)] = 1648,
  [SMALL_STATE(37)] = 1680,
  [SMALL_STATE(38)] = 1711,
  [SMALL_STATE(39)] = 1742,
  [SMALL_STATE(40)] = 1773,
  [SMALL_STATE(41)] = 1804,
  [SMALL_STATE(42)] = 1835,
  [SMALL_STATE(43)] = 1866,
  [SMALL_STATE(44)] = 1897,
  [SMALL_STATE(45)] = 1928,
  [SMALL_STATE(46)] = 1956,
  [SMALL_STATE(47)] = 1984,
  [SMALL_STATE(48)] = 2012,
  [SMALL_STATE(49)] = 2040,
  [SMALL_STATE(50)] = 2068,
  [SMALL_STATE(51)] = 2096,
  [SMALL_STATE(52)] = 2124,
  [SMALL_STATE(53)] = 2152,
  [SMALL_STATE(54)] = 2180,
  [SMALL_STATE(55)] = 2208,
  [SMALL_STATE(56)] = 2232,
  [SMALL_STATE(57)] = 2256,
  [SMALL_STATE(58)] = 2278,
  [SMALL_STATE(59)] = 2302,
  [SMALL_STATE(60)] = 2326,
  [SMALL_STATE(61)] = 2339,
  [SMALL_STATE(62)] = 2352,
  [SMALL_STATE(63)] = 2373,
  [SMALL_STATE(64)] = 2386,
  [SMALL_STATE(65)] = 2407,
  [SMALL_STATE(66)] = 2420,
  [SMALL_STATE(67)] = 2441,
  [SMALL_STATE(68)] = 2454,
  [SMALL_STATE(69)] = 2467,
  [SMALL_STATE(70)] = 2480,
  [SMALL_STATE(71)] = 2493,
  [SMALL_STATE(72)] = 2506,
  [SMALL_STATE(73)] = 2519,
  [SMALL_STATE(74)] = 2532,
  [SMALL_STATE(75)] = 2551,
  [SMALL_STATE(76)] = 2564,
  [SMALL_STATE(77)] = 2583,
  [SMALL_STATE(78)] = 2596,
  [SMALL_STATE(79)] = 2609,
  [SMALL_STATE(80)] = 2622,
  [SMALL_STATE(81)] = 2635,
  [SMALL_STATE(82)] = 2648,
  [SMALL_STATE(83)] = 2661,
  [SMALL_STATE(84)] = 2674,
  [SMALL_STATE(85)] = 2687,
  [SMALL_STATE(86)] = 2700,
  [SMALL_STATE(87)] = 2713,
  [SMALL_STATE(88)] = 2726,
  [SMALL_STATE(89)] = 2739,
  [SMALL_STATE(90)] = 2752,
  [SMALL_STATE(91)] = 2765,
  [SMALL_STATE(92)] = 2778,
  [SMALL_STATE(93)] = 2791,
  [SMALL_STATE(94)] = 2804,
  [SMALL_STATE(95)] = 2817,
  [SMALL_STATE(96)] = 2838,
  [SMALL_STATE(97)] = 2851,
  [SMALL_STATE(98)] = 2864,
  [SMALL_STATE(99)] = 2880,
  [SMALL_STATE(100)] = 2900,
  [SMALL_STATE(101)] = 2912,
  [SMALL_STATE(102)] = 2928,
  [SMALL_STATE(103)] = 2946,
  [SMALL_STATE(104)] = 2962,
  [SMALL_STATE(105)] = 2974,
  [SMALL_STATE(106)] = 2994,
  [SMALL_STATE(107)] = 3006,
  [SMALL_STATE(108)] = 3018,
  [SMALL_STATE(109)] = 3030,
  [SMALL_STATE(110)] = 3042,
  [SMALL_STATE(111)] = 3056,
  [SMALL_STATE(112)] = 3068,
  [SMALL_STATE(113)] = 3088,
  [SMALL_STATE(114)] = 3106,
  [SMALL_STATE(115)] = 3124,
  [SMALL_STATE(116)] = 3136,
  [SMALL_STATE(117)] = 3156,
  [SMALL_STATE(118)] = 3176,
  [SMALL_STATE(119)] = 3194,
  [SMALL_STATE(120)] = 3206,
  [SMALL_STATE(121)] = 3226,
  [SMALL_STATE(122)] = 3238,
  [SMALL_STATE(123)] = 3250,
  [SMALL_STATE(124)] = 3270,
  [SMALL_STATE(125)] = 3282,
  [SMALL_STATE(126)] = 3302,
  [SMALL_STATE(127)] = 3314,
  [SMALL_STATE(128)] = 3326,
  [SMALL_STATE(129)] = 3344,
  [SMALL_STATE(130)] = 3356,
  [SMALL_STATE(131)] = 3368,
  [SMALL_STATE(132)] = 3384,
  [SMALL_STATE(133)] = 3398,
  [SMALL_STATE(134)] = 3410,
  [SMALL_STATE(135)] = 3428,
  [SMALL_STATE(136)] = 3446,
  [SMALL_STATE(137)] = 3464,
  [SMALL_STATE(138)] = 3476,
  [SMALL_STATE(139)] = 3493,
  [SMALL_STATE(140)] = 3502,
  [SMALL_STATE(141)] = 3511,
  [SMALL_STATE(142)] = 3520,
  [SMALL_STATE(143)] = 3539,
  [SMALL_STATE(144)] = 3550,
  [SMALL_STATE(145)] = 3559,
  [SMALL_STATE(146)] = 3568,
  [SMALL_STATE(147)] = 3577,
  [SMALL_STATE(148)] = 3588,
  [SMALL_STATE(149)] = 3605,
  [SMALL_STATE(150)] = 3616,
  [SMALL_STATE(151)] = 3627,
  [SMALL_STATE(152)] = 3638,
  [SMALL_STATE(153)] = 3649,
  [SMALL_STATE(154)] = 3659,
  [SMALL_STATE(155)] = 3673,
  [SMALL_STATE(156)] = 3683,
  [SMALL_STATE(157)] = 3697,
  [SMALL_STATE(158)] = 3707,
  [SMALL_STATE(159)] = 3721,
  [SMALL_STATE(160)] = 3731,
  [SMALL_STATE(161)] = 3741,
  [SMALL_STATE(162)] = 3755,
  [SMALL_STATE(163)] = 3767,
  [SMALL_STATE(164)] = 3777,
  [SMALL_STATE(165)] = 3787,
  [SMALL_STATE(166)] = 3797,
  [SMALL_STATE(167)] = 3811,
  [SMALL_STATE(168)] = 3825,
  [SMALL_STATE(169)] = 3835,
  [SMALL_STATE(170)] = 3845,
  [SMALL_STATE(171)] = 3857,
  [SMALL_STATE(172)] = 3866,
  [SMALL_STATE(173)] = 3879,
  [SMALL_STATE(174)] = 3890,
  [SMALL_STATE(175)] = 3899,
  [SMALL_STATE(176)] = 3906,
  [SMALL_STATE(177)] = 3915,
  [SMALL_STATE(178)] = 3924,
  [SMALL_STATE(179)] = 3937,
  [SMALL_STATE(180)] = 3944,
  [SMALL_STATE(181)] = 3951,
  [SMALL_STATE(182)] = 3962,
  [SMALL_STATE(183)] = 3969,
  [SMALL_STATE(184)] = 3982,
  [SMALL_STATE(185)] = 3995,
  [SMALL_STATE(186)] = 4004,
  [SMALL_STATE(187)] = 4017,
  [SMALL_STATE(188)] = 4026,
  [SMALL_STATE(189)] = 4037,
  [SMALL_STATE(190)] = 4046,
  [SMALL_STATE(191)] = 4059,
  [SMALL_STATE(192)] = 4068,
  [SMALL_STATE(193)] = 4075,
  [SMALL_STATE(194)] = 4082,
  [SMALL_STATE(195)] = 4091,
  [SMALL_STATE(196)] = 4098,
  [SMALL_STATE(197)] = 4109,
  [SMALL_STATE(198)] = 4118,
  [SMALL_STATE(199)] = 4129,
  [SMALL_STATE(200)] = 4140,
  [SMALL_STATE(201)] = 4151,
  [SMALL_STATE(202)] = 4160,
  [SMALL_STATE(203)] = 4169,
  [SMALL_STATE(204)] = 4180,
  [SMALL_STATE(205)] = 4189,
  [SMALL_STATE(206)] = 4198,
  [SMALL_STATE(207)] = 4207,
  [SMALL_STATE(208)] = 4214,
  [SMALL_STATE(209)] = 4221,
  [SMALL_STATE(210)] = 4228,
  [SMALL_STATE(211)] = 4235,
  [SMALL_STATE(212)] = 4242,
  [SMALL_STATE(213)] = 4249,
  [SMALL_STATE(214)] = 4258,
  [SMALL_STATE(215)] = 4265,
  [SMALL_STATE(216)] = 4274,
  [SMALL_STATE(217)] = 4283,
  [SMALL_STATE(218)] = 4292,
  [SMALL_STATE(219)] = 4301,
  [SMALL_STATE(220)] = 4308,
  [SMALL_STATE(221)] = 4315,
  [SMALL_STATE(222)] = 4322,
  [SMALL_STATE(223)] = 4329,
  [SMALL_STATE(224)] = 4338,
  [SMALL_STATE(225)] = 4347,
  [SMALL_STATE(226)] = 4354,
  [SMALL_STATE(227)] = 4361,
  [SMALL_STATE(228)] = 4372,
  [SMALL_STATE(229)] = 4383,
  [SMALL_STATE(230)] = 4394,
  [SMALL_STATE(231)] = 4407,
  [SMALL_STATE(232)] = 4418,
  [SMALL_STATE(233)] = 4429,
  [SMALL_STATE(234)] = 4440,
  [SMALL_STATE(235)] = 4449,
  [SMALL_STATE(236)] = 4455,
  [SMALL_STATE(237)] = 4461,
  [SMALL_STATE(238)] = 4471,
  [SMALL_STATE(239)] = 4477,
  [SMALL_STATE(240)] = 4483,
  [SMALL_STATE(241)] = 4493,
  [SMALL_STATE(242)] = 4499,
  [SMALL_STATE(243)] = 4509,
  [SMALL_STATE(244)] = 4519,
  [SMALL_STATE(245)] = 4525,
  [SMALL_STATE(246)] = 4531,
  [SMALL_STATE(247)] = 4537,
  [SMALL_STATE(248)] = 4547,
  [SMALL_STATE(249)] = 4554,
  [SMALL_STATE(250)] = 4561,
  [SMALL_STATE(251)] = 4568,
  [SMALL_STATE(252)] = 4575,
  [SMALL_STATE(253)] = 4582,
  [SMALL_STATE(254)] = 4589,
  [SMALL_STATE(255)] = 4596,
  [SMALL_STATE(256)] = 4601,
  [SMALL_STATE(257)] = 4608,
  [SMALL_STATE(258)] = 4615,
  [SMALL_STATE(259)] = 4622,
  [SMALL_STATE(260)] = 4629,
  [SMALL_STATE(261)] = 4636,
  [SMALL_STATE(262)] = 4641,
  [SMALL_STATE(263)] = 4648,
  [SMALL_STATE(264)] = 4655,
  [SMALL_STATE(265)] = 4662,
  [SMALL_STATE(266)] = 4669,
  [SMALL_STATE(267)] = 4674,
  [SMALL_STATE(268)] = 4681,
  [SMALL_STATE(269)] = 4688,
  [SMALL_STATE(270)] = 4695,
  [SMALL_STATE(271)] = 4700,
  [SMALL_STATE(272)] = 4705,
  [SMALL_STATE(273)] = 4712,
  [SMALL_STATE(274)] = 4719,
  [SMALL_STATE(275)] = 4726,
  [SMALL_STATE(276)] = 4733,
  [SMALL_STATE(277)] = 4740,
  [SMALL_STATE(278)] = 4747,
  [SMALL_STATE(279)] = 4754,
  [SMALL_STATE(280)] = 4761,
  [SMALL_STATE(281)] = 4768,
  [SMALL_STATE(282)] = 4775,
  [SMALL_STATE(283)] = 4782,
  [SMALL_STATE(284)] = 4789,
  [SMALL_STATE(285)] = 4796,
  [SMALL_STATE(286)] = 4803,
  [SMALL_STATE(287)] = 4810,
  [SMALL_STATE(288)] = 4817,
  [SMALL_STATE(289)] = 4822,
  [SMALL_STATE(290)] = 4829,
  [SMALL_STATE(291)] = 4836,
  [SMALL_STATE(292)] = 4843,
  [SMALL_STATE(293)] = 4850,
  [SMALL_STATE(294)] = 4857,
  [SMALL_STATE(295)] = 4864,
  [SMALL_STATE(296)] = 4871,
  [SMALL_STATE(297)] = 4878,
  [SMALL_STATE(298)] = 4885,
  [SMALL_STATE(299)] = 4890,
  [SMALL_STATE(300)] = 4895,
  [SMALL_STATE(301)] = 4902,
  [SMALL_STATE(302)] = 4907,
  [SMALL_STATE(303)] = 4914,
  [SMALL_STATE(304)] = 4921,
  [SMALL_STATE(305)] = 4928,
  [SMALL_STATE(306)] = 4935,
  [SMALL_STATE(307)] = 4942,
  [SMALL_STATE(308)] = 4949,
  [SMALL_STATE(309)] = 4956,
  [SMALL_STATE(310)] = 4960,
  [SMALL_STATE(311)] = 4964,
  [SMALL_STATE(312)] = 4968,
  [SMALL_STATE(313)] = 4972,
  [SMALL_STATE(314)] = 4976,
  [SMALL_STATE(315)] = 4980,
  [SMALL_STATE(316)] = 4984,
  [SMALL_STATE(317)] = 4988,
  [SMALL_STATE(318)] = 4992,
  [SMALL_STATE(319)] = 4996,
  [SMALL_STATE(320)] = 5000,
  [SMALL_STATE(321)] = 5004,
  [SMALL_STATE(322)] = 5008,
  [SMALL_STATE(323)] = 5012,
  [SMALL_STATE(324)] = 5016,
  [SMALL_STATE(325)] = 5020,
  [SMALL_STATE(326)] = 5024,
  [SMALL_STATE(327)] = 5028,
  [SMALL_STATE(328)] = 5032,
  [SMALL_STATE(329)] = 5036,
  [SMALL_STATE(330)] = 5040,
  [SMALL_STATE(331)] = 5044,
  [SMALL_STATE(332)] = 5048,
  [SMALL_STATE(333)] = 5052,
  [SMALL_STATE(334)] = 5056,
  [SMALL_STATE(335)] = 5060,
  [SMALL_STATE(336)] = 5064,
  [SMALL_STATE(337)] = 5068,
  [SMALL_STATE(338)] = 5072,
  [SMALL_STATE(339)] = 5076,
  [SMALL_STATE(340)] = 5080,
  [SMALL_STATE(341)] = 5084,
  [SMALL_STATE(342)] = 5088,
  [SMALL_STATE(343)] = 5092,
  [SMALL_STATE(344)] = 5096,
  [SMALL_STATE(345)] = 5100,
  [SMALL_STATE(346)] = 5104,
  [SMALL_STATE(347)] = 5108,
  [SMALL_STATE(348)] = 5112,
  [SMALL_STATE(349)] = 5116,
  [SMALL_STATE(350)] = 5120,
  [SMALL_STATE(351)] = 5124,
  [SMALL_STATE(352)] = 5128,
  [SMALL_STATE(353)] = 5132,
  [SMALL_STATE(354)] = 5136,
  [SMALL_STATE(355)] = 5140,
  [SMALL_STATE(356)] = 5144,
  [SMALL_STATE(357)] = 5148,
  [SMALL_STATE(358)] = 5152,
  [SMALL_STATE(359)] = 5156,
  [SMALL_STATE(360)] = 5160,
  [SMALL_STATE(361)] = 5164,
  [SMALL_STATE(362)] = 5168,
  [SMALL_STATE(363)] = 5172,
  [SMALL_STATE(364)] = 5176,
  [SMALL_STATE(365)] = 5180,
  [SMALL_STATE(366)] = 5184,
  [SMALL_STATE(367)] = 5188,
  [SMALL_STATE(368)] = 5192,
  [SMALL_STATE(369)] = 5196,
  [SMALL_STATE(370)] = 5200,
  [SMALL_STATE(371)] = 5204,
  [SMALL_STATE(372)] = 5208,
  [SMALL_STATE(373)] = 5212,
  [SMALL_STATE(374)] = 5216,
  [SMALL_STATE(375)] = 5220,
  [SMALL_STATE(376)] = 5224,
  [SMALL_STATE(377)] = 5228,
  [SMALL_STATE(378)] = 5232,
  [SMALL_STATE(379)] = 5236,
  [SMALL_STATE(380)] = 5240,
  [SMALL_STATE(381)] = 5244,
  [SMALL_STATE(382)] = 5248,
  [SMALL_STATE(383)] = 5252,
  [SMALL_STATE(384)] = 5256,
  [SMALL_STATE(385)] = 5260,
  [SMALL_STATE(386)] = 5264,
  [SMALL_STATE(387)] = 5268,
  [SMALL_STATE(388)] = 5272,
  [SMALL_STATE(389)] = 5276,
  [SMALL_STATE(390)] = 5280,
  [SMALL_STATE(391)] = 5284,
  [SMALL_STATE(392)] = 5288,
  [SMALL_STATE(393)] = 5292,
  [SMALL_STATE(394)] = 5296,
  [SMALL_STATE(395)] = 5300,
  [SMALL_STATE(396)] = 5304,
  [SMALL_STATE(397)] = 5308,
  [SMALL_STATE(398)] = 5312,
  [SMALL_STATE(399)] = 5316,
  [SMALL_STATE(400)] = 5320,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 1, 0, 0), SHIFT(292),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 1, 0, 0), SHIFT(292),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 1, 0, 0), SHIFT(292),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 1, 0, 0), SHIFT(292),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 1, 0, 0), SHIFT(292),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 2, 0, 0), SHIFT(292),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 2, 0, 0), SHIFT(292),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 2, 0, 0), SHIFT(292),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 2, 0, 0), SHIFT(292),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 2, 0, 0), SHIFT(292),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 1, 0, 0), SHIFT(290),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 1, 0, 0), SHIFT(290),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 1, 0, 0), SHIFT(290),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 1, 0, 0), SHIFT(290),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 2, 0, 0), SHIFT(290),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 1, 0, 0), SHIFT(290),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 2, 0, 0), SHIFT(290),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 2, 0, 0), SHIFT(290),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 2, 0, 0), SHIFT(290),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 2, 0, 0), SHIFT(290),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 3, 0, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 3, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 4, 0, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 4, 0, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 5, 0, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 5, 0, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_end, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_end, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_end, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_end, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_end, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_end, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_end, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_end, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_end, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_end, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 4, 0, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 4, 0, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 2, 0, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 3, 0, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(259),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_end_tag, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_end_tag, 3, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_end_tag, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_end_tag, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(297),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_modifier, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 11),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_name, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_start, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_start, 4, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_start, 5, 0, 6),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_start, 5, 0, 6),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_start, 6, 0, 15),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_start, 6, 0, 15),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_start, 5, 0, 6),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_start, 5, 0, 6),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_start, 5, 0, 13),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_start, 5, 0, 13),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_start, 5, 0, 8),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_start, 5, 0, 8),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 1, 0, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 3, 0, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 3, 0, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_self_closing_element, 3, 0, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_self_closing_element, 3, 0, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_element, 3, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_element, 3, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 4, 0, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 4, 0, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_self_closing_element, 4, 0, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_self_closing_element, 4, 0, 2),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_end_tag, 3, 0, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_end_tag, 3, 0, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 5, 0, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 5, 0, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_element, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_element, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_case_statement, 3, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_attribute, 1, 0, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start, 4, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_start_tag, 3, 0, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start_tag, 3, 0, 2),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_start_tag, 4, 0, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start_tag, 4, 0, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 4, 0, 10),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 5, 0, 14),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_unless_statement, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 2, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_case_statement, 2, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 2, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_for_statement, 2, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 3, 0, 5),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 3, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 3, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 3, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_unless_statement, 3, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 3, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_for_statement, 3, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 4, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 4, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter, 2, 0, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 4, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_case_statement, 4, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 4, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_for_statement, 4, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 5, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 5, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start, 5, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_tag_name, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 4, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_unless_statement, 4, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_quoted_attribute_value, 2, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_quoted_attribute_value, 3, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_attribute, 3, 0, 5),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formatter_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formatter_arguments_repeat1, 2, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_tag_name, 1, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 3, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter, 3, 0, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 4, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 2, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [951] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_start, 5, 0, 7),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
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
    [ts_external_token_script_content] = true,
  },
  [7] = {
    [ts_external_token_style_content] = true,
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
