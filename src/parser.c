#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 435
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  sym_attribute_name = 30,
  aux_sym_event_name_token1 = 31,
  sym_unquoted_attribute_value = 32,
  anon_sym_DQUOTE = 33,
  anon_sym_SQUOTE = 34,
  sym_attribute_text = 35,
  anon_sym_PIPE = 36,
  sym_formatter_name = 37,
  anon_sym_COMMA = 38,
  anon_sym_LPAREN = 39,
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
  sym_event_handler = 96,
  sym_event_name = 97,
  sym_event_modifier = 98,
  sym_quoted_attribute_value = 99,
  sym__attribute_node = 100,
  sym_interpolation = 101,
  sym_formatter = 102,
  sym__invalid_chain = 103,
  sym_invalid_formatter = 104,
  sym_formatter_arguments = 105,
  sym_if_statement = 106,
  sym_if_start = 107,
  sym_else_if_block = 108,
  sym_else_if_start = 109,
  sym_else_block = 110,
  sym_else_start = 111,
  sym_if_end = 112,
  sym_unless_statement = 113,
  sym_unless_start = 114,
  sym_unless_end = 115,
  sym_case_statement = 116,
  sym_case_start = 117,
  sym_when_block = 118,
  sym_when_start = 119,
  sym_case_else_block = 120,
  sym_case_end = 121,
  sym_for_statement = 122,
  sym_for_start = 123,
  sym_for_else_block = 124,
  sym_for_end = 125,
  sym_svg_directive = 126,
  sym_raw_block = 127,
  sym_raw_start = 128,
  sym_raw_end = 129,
  sym__raw_node = 130,
  sym_raw_element = 131,
  sym_raw_start_tag = 132,
  sym_raw_end_tag = 133,
  sym_raw_self_closing_element = 134,
  sym_raw_void_element = 135,
  sym_raw_tag_name = 136,
  sym_raw_attribute = 137,
  sym_raw_quoted_attribute_value = 138,
  sym_attribute_if_statement = 139,
  sym_attribute_else_if_block = 140,
  sym_attribute_else_block = 141,
  sym_attribute_unless_statement = 142,
  sym_attribute_case_statement = 143,
  sym_attribute_when_block = 144,
  sym_attribute_case_else_block = 145,
  sym_attribute_for_statement = 146,
  sym_attribute_for_else_block = 147,
  aux_sym_document_repeat1 = 148,
  aux_sym_view_element_repeat1 = 149,
  aux_sym_view_start_tag_repeat1 = 150,
  aux_sym_event_attribute_repeat1 = 151,
  aux_sym_quoted_attribute_value_repeat1 = 152,
  aux_sym_interpolation_repeat1 = 153,
  aux_sym_formatter_arguments_repeat1 = 154,
  aux_sym_if_statement_repeat1 = 155,
  aux_sym_case_statement_repeat1 = 156,
  aux_sym_when_start_repeat1 = 157,
  aux_sym_raw_block_repeat1 = 158,
  aux_sym_raw_start_tag_repeat1 = 159,
  aux_sym_attribute_if_statement_repeat1 = 160,
  aux_sym_attribute_case_statement_repeat1 = 161,
  alias_sym_invalid_formatter_name = 162,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_event_name_token1] = "event_name_token1",
  [sym_unquoted_attribute_value] = "unquoted_attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_attribute_text] = "attribute_text",
  [anon_sym_PIPE] = "|",
  [sym_formatter_name] = "formatter_name",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
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
  [sym_event_handler] = "event_handler",
  [sym_event_name] = "event_name",
  [sym_event_modifier] = "event_modifier",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__attribute_node] = "_attribute_node",
  [sym_interpolation] = "interpolation",
  [sym_formatter] = "formatter",
  [sym__invalid_chain] = "_invalid_chain",
  [sym_invalid_formatter] = "invalid_formatter",
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
  [aux_sym_when_start_repeat1] = "when_start_repeat1",
  [aux_sym_raw_block_repeat1] = "raw_block_repeat1",
  [aux_sym_raw_start_tag_repeat1] = "raw_start_tag_repeat1",
  [aux_sym_attribute_if_statement_repeat1] = "attribute_if_statement_repeat1",
  [aux_sym_attribute_case_statement_repeat1] = "attribute_case_statement_repeat1",
  [alias_sym_invalid_formatter_name] = "invalid_formatter_name",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_event_name_token1] = aux_sym_event_name_token1,
  [sym_unquoted_attribute_value] = sym_unquoted_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_attribute_text] = sym_attribute_text,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_formatter_name] = sym_formatter_name,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
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
  [sym_event_handler] = sym_event_handler,
  [sym_event_name] = sym_event_name,
  [sym_event_modifier] = sym_event_modifier,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__attribute_node] = sym__attribute_node,
  [sym_interpolation] = sym_interpolation,
  [sym_formatter] = sym_formatter,
  [sym__invalid_chain] = sym__invalid_chain,
  [sym_invalid_formatter] = sym_invalid_formatter,
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
  [aux_sym_when_start_repeat1] = aux_sym_when_start_repeat1,
  [aux_sym_raw_block_repeat1] = aux_sym_raw_block_repeat1,
  [aux_sym_raw_start_tag_repeat1] = aux_sym_raw_start_tag_repeat1,
  [aux_sym_attribute_if_statement_repeat1] = aux_sym_attribute_if_statement_repeat1,
  [aux_sym_attribute_case_statement_repeat1] = aux_sym_attribute_case_statement_repeat1,
  [alias_sym_invalid_formatter_name] = alias_sym_invalid_formatter_name,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_formatter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [sym_event_handler] = {
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
  [sym__invalid_chain] = {
    .visible = false,
    .named = true,
  },
  [sym_invalid_formatter] = {
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
  [aux_sym_when_start_repeat1] = {
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
  [alias_sym_invalid_formatter_name] = {
    .visible = true,
    .named = true,
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
  [13] = {.index = 1, .length = 1},
  [14] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 3},
  [16] = {.index = 20, .length = 1},
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
  [13] = {
    [1] = alias_sym_invalid_formatter_name,
  },
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
  [41] = 38,
  [42] = 39,
  [43] = 37,
  [44] = 40,
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
  [112] = 104,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 123,
  [142] = 142,
  [143] = 132,
  [144] = 135,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 156,
  [159] = 154,
  [160] = 155,
  [161] = 157,
  [162] = 162,
  [163] = 150,
  [164] = 162,
  [165] = 151,
  [166] = 153,
  [167] = 66,
  [168] = 168,
  [169] = 169,
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
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 173,
  [187] = 187,
  [188] = 60,
  [189] = 64,
  [190] = 65,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 192,
  [196] = 89,
  [197] = 79,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 194,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 223,
  [235] = 89,
  [236] = 236,
  [237] = 237,
  [238] = 79,
  [239] = 208,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 206,
  [245] = 243,
  [246] = 246,
  [247] = 212,
  [248] = 221,
  [249] = 224,
  [250] = 89,
  [251] = 79,
  [252] = 231,
  [253] = 206,
  [254] = 218,
  [255] = 232,
  [256] = 246,
  [257] = 228,
  [258] = 229,
  [259] = 259,
  [260] = 209,
  [261] = 222,
  [262] = 231,
  [263] = 206,
  [264] = 231,
  [265] = 225,
  [266] = 266,
  [267] = 237,
  [268] = 268,
  [269] = 269,
  [270] = 138,
  [271] = 127,
  [272] = 134,
  [273] = 121,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 148,
  [278] = 117,
  [279] = 118,
  [280] = 120,
  [281] = 266,
  [282] = 282,
  [283] = 116,
  [284] = 133,
  [285] = 275,
  [286] = 140,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 287,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
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
  [322] = 297,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 295,
  [330] = 316,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 303,
  [336] = 302,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 314,
  [341] = 321,
  [342] = 320,
  [343] = 339,
  [344] = 344,
  [345] = 310,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 348,
  [382] = 349,
  [383] = 360,
  [384] = 369,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 347,
  [392] = 392,
  [393] = 393,
  [394] = 379,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 386,
  [402] = 402,
  [403] = 358,
  [404] = 359,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 406,
  [410] = 357,
  [411] = 373,
  [412] = 396,
  [413] = 408,
  [414] = 355,
  [415] = 415,
  [416] = 366,
  [417] = 371,
  [418] = 372,
  [419] = 419,
  [420] = 420,
  [421] = 402,
  [422] = 422,
  [423] = 354,
  [424] = 362,
  [425] = 425,
  [426] = 388,
  [427] = 395,
  [428] = 420,
  [429] = 374,
  [430] = 425,
  [431] = 365,
  [432] = 390,
  [433] = 415,
  [434] = 419,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(124);
      ADVANCE_MAP(
        '"', 240,
        '#', 250,
        '\'', 241,
        '(', 248,
        ')', 249,
        ',', 247,
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
        '{', 234,
        '|', 245,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead == '{') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(243);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(241);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
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
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
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
      if (lookahead == '}') ADVANCE(235);
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
      if (lookahead == '}') ADVANCE(235);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 120:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(243);
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
        '"', 240,
        '#', 250,
        '\'', 241,
        '(', 248,
        ')', 249,
        ',', 247,
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
        '{', 234,
        '|', 245,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      END_STATE();
    case 123:
      if (eof) ADVANCE(124);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '{') ADVANCE(234);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_event_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead == '\\') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_formatter_name);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN);
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
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
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
  [93] = {.lex_state = 123, .external_lex_state = 2},
  [94] = {.lex_state = 123, .external_lex_state = 2},
  [95] = {.lex_state = 123, .external_lex_state = 2},
  [96] = {.lex_state = 123, .external_lex_state = 2},
  [97] = {.lex_state = 123, .external_lex_state = 2},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 123, .external_lex_state = 2},
  [101] = {.lex_state = 123, .external_lex_state = 2},
  [102] = {.lex_state = 123, .external_lex_state = 2},
  [103] = {.lex_state = 123, .external_lex_state = 2},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 123, .external_lex_state = 2},
  [106] = {.lex_state = 123, .external_lex_state = 2},
  [107] = {.lex_state = 123, .external_lex_state = 2},
  [108] = {.lex_state = 123, .external_lex_state = 2},
  [109] = {.lex_state = 123, .external_lex_state = 2},
  [110] = {.lex_state = 123, .external_lex_state = 2},
  [111] = {.lex_state = 123, .external_lex_state = 2},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 123, .external_lex_state = 2},
  [116] = {.lex_state = 123, .external_lex_state = 2},
  [117] = {.lex_state = 123, .external_lex_state = 2},
  [118] = {.lex_state = 123, .external_lex_state = 2},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 123, .external_lex_state = 2},
  [121] = {.lex_state = 123, .external_lex_state = 2},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 123, .external_lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 123, .external_lex_state = 2},
  [134] = {.lex_state = 123, .external_lex_state = 2},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 123, .external_lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 123, .external_lex_state = 2},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 123, .external_lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 33},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 2, .external_lex_state = 4},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0, .external_lex_state = 3},
  [199] = {.lex_state = 0, .external_lex_state = 3},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 2, .external_lex_state = 4},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 0, .external_lex_state = 5},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0, .external_lex_state = 5},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0, .external_lex_state = 5},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 0, .external_lex_state = 5},
  [241] = {.lex_state = 0, .external_lex_state = 3},
  [242] = {.lex_state = 0, .external_lex_state = 3},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 0, .external_lex_state = 6},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0, .external_lex_state = 7},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0, .external_lex_state = 5},
  [297] = {.lex_state = 119},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0, .external_lex_state = 7},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 117},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 115},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0, .external_lex_state = 8},
  [314] = {.lex_state = 119},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 35},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 119},
  [323] = {.lex_state = 0, .external_lex_state = 6},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0, .external_lex_state = 6},
  [326] = {.lex_state = 117},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0, .external_lex_state = 7},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 119},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 35},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 5},
  [347] = {.lex_state = 35},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0, .external_lex_state = 8},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0, .external_lex_state = 5},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0, .external_lex_state = 5},
  [363] = {.lex_state = 0, .external_lex_state = 5},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 35},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 35},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0, .external_lex_state = 5},
  [374] = {.lex_state = 35},
  [375] = {.lex_state = 118},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 118},
  [388] = {.lex_state = 0, .external_lex_state = 5},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 35},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 35},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0, .external_lex_state = 5},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0, .external_lex_state = 5},
  [410] = {.lex_state = 0, .external_lex_state = 5},
  [411] = {.lex_state = 0, .external_lex_state = 5},
  [412] = {.lex_state = 35},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 35},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 35},
  [420] = {.lex_state = 0, .external_lex_state = 9},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0, .external_lex_state = 9},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0, .external_lex_state = 5},
  [425] = {.lex_state = 0, .external_lex_state = 5},
  [426] = {.lex_state = 0, .external_lex_state = 5},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0, .external_lex_state = 9},
  [429] = {.lex_state = 35},
  [430] = {.lex_state = 0, .external_lex_state = 5},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 35},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
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
    [sym_document] = STATE(351),
    [sym__top_level] = STATE(2),
    [sym__node] = STATE(2),
    [sym_view_element] = STATE(2),
    [sym_view_start_tag] = STATE(11),
    [sym_skeleton_element] = STATE(2),
    [sym_skeleton_start_tag] = STATE(10),
    [sym_script_element] = STATE(2),
    [sym_script_start_tag] = STATE(276),
    [sym_style_element] = STATE(2),
    [sym_style_start_tag] = STATE(294),
    [sym_element] = STATE(77),
    [sym_start_tag] = STATE(13),
    [sym_self_closing_element] = STATE(77),
    [sym_void_element] = STATE(77),
    [sym_interpolation] = STATE(77),
    [sym_if_statement] = STATE(77),
    [sym_if_start] = STATE(4),
    [sym_unless_statement] = STATE(77),
    [sym_unless_start] = STATE(7),
    [sym_case_statement] = STATE(77),
    [sym_case_start] = STATE(137),
    [sym_for_statement] = STATE(77),
    [sym_for_start] = STATE(6),
    [sym_svg_directive] = STATE(77),
    [sym_raw_block] = STATE(77),
    [sym_raw_start] = STATE(55),
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(10), 1,
      sym_skeleton_start_tag,
    STATE(11), 1,
      sym_view_start_tag,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
      sym_case_start,
    STATE(276), 1,
      sym_script_start_tag,
    STATE(294), 1,
      sym_style_start_tag,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(10), 1,
      sym_skeleton_start_tag,
    STATE(11), 1,
      sym_view_start_tag,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
      sym_case_start,
    STATE(276), 1,
      sym_script_start_tag,
    STATE(294), 1,
      sym_style_start_tag,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_else_start,
    STATE(18), 1,
      sym_else_if_start,
    STATE(55), 1,
      sym_raw_start,
    STATE(81), 1,
      sym_if_end,
    STATE(137), 1,
      sym_case_start,
    STATE(312), 1,
      sym_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(5), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(142), 2,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_else_start,
    STATE(18), 1,
      sym_else_if_start,
    STATE(55), 1,
      sym_raw_start,
    STATE(82), 1,
      sym_if_end,
    STATE(137), 1,
      sym_case_start,
    STATE(328), 1,
      sym_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(129), 2,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_else_start,
    STATE(55), 1,
      sym_raw_start,
    STATE(75), 1,
      sym_for_end,
    STATE(137), 1,
      sym_case_start,
    STATE(301), 1,
      sym_for_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(9), 2,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_else_start,
    STATE(55), 1,
      sym_raw_start,
    STATE(71), 1,
      sym_unless_end,
    STATE(137), 1,
      sym_case_start,
    STATE(331), 1,
      sym_else_block,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(8), 2,
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
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_else_start,
    STATE(55), 1,
      sym_raw_start,
    STATE(73), 1,
      sym_unless_end,
    STATE(137), 1,
      sym_case_start,
    STATE(308), 1,
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
  [449] = 15,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_else_start,
    STATE(55), 1,
      sym_raw_start,
    STATE(72), 1,
      sym_for_end,
    STATE(137), 1,
      sym_case_start,
    STATE(319), 1,
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
  [508] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(109), 1,
      sym_skeleton_end_tag,
    STATE(137), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(12), 2,
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
    ACTIONS(39), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(100), 1,
      sym_view_end_tag,
    STATE(137), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(14), 2,
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
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(95), 1,
      sym_skeleton_end_tag,
    STATE(137), 1,
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
  [676] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(69), 1,
      sym_end_tag,
    STATE(137), 1,
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
  [732] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(102), 1,
      sym_view_end_tag,
    STATE(137), 1,
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
  [788] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(70), 1,
      sym_end_tag,
    STATE(137), 1,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
  [947] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
      sym_case_start,
    ACTIONS(9), 2,
      sym_escaped_brace,
      sym_text,
    STATE(21), 2,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
  [1047] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
  [1097] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
  [1147] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
  [1247] = 12,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_if_start,
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
    STATE(6), 1,
      sym_for_start,
    STATE(7), 1,
      sym_unless_start,
    STATE(13), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_raw_start,
    STATE(137), 1,
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
    STATE(98), 1,
      sym_tag_name,
    STATE(99), 1,
      sym_void_tag_name,
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
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(139), 1,
      sym_case_start,
    STATE(169), 1,
      sym_if_end,
    STATE(338), 1,
      sym_attribute_else_block,
    ACTIONS(101), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(124), 2,
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
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(139), 1,
      sym_case_start,
    STATE(174), 1,
      sym_if_end,
    STATE(306), 1,
      sym_attribute_else_block,
    ACTIONS(103), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(136), 2,
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
  [1525] = 10,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(46), 1,
      sym_else_start,
    STATE(139), 1,
      sym_case_start,
    STATE(176), 1,
      sym_unless_end,
    STATE(315), 1,
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
  [1563] = 4,
    ACTIONS(107), 1,
      aux_sym_tag_name_token1,
    STATE(175), 1,
      sym_void_tag_name,
    STATE(177), 1,
      sym_raw_tag_name,
    ACTIONS(109), 14,
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
  [1589] = 4,
    ACTIONS(95), 1,
      aux_sym_tag_name_token1,
    STATE(98), 1,
      sym_tag_name,
    STATE(99), 1,
      sym_void_tag_name,
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
  [1615] = 10,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(46), 1,
      sym_else_start,
    STATE(139), 1,
      sym_case_start,
    STATE(170), 1,
      sym_unless_end,
    STATE(318), 1,
      sym_attribute_else_block,
    ACTIONS(111), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(30), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1653] = 10,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(50), 1,
      sym_else_start,
    STATE(139), 1,
      sym_case_start,
    STATE(172), 1,
      sym_for_end,
    STATE(344), 1,
      sym_attribute_for_else_block,
    ACTIONS(115), 2,
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
  [1691] = 10,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(50), 1,
      sym_else_start,
    STATE(139), 1,
      sym_case_start,
    STATE(179), 1,
      sym_for_end,
    STATE(333), 1,
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
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(120), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(122), 2,
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
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(129), 2,
      sym_attribute_text,
      sym_escaped_brace,
    STATE(41), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1794] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(133), 2,
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
  [1858] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
  [1922] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(146), 2,
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
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(151), 2,
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
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(156), 2,
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
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(161), 2,
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
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
      sym_case_start,
    ACTIONS(169), 2,
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
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    STATE(33), 1,
      sym_unless_start,
    STATE(34), 1,
      sym_for_start,
    STATE(139), 1,
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
    STATE(57), 1,
      sym_raw_start_tag,
    STATE(68), 1,
      sym_raw_end,
    ACTIONS(187), 2,
      sym_comment,
      sym_raw_text,
    STATE(59), 5,
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
    STATE(57), 1,
      sym_raw_start_tag,
    STATE(201), 1,
      sym_raw_end_tag,
    ACTIONS(193), 2,
      sym_comment,
      sym_raw_text,
    STATE(58), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2356] = 6,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    STATE(57), 1,
      sym_raw_start_tag,
    STATE(180), 1,
      sym_raw_end_tag,
    ACTIONS(195), 2,
      sym_comment,
      sym_raw_text,
    STATE(56), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2380] = 5,
    ACTIONS(197), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym_raw_start_tag,
    ACTIONS(200), 2,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(202), 2,
      sym_comment,
      sym_raw_text,
    STATE(58), 5,
      sym__raw_node,
      sym_raw_element,
      sym_raw_self_closing_element,
      sym_raw_void_element,
      aux_sym_raw_block_repeat1,
  [2402] = 6,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_raw_start_tag,
    STATE(74), 1,
      sym_raw_end,
    ACTIONS(193), 2,
      sym_comment,
      sym_raw_text,
    STATE(58), 5,
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
  [2887] = 2,
    ACTIONS(337), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(339), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2900] = 2,
    ACTIONS(341), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(343), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [2913] = 2,
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
  [2926] = 2,
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
  [2939] = 2,
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
  [2952] = 6,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_SLASH_GT,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    STATE(113), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2973] = 6,
    ACTIONS(365), 1,
      anon_sym_GT,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    ACTIONS(369), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      sym_attribute_name,
    STATE(114), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(234), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2994] = 2,
    ACTIONS(373), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(375), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3007] = 2,
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
  [3020] = 2,
    ACTIONS(381), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(383), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3033] = 2,
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
  [3046] = 5,
    ACTIONS(391), 1,
      anon_sym_AT,
    ACTIONS(394), 1,
      sym_attribute_name,
    ACTIONS(389), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(104), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3065] = 2,
    ACTIONS(399), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(397), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3078] = 2,
    ACTIONS(403), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(401), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3091] = 2,
    ACTIONS(407), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(405), 5,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3104] = 2,
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
  [3117] = 2,
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
  [3130] = 2,
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
  [3143] = 2,
    ACTIONS(421), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(423), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3156] = 5,
    ACTIONS(425), 1,
      anon_sym_AT,
    ACTIONS(428), 1,
      sym_attribute_name,
    ACTIONS(389), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    STATE(112), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(234), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3175] = 6,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(431), 1,
      anon_sym_GT,
    ACTIONS(433), 1,
      anon_sym_SLASH_GT,
    STATE(104), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3196] = 6,
    ACTIONS(369), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      sym_attribute_name,
    ACTIONS(435), 1,
      anon_sym_GT,
    ACTIONS(437), 1,
      anon_sym_SLASH,
    STATE(112), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(234), 2,
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
  [3230] = 2,
    ACTIONS(445), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(443), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3242] = 2,
    ACTIONS(449), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(447), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3254] = 2,
    ACTIONS(453), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(451), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3266] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(455), 1,
      anon_sym_GT,
    STATE(104), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3284] = 2,
    ACTIONS(459), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(457), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3296] = 2,
    ACTIONS(463), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(461), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3308] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(465), 1,
      anon_sym_GT,
    STATE(104), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3326] = 4,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(471), 1,
      anon_sym_COLON,
    STATE(132), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(467), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3342] = 6,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(174), 1,
      sym_if_end,
    STATE(306), 1,
      sym_attribute_else_block,
    STATE(226), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3362] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(475), 1,
      anon_sym_GT,
    STATE(130), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3380] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(477), 1,
      anon_sym_GT,
    STATE(131), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3398] = 2,
    ACTIONS(481), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(479), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3410] = 6,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(48), 1,
      sym_else_start,
    STATE(178), 1,
      sym_case_end,
    STATE(324), 1,
      sym_attribute_case_else_block,
    STATE(205), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [3430] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_else_start,
    STATE(18), 1,
      sym_else_if_start,
    STATE(84), 1,
      sym_if_end,
    STATE(309), 1,
      sym_else_block,
    STATE(207), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [3450] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(487), 1,
      anon_sym_GT,
    STATE(104), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3468] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(489), 1,
      anon_sym_GT,
    STATE(104), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3486] = 4,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(493), 1,
      anon_sym_EQ,
    STATE(135), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(491), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3502] = 2,
    ACTIONS(497), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(495), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3514] = 2,
    ACTIONS(501), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(499), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3526] = 3,
    ACTIONS(505), 1,
      anon_sym_COLON,
    STATE(135), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(503), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      sym_attribute_name,
  [3540] = 6,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(46), 1,
      sym_else_start,
    STATE(181), 1,
      sym_if_end,
    STATE(304), 1,
      sym_attribute_else_block,
    STATE(226), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3560] = 6,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_else_start,
    STATE(20), 1,
      sym_when_start,
    STATE(61), 1,
      sym_case_end,
    STATE(327), 1,
      sym_case_else_block,
    STATE(147), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [3580] = 2,
    ACTIONS(512), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(510), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3592] = 6,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(48), 1,
      sym_else_start,
    STATE(171), 1,
      sym_case_end,
    STATE(298), 1,
      sym_attribute_case_else_block,
    STATE(128), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [3612] = 2,
    ACTIONS(516), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(514), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3624] = 4,
    ACTIONS(518), 1,
      anon_sym_EQ,
    ACTIONS(520), 1,
      anon_sym_COLON,
    STATE(143), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(467), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3640] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_else_start,
    STATE(18), 1,
      sym_else_if_start,
    STATE(82), 1,
      sym_if_end,
    STATE(328), 1,
      sym_else_block,
    STATE(207), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [3660] = 4,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(522), 1,
      anon_sym_EQ,
    STATE(144), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(491), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3676] = 3,
    ACTIONS(524), 1,
      anon_sym_COLON,
    STATE(144), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(503), 5,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      sym_attribute_name,
  [3690] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(527), 1,
      anon_sym_GT,
    STATE(119), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3708] = 5,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(529), 1,
      anon_sym_GT,
    STATE(122), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(223), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3726] = 6,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_else_start,
    STATE(20), 1,
      sym_when_start,
    STATE(88), 1,
      sym_case_end,
    STATE(299), 1,
      sym_case_else_block,
    STATE(220), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [3746] = 2,
    ACTIONS(533), 3,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(531), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_escaped_brace,
      sym_text,
  [3758] = 4,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(537), 1,
      anon_sym_PIPE,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(149), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3773] = 4,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(151), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3788] = 4,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(149), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3803] = 6,
    ACTIONS(551), 1,
      anon_sym_if,
    ACTIONS(553), 1,
      anon_sym_unless,
    ACTIONS(555), 1,
      anon_sym_case,
    ACTIONS(557), 1,
      anon_sym_for,
    ACTIONS(559), 1,
      anon_sym_svg,
    ACTIONS(561), 1,
      anon_sym_raw,
  [3822] = 4,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(156), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3837] = 1,
    ACTIONS(565), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3846] = 1,
    ACTIONS(567), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3855] = 4,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(149), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3870] = 1,
    ACTIONS(571), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3879] = 4,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(149), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3894] = 1,
    ACTIONS(565), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3903] = 1,
    ACTIONS(567), 6,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3912] = 1,
    ACTIONS(571), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_COLON,
      sym_attribute_name,
  [3921] = 5,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
    ACTIONS(577), 1,
      sym_unquoted_attribute_value,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(265), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3938] = 4,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    STATE(165), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3953] = 5,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
    ACTIONS(587), 1,
      sym_unquoted_attribute_value,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(225), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3970] = 4,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(149), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [3985] = 4,
    ACTIONS(545), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    STATE(158), 3,
      sym__invalid_chain,
      sym_invalid_formatter,
      aux_sym_when_start_repeat1,
  [4000] = 1,
    ACTIONS(231), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4008] = 2,
    ACTIONS(597), 1,
      anon_sym_LT,
    ACTIONS(599), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4018] = 1,
    ACTIONS(601), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4026] = 1,
    ACTIONS(603), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4034] = 1,
    ACTIONS(605), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4042] = 1,
    ACTIONS(607), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4050] = 2,
    ACTIONS(611), 1,
      anon_sym_EQ,
    ACTIONS(609), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4060] = 1,
    ACTIONS(613), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4068] = 4,
    ACTIONS(615), 1,
      anon_sym_GT,
    ACTIONS(617), 1,
      anon_sym_SLASH,
    ACTIONS(619), 1,
      sym_raw_attribute_name,
    STATE(187), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4082] = 1,
    ACTIONS(621), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4090] = 4,
    ACTIONS(623), 1,
      anon_sym_GT,
    ACTIONS(625), 1,
      anon_sym_SLASH_GT,
    ACTIONS(627), 1,
      sym_raw_attribute_name,
    STATE(200), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4104] = 1,
    ACTIONS(629), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4112] = 1,
    ACTIONS(631), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4120] = 2,
    ACTIONS(633), 1,
      anon_sym_LT,
    ACTIONS(635), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4130] = 1,
    ACTIONS(637), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4138] = 1,
    ACTIONS(639), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4146] = 2,
    ACTIONS(641), 1,
      anon_sym_LT,
    ACTIONS(643), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4156] = 1,
    ACTIONS(645), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4164] = 1,
    ACTIONS(647), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4172] = 2,
    ACTIONS(649), 1,
      anon_sym_EQ,
    ACTIONS(609), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4182] = 4,
    ACTIONS(619), 1,
      sym_raw_attribute_name,
    ACTIONS(651), 1,
      anon_sym_GT,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(195), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4196] = 1,
    ACTIONS(207), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4204] = 1,
    ACTIONS(223), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4212] = 1,
    ACTIONS(227), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4220] = 2,
    ACTIONS(655), 1,
      anon_sym_LT,
    ACTIONS(657), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4230] = 3,
    ACTIONS(661), 1,
      sym_raw_attribute_name,
    ACTIONS(659), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(192), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4242] = 2,
    ACTIONS(664), 1,
      anon_sym_LT,
    ACTIONS(666), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4252] = 4,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      sym_raw_quoted_attribute_value,
    ACTIONS(672), 2,
      sym_raw_brace_value,
      sym_raw_unquoted_attribute_value,
  [4266] = 3,
    ACTIONS(674), 1,
      sym_raw_attribute_name,
    ACTIONS(659), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    STATE(195), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4278] = 1,
    ACTIONS(323), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4286] = 1,
    ACTIONS(283), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4294] = 2,
    ACTIONS(677), 1,
      anon_sym_LT,
    ACTIONS(679), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4304] = 2,
    ACTIONS(681), 1,
      anon_sym_LT,
    ACTIONS(683), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4314] = 4,
    ACTIONS(627), 1,
      sym_raw_attribute_name,
    ACTIONS(685), 1,
      anon_sym_GT,
    ACTIONS(687), 1,
      anon_sym_SLASH_GT,
    STATE(192), 2,
      sym_raw_attribute,
      aux_sym_raw_start_tag_repeat1,
  [4328] = 2,
    ACTIONS(689), 1,
      anon_sym_LT,
    ACTIONS(691), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [4338] = 3,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    STATE(274), 1,
      sym_formatter_arguments,
    ACTIONS(693), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [4350] = 4,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
    STATE(281), 1,
      sym_raw_quoted_attribute_value,
    ACTIONS(701), 2,
      sym_raw_brace_value,
      sym_raw_unquoted_attribute_value,
  [4364] = 1,
    ACTIONS(703), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_attribute_text,
      sym_escaped_brace,
  [4372] = 3,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_when_start,
    STATE(205), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [4383] = 3,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4394] = 3,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_else_if_start,
    STATE(207), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [4405] = 2,
    ACTIONS(717), 1,
      anon_sym_EQ,
    ACTIONS(715), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4414] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(222), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4425] = 3,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym_formatter_arguments,
    ACTIONS(721), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4436] = 2,
    ACTIONS(723), 1,
      anon_sym_LT,
    ACTIONS(725), 3,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4445] = 1,
    ACTIONS(727), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4452] = 4,
    ACTIONS(555), 1,
      anon_sym_case,
    ACTIONS(729), 1,
      anon_sym_if,
    ACTIONS(731), 1,
      anon_sym_unless,
    ACTIONS(733), 1,
      anon_sym_for,
  [4465] = 4,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    ACTIONS(737), 1,
      anon_sym_COLON,
    ACTIONS(739), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      sym_expression_content,
  [4478] = 4,
    ACTIONS(739), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      sym_expression_content,
    ACTIONS(743), 1,
      anon_sym_SLASH,
    ACTIONS(745), 1,
      anon_sym_COLON,
  [4491] = 3,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 1,
      anon_sym_PIPE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4502] = 1,
    ACTIONS(752), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4509] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(228), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4520] = 4,
    ACTIONS(739), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      sym_expression_content,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(756), 1,
      anon_sym_SLASH,
  [4533] = 3,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_when_start,
    STATE(220), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [4544] = 1,
    ACTIONS(761), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4551] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4562] = 1,
    ACTIONS(765), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4569] = 1,
    ACTIONS(767), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4576] = 1,
    ACTIONS(769), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4583] = 3,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_else_if_start,
    STATE(226), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [4594] = 4,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(776), 1,
      anon_sym_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym_expression_content,
  [4607] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4618] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4629] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4640] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(244), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4651] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(229), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4662] = 1,
    ACTIONS(792), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT,
      anon_sym_LBRACE,
  [4669] = 1,
    ACTIONS(765), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4676] = 1,
    ACTIONS(321), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4683] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(230), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4694] = 1,
    ACTIONS(796), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4701] = 1,
    ACTIONS(281), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4708] = 2,
    ACTIONS(798), 1,
      anon_sym_EQ,
    ACTIONS(715), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [4717] = 4,
    ACTIONS(776), 1,
      anon_sym_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym_expression_content,
    ACTIONS(800), 1,
      anon_sym_SLASH,
  [4730] = 1,
    ACTIONS(802), 4,
      sym_comment,
      sym_raw_text,
      anon_sym_LT,
      anon_sym_LBRACE,
  [4737] = 2,
    ACTIONS(804), 1,
      anon_sym_LT,
    ACTIONS(806), 3,
      sym_comment,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4746] = 1,
    ACTIONS(808), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4753] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4764] = 1,
    ACTIONS(808), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4771] = 1,
    ACTIONS(812), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4778] = 1,
    ACTIONS(727), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4785] = 1,
    ACTIONS(761), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4792] = 1,
    ACTIONS(767), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4799] = 1,
    ACTIONS(321), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4806] = 1,
    ACTIONS(281), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4813] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(253), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4824] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4835] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(257), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4846] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(258), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4857] = 1,
    ACTIONS(812), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [4864] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4875] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4886] = 4,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym_expression_content,
    ACTIONS(826), 1,
      anon_sym_SLASH,
    ACTIONS(828), 1,
      anon_sym_COLON,
  [4899] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(261), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4910] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4921] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    STATE(263), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4932] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    STATE(216), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4943] = 3,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    STATE(206), 2,
      sym_formatter,
      aux_sym_interpolation_repeat1,
  [4954] = 1,
    ACTIONS(769), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [4961] = 1,
    ACTIONS(840), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4967] = 1,
    ACTIONS(796), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [4973] = 1,
    ACTIONS(842), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [4979] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_formatter_arguments_repeat1,
  [4989] = 1,
    ACTIONS(510), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [4995] = 1,
    ACTIONS(479), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5001] = 1,
    ACTIONS(499), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5007] = 1,
    ACTIONS(461), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5013] = 1,
    ACTIONS(848), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [5019] = 1,
    ACTIONS(850), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [5025] = 3,
    ACTIONS(852), 1,
      anon_sym_LT_SLASH,
    ACTIONS(854), 1,
      sym_script_content,
    STATE(93), 1,
      sym_script_end_tag,
  [5035] = 1,
    ACTIONS(531), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5041] = 1,
    ACTIONS(447), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5047] = 1,
    ACTIONS(451), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5053] = 1,
    ACTIONS(457), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5059] = 1,
    ACTIONS(840), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [5065] = 1,
    ACTIONS(856), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [5071] = 1,
    ACTIONS(443), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5077] = 1,
    ACTIONS(495), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5083] = 1,
    ACTIONS(850), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [5089] = 1,
    ACTIONS(514), 3,
      anon_sym_LBRACE,
      sym_attribute_text,
      sym_escaped_brace,
  [5095] = 1,
    ACTIONS(858), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_raw_attribute_name,
  [5101] = 1,
    ACTIONS(860), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [5107] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_formatter_arguments_repeat1,
  [5117] = 1,
    ACTIONS(864), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [5123] = 3,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_formatter_arguments_repeat1,
  [5133] = 1,
    ACTIONS(858), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_raw_attribute_name,
  [5139] = 1,
    ACTIONS(871), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [5145] = 3,
    ACTIONS(873), 1,
      anon_sym_LT_SLASH,
    ACTIONS(875), 1,
      sym_style_content,
    STATE(94), 1,
      sym_style_end_tag,
  [5155] = 2,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [5162] = 2,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym_expression_content,
  [5169] = 2,
    ACTIONS(877), 1,
      aux_sym_event_name_token1,
    STATE(155), 1,
      sym_event_modifier,
  [5176] = 2,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_case_end,
  [5183] = 2,
    ACTIONS(881), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_case_end,
  [5190] = 1,
    ACTIONS(883), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [5195] = 2,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_for_end,
  [5202] = 2,
    ACTIONS(887), 1,
      anon_sym_SQUOTE,
    ACTIONS(889), 1,
      sym_raw_attribute_text,
  [5209] = 2,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    ACTIONS(891), 1,
      sym_raw_attribute_text,
  [5216] = 2,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_if_end,
  [5223] = 2,
    ACTIONS(852), 1,
      anon_sym_LT_SLASH,
    STATE(96), 1,
      sym_script_end_tag,
  [5230] = 2,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_if_end,
  [5237] = 2,
    ACTIONS(895), 1,
      aux_sym_tag_name_token1,
    STATE(392), 1,
      sym_tag_name,
  [5244] = 2,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_unless_end,
  [5251] = 2,
    ACTIONS(899), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_if_end,
  [5258] = 2,
    ACTIONS(901), 1,
      anon_sym_SLASH,
    ACTIONS(903), 1,
      anon_sym_COLON,
  [5265] = 2,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    ACTIONS(907), 1,
      sym_raw_opener_rest,
  [5272] = 2,
    ACTIONS(899), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_if_end,
  [5279] = 2,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      sym_formatter_argument,
  [5286] = 2,
    ACTIONS(913), 1,
      aux_sym_event_name_token1,
    STATE(141), 1,
      sym_event_name,
  [5293] = 2,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_unless_end,
  [5300] = 2,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_event_handler,
  [5307] = 1,
    ACTIONS(919), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [5312] = 2,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_unless_end,
  [5319] = 2,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_for_end,
  [5326] = 2,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    ACTIONS(923), 1,
      anon_sym_if2,
  [5333] = 2,
    ACTIONS(925), 1,
      anon_sym_LBRACE,
    STATE(243), 1,
      sym_event_handler,
  [5340] = 2,
    ACTIONS(927), 1,
      aux_sym_event_name_token1,
    STATE(160), 1,
      sym_event_modifier,
  [5347] = 1,
    ACTIONS(929), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [5352] = 2,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_case_end,
  [5359] = 1,
    ACTIONS(931), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [5364] = 2,
    ACTIONS(933), 1,
      aux_sym_tag_name_token1,
    STATE(405), 1,
      sym_raw_tag_name,
  [5371] = 2,
    ACTIONS(881), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_case_end,
  [5378] = 2,
    ACTIONS(899), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_if_end,
  [5385] = 2,
    ACTIONS(826), 1,
      anon_sym_SLASH,
    ACTIONS(828), 1,
      anon_sym_COLON,
  [5392] = 2,
    ACTIONS(925), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_event_handler,
  [5399] = 2,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_unless_end,
  [5406] = 1,
    ACTIONS(935), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [5411] = 2,
    ACTIONS(937), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_for_end,
  [5418] = 2,
    ACTIONS(873), 1,
      anon_sym_LT_SLASH,
    STATE(97), 1,
      sym_style_end_tag,
  [5425] = 2,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(941), 1,
      sym_raw_attribute_text,
  [5432] = 2,
    ACTIONS(939), 1,
      anon_sym_SQUOTE,
    ACTIONS(943), 1,
      sym_raw_attribute_text,
  [5439] = 1,
    ACTIONS(869), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5444] = 2,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_if_end,
  [5451] = 2,
    ACTIONS(945), 1,
      anon_sym_else,
    ACTIONS(947), 1,
      anon_sym_when,
  [5458] = 2,
    ACTIONS(949), 1,
      aux_sym_event_name_token1,
    STATE(123), 1,
      sym_event_name,
  [5465] = 2,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
    STATE(245), 1,
      sym_event_handler,
  [5472] = 2,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    ACTIONS(953), 1,
      anon_sym_if2,
  [5479] = 2,
    ACTIONS(955), 1,
      anon_sym_else,
    ACTIONS(957), 1,
      anon_sym_when,
  [5486] = 2,
    ACTIONS(937), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_for_end,
  [5493] = 2,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(961), 1,
      anon_sym_COLON,
  [5500] = 2,
    ACTIONS(739), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      sym_expression_content,
  [5507] = 1,
    ACTIONS(963), 1,
      anon_sym_for2,
  [5511] = 1,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [5515] = 1,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
  [5519] = 1,
    ACTIONS(967), 1,
      sym_formatter_argument,
  [5523] = 1,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
  [5527] = 1,
    ACTIONS(971), 1,
      anon_sym_GT,
  [5531] = 1,
    ACTIONS(973), 1,
      anon_sym_style,
  [5535] = 1,
    ACTIONS(774), 1,
      anon_sym_SLASH,
  [5539] = 1,
    ACTIONS(826), 1,
      anon_sym_SLASH,
  [5543] = 1,
    ACTIONS(975), 1,
      anon_sym_SLASH,
  [5547] = 1,
    ACTIONS(977), 1,
      sym_expression_content,
  [5551] = 1,
    ACTIONS(979), 1,
      anon_sym_DQUOTE,
  [5555] = 1,
    ACTIONS(979), 1,
      anon_sym_SQUOTE,
  [5559] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [5563] = 1,
    ACTIONS(983), 1,
      anon_sym_puzzle_DASHview,
  [5567] = 1,
    ACTIONS(985), 1,
      sym_expression_content,
  [5571] = 1,
    ACTIONS(987), 1,
      sym_expression_content,
  [5575] = 1,
    ACTIONS(989), 1,
      anon_sym_GT,
  [5579] = 1,
    ACTIONS(991), 1,
      anon_sym_COLON,
  [5583] = 1,
    ACTIONS(993), 1,
      anon_sym_unless2,
  [5587] = 1,
    ACTIONS(995), 1,
      anon_sym_LBRACE,
  [5591] = 1,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
  [5595] = 1,
    ACTIONS(999), 1,
      anon_sym_RBRACE,
  [5599] = 1,
    ACTIONS(1001), 1,
      anon_sym_raw2,
  [5603] = 1,
    ACTIONS(945), 1,
      anon_sym_else,
  [5607] = 1,
    ACTIONS(800), 1,
      anon_sym_SLASH,
  [5611] = 1,
    ACTIONS(1003), 1,
      sym_expression_content,
  [5615] = 1,
    ACTIONS(953), 1,
      anon_sym_if2,
  [5619] = 1,
    ACTIONS(1005), 1,
      sym_formatter_name,
  [5623] = 1,
    ACTIONS(1007), 1,
      sym_expression_content,
  [5627] = 1,
    ACTIONS(1009), 1,
      anon_sym_script,
  [5631] = 1,
    ACTIONS(651), 1,
      anon_sym_GT,
  [5635] = 1,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
  [5639] = 1,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
  [5643] = 1,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
  [5647] = 1,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
  [5651] = 1,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
  [5655] = 1,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [5659] = 1,
    ACTIONS(1021), 1,
      anon_sym_GT,
  [5663] = 1,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
  [5667] = 1,
    ACTIONS(1025), 1,
      sym_formatter_name,
  [5671] = 1,
    ACTIONS(1027), 1,
      sym_expression_content,
  [5675] = 1,
    ACTIONS(1029), 1,
      anon_sym_GT,
  [5679] = 1,
    ACTIONS(1031), 1,
      anon_sym_else,
  [5683] = 1,
    ACTIONS(1033), 1,
      anon_sym_for2,
  [5687] = 1,
    ACTIONS(1035), 1,
      anon_sym_GT,
  [5691] = 1,
    ACTIONS(1037), 1,
      anon_sym_GT,
  [5695] = 1,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
  [5699] = 1,
    ACTIONS(947), 1,
      anon_sym_when,
  [5703] = 1,
    ACTIONS(1041), 1,
      anon_sym_if2,
  [5707] = 1,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
  [5711] = 1,
    ACTIONS(1045), 1,
      anon_sym_puzzle_DASHskeleton,
  [5715] = 1,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
  [5719] = 1,
    ACTIONS(1049), 1,
      anon_sym_GT,
  [5723] = 1,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
  [5727] = 1,
    ACTIONS(901), 1,
      anon_sym_SLASH,
  [5731] = 1,
    ACTIONS(1053), 1,
      anon_sym_DQUOTE,
  [5735] = 1,
    ACTIONS(1053), 1,
      anon_sym_SQUOTE,
  [5739] = 1,
    ACTIONS(1055), 1,
      anon_sym_GT,
  [5743] = 1,
    ACTIONS(1057), 1,
      sym_expression_content,
  [5747] = 1,
    ACTIONS(435), 1,
      anon_sym_GT,
  [5751] = 1,
    ACTIONS(1059), 1,
      anon_sym_else,
  [5755] = 1,
    ACTIONS(1061), 1,
      sym_expression_content,
  [5759] = 1,
    ACTIONS(1063), 1,
      sym_expression_content,
  [5763] = 1,
    ACTIONS(1065), 1,
      sym_expression_content,
  [5767] = 1,
    ACTIONS(1067), 1,
      anon_sym_if2,
  [5771] = 1,
    ACTIONS(1069), 1,
      anon_sym_else,
  [5775] = 1,
    ACTIONS(735), 1,
      anon_sym_SLASH,
  [5779] = 1,
    ACTIONS(1071), 1,
      anon_sym_COLON,
  [5783] = 1,
    ACTIONS(1073), 1,
      anon_sym_unless2,
  [5787] = 1,
    ACTIONS(955), 1,
      anon_sym_else,
  [5791] = 1,
    ACTIONS(743), 1,
      anon_sym_SLASH,
  [5795] = 1,
    ACTIONS(1075), 1,
      anon_sym_case2,
  [5799] = 1,
    ACTIONS(1077), 1,
      sym_directive_expression,
  [5803] = 1,
    ACTIONS(959), 1,
      anon_sym_SLASH,
  [5807] = 1,
    ACTIONS(1079), 1,
      sym_directive_expression,
  [5811] = 1,
    ACTIONS(756), 1,
      anon_sym_SLASH,
  [5815] = 1,
    ACTIONS(1081), 1,
      sym_expression_content,
  [5819] = 1,
    ACTIONS(1083), 1,
      sym_expression_content,
  [5823] = 1,
    ACTIONS(1085), 1,
      sym_expression_content,
  [5827] = 1,
    ACTIONS(957), 1,
      anon_sym_when,
  [5831] = 1,
    ACTIONS(1087), 1,
      sym_directive_expression,
  [5835] = 1,
    ACTIONS(923), 1,
      anon_sym_if2,
  [5839] = 1,
    ACTIONS(1089), 1,
      sym_expression_content,
  [5843] = 1,
    ACTIONS(1091), 1,
      anon_sym_COLON,
  [5847] = 1,
    ACTIONS(1093), 1,
      anon_sym_else,
  [5851] = 1,
    ACTIONS(1095), 1,
      anon_sym_COLON,
  [5855] = 1,
    ACTIONS(1097), 1,
      anon_sym_case2,
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
  [SMALL_STATE(31)] = 1563,
  [SMALL_STATE(32)] = 1589,
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
  [SMALL_STATE(58)] = 2380,
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
  [SMALL_STATE(94)] = 2900,
  [SMALL_STATE(95)] = 2913,
  [SMALL_STATE(96)] = 2926,
  [SMALL_STATE(97)] = 2939,
  [SMALL_STATE(98)] = 2952,
  [SMALL_STATE(99)] = 2973,
  [SMALL_STATE(100)] = 2994,
  [SMALL_STATE(101)] = 3007,
  [SMALL_STATE(102)] = 3020,
  [SMALL_STATE(103)] = 3033,
  [SMALL_STATE(104)] = 3046,
  [SMALL_STATE(105)] = 3065,
  [SMALL_STATE(106)] = 3078,
  [SMALL_STATE(107)] = 3091,
  [SMALL_STATE(108)] = 3104,
  [SMALL_STATE(109)] = 3117,
  [SMALL_STATE(110)] = 3130,
  [SMALL_STATE(111)] = 3143,
  [SMALL_STATE(112)] = 3156,
  [SMALL_STATE(113)] = 3175,
  [SMALL_STATE(114)] = 3196,
  [SMALL_STATE(115)] = 3217,
  [SMALL_STATE(116)] = 3230,
  [SMALL_STATE(117)] = 3242,
  [SMALL_STATE(118)] = 3254,
  [SMALL_STATE(119)] = 3266,
  [SMALL_STATE(120)] = 3284,
  [SMALL_STATE(121)] = 3296,
  [SMALL_STATE(122)] = 3308,
  [SMALL_STATE(123)] = 3326,
  [SMALL_STATE(124)] = 3342,
  [SMALL_STATE(125)] = 3362,
  [SMALL_STATE(126)] = 3380,
  [SMALL_STATE(127)] = 3398,
  [SMALL_STATE(128)] = 3410,
  [SMALL_STATE(129)] = 3430,
  [SMALL_STATE(130)] = 3450,
  [SMALL_STATE(131)] = 3468,
  [SMALL_STATE(132)] = 3486,
  [SMALL_STATE(133)] = 3502,
  [SMALL_STATE(134)] = 3514,
  [SMALL_STATE(135)] = 3526,
  [SMALL_STATE(136)] = 3540,
  [SMALL_STATE(137)] = 3560,
  [SMALL_STATE(138)] = 3580,
  [SMALL_STATE(139)] = 3592,
  [SMALL_STATE(140)] = 3612,
  [SMALL_STATE(141)] = 3624,
  [SMALL_STATE(142)] = 3640,
  [SMALL_STATE(143)] = 3660,
  [SMALL_STATE(144)] = 3676,
  [SMALL_STATE(145)] = 3690,
  [SMALL_STATE(146)] = 3708,
  [SMALL_STATE(147)] = 3726,
  [SMALL_STATE(148)] = 3746,
  [SMALL_STATE(149)] = 3758,
  [SMALL_STATE(150)] = 3773,
  [SMALL_STATE(151)] = 3788,
  [SMALL_STATE(152)] = 3803,
  [SMALL_STATE(153)] = 3822,
  [SMALL_STATE(154)] = 3837,
  [SMALL_STATE(155)] = 3846,
  [SMALL_STATE(156)] = 3855,
  [SMALL_STATE(157)] = 3870,
  [SMALL_STATE(158)] = 3879,
  [SMALL_STATE(159)] = 3894,
  [SMALL_STATE(160)] = 3903,
  [SMALL_STATE(161)] = 3912,
  [SMALL_STATE(162)] = 3921,
  [SMALL_STATE(163)] = 3938,
  [SMALL_STATE(164)] = 3953,
  [SMALL_STATE(165)] = 3970,
  [SMALL_STATE(166)] = 3985,
  [SMALL_STATE(167)] = 4000,
  [SMALL_STATE(168)] = 4008,
  [SMALL_STATE(169)] = 4018,
  [SMALL_STATE(170)] = 4026,
  [SMALL_STATE(171)] = 4034,
  [SMALL_STATE(172)] = 4042,
  [SMALL_STATE(173)] = 4050,
  [SMALL_STATE(174)] = 4060,
  [SMALL_STATE(175)] = 4068,
  [SMALL_STATE(176)] = 4082,
  [SMALL_STATE(177)] = 4090,
  [SMALL_STATE(178)] = 4104,
  [SMALL_STATE(179)] = 4112,
  [SMALL_STATE(180)] = 4120,
  [SMALL_STATE(181)] = 4130,
  [SMALL_STATE(182)] = 4138,
  [SMALL_STATE(183)] = 4146,
  [SMALL_STATE(184)] = 4156,
  [SMALL_STATE(185)] = 4164,
  [SMALL_STATE(186)] = 4172,
  [SMALL_STATE(187)] = 4182,
  [SMALL_STATE(188)] = 4196,
  [SMALL_STATE(189)] = 4204,
  [SMALL_STATE(190)] = 4212,
  [SMALL_STATE(191)] = 4220,
  [SMALL_STATE(192)] = 4230,
  [SMALL_STATE(193)] = 4242,
  [SMALL_STATE(194)] = 4252,
  [SMALL_STATE(195)] = 4266,
  [SMALL_STATE(196)] = 4278,
  [SMALL_STATE(197)] = 4286,
  [SMALL_STATE(198)] = 4294,
  [SMALL_STATE(199)] = 4304,
  [SMALL_STATE(200)] = 4314,
  [SMALL_STATE(201)] = 4328,
  [SMALL_STATE(202)] = 4338,
  [SMALL_STATE(203)] = 4350,
  [SMALL_STATE(204)] = 4364,
  [SMALL_STATE(205)] = 4372,
  [SMALL_STATE(206)] = 4383,
  [SMALL_STATE(207)] = 4394,
  [SMALL_STATE(208)] = 4405,
  [SMALL_STATE(209)] = 4414,
  [SMALL_STATE(210)] = 4425,
  [SMALL_STATE(211)] = 4436,
  [SMALL_STATE(212)] = 4445,
  [SMALL_STATE(213)] = 4452,
  [SMALL_STATE(214)] = 4465,
  [SMALL_STATE(215)] = 4478,
  [SMALL_STATE(216)] = 4491,
  [SMALL_STATE(217)] = 4502,
  [SMALL_STATE(218)] = 4509,
  [SMALL_STATE(219)] = 4520,
  [SMALL_STATE(220)] = 4533,
  [SMALL_STATE(221)] = 4544,
  [SMALL_STATE(222)] = 4551,
  [SMALL_STATE(223)] = 4562,
  [SMALL_STATE(224)] = 4569,
  [SMALL_STATE(225)] = 4576,
  [SMALL_STATE(226)] = 4583,
  [SMALL_STATE(227)] = 4594,
  [SMALL_STATE(228)] = 4607,
  [SMALL_STATE(229)] = 4618,
  [SMALL_STATE(230)] = 4629,
  [SMALL_STATE(231)] = 4640,
  [SMALL_STATE(232)] = 4651,
  [SMALL_STATE(233)] = 4662,
  [SMALL_STATE(234)] = 4669,
  [SMALL_STATE(235)] = 4676,
  [SMALL_STATE(236)] = 4683,
  [SMALL_STATE(237)] = 4694,
  [SMALL_STATE(238)] = 4701,
  [SMALL_STATE(239)] = 4708,
  [SMALL_STATE(240)] = 4717,
  [SMALL_STATE(241)] = 4730,
  [SMALL_STATE(242)] = 4737,
  [SMALL_STATE(243)] = 4746,
  [SMALL_STATE(244)] = 4753,
  [SMALL_STATE(245)] = 4764,
  [SMALL_STATE(246)] = 4771,
  [SMALL_STATE(247)] = 4778,
  [SMALL_STATE(248)] = 4785,
  [SMALL_STATE(249)] = 4792,
  [SMALL_STATE(250)] = 4799,
  [SMALL_STATE(251)] = 4806,
  [SMALL_STATE(252)] = 4813,
  [SMALL_STATE(253)] = 4824,
  [SMALL_STATE(254)] = 4835,
  [SMALL_STATE(255)] = 4846,
  [SMALL_STATE(256)] = 4857,
  [SMALL_STATE(257)] = 4864,
  [SMALL_STATE(258)] = 4875,
  [SMALL_STATE(259)] = 4886,
  [SMALL_STATE(260)] = 4899,
  [SMALL_STATE(261)] = 4910,
  [SMALL_STATE(262)] = 4921,
  [SMALL_STATE(263)] = 4932,
  [SMALL_STATE(264)] = 4943,
  [SMALL_STATE(265)] = 4954,
  [SMALL_STATE(266)] = 4961,
  [SMALL_STATE(267)] = 4967,
  [SMALL_STATE(268)] = 4973,
  [SMALL_STATE(269)] = 4979,
  [SMALL_STATE(270)] = 4989,
  [SMALL_STATE(271)] = 4995,
  [SMALL_STATE(272)] = 5001,
  [SMALL_STATE(273)] = 5007,
  [SMALL_STATE(274)] = 5013,
  [SMALL_STATE(275)] = 5019,
  [SMALL_STATE(276)] = 5025,
  [SMALL_STATE(277)] = 5035,
  [SMALL_STATE(278)] = 5041,
  [SMALL_STATE(279)] = 5047,
  [SMALL_STATE(280)] = 5053,
  [SMALL_STATE(281)] = 5059,
  [SMALL_STATE(282)] = 5065,
  [SMALL_STATE(283)] = 5071,
  [SMALL_STATE(284)] = 5077,
  [SMALL_STATE(285)] = 5083,
  [SMALL_STATE(286)] = 5089,
  [SMALL_STATE(287)] = 5095,
  [SMALL_STATE(288)] = 5101,
  [SMALL_STATE(289)] = 5107,
  [SMALL_STATE(290)] = 5117,
  [SMALL_STATE(291)] = 5123,
  [SMALL_STATE(292)] = 5133,
  [SMALL_STATE(293)] = 5139,
  [SMALL_STATE(294)] = 5145,
  [SMALL_STATE(295)] = 5155,
  [SMALL_STATE(296)] = 5162,
  [SMALL_STATE(297)] = 5169,
  [SMALL_STATE(298)] = 5176,
  [SMALL_STATE(299)] = 5183,
  [SMALL_STATE(300)] = 5190,
  [SMALL_STATE(301)] = 5195,
  [SMALL_STATE(302)] = 5202,
  [SMALL_STATE(303)] = 5209,
  [SMALL_STATE(304)] = 5216,
  [SMALL_STATE(305)] = 5223,
  [SMALL_STATE(306)] = 5230,
  [SMALL_STATE(307)] = 5237,
  [SMALL_STATE(308)] = 5244,
  [SMALL_STATE(309)] = 5251,
  [SMALL_STATE(310)] = 5258,
  [SMALL_STATE(311)] = 5265,
  [SMALL_STATE(312)] = 5272,
  [SMALL_STATE(313)] = 5279,
  [SMALL_STATE(314)] = 5286,
  [SMALL_STATE(315)] = 5293,
  [SMALL_STATE(316)] = 5300,
  [SMALL_STATE(317)] = 5307,
  [SMALL_STATE(318)] = 5312,
  [SMALL_STATE(319)] = 5319,
  [SMALL_STATE(320)] = 5326,
  [SMALL_STATE(321)] = 5333,
  [SMALL_STATE(322)] = 5340,
  [SMALL_STATE(323)] = 5347,
  [SMALL_STATE(324)] = 5352,
  [SMALL_STATE(325)] = 5359,
  [SMALL_STATE(326)] = 5364,
  [SMALL_STATE(327)] = 5371,
  [SMALL_STATE(328)] = 5378,
  [SMALL_STATE(329)] = 5385,
  [SMALL_STATE(330)] = 5392,
  [SMALL_STATE(331)] = 5399,
  [SMALL_STATE(332)] = 5406,
  [SMALL_STATE(333)] = 5411,
  [SMALL_STATE(334)] = 5418,
  [SMALL_STATE(335)] = 5425,
  [SMALL_STATE(336)] = 5432,
  [SMALL_STATE(337)] = 5439,
  [SMALL_STATE(338)] = 5444,
  [SMALL_STATE(339)] = 5451,
  [SMALL_STATE(340)] = 5458,
  [SMALL_STATE(341)] = 5465,
  [SMALL_STATE(342)] = 5472,
  [SMALL_STATE(343)] = 5479,
  [SMALL_STATE(344)] = 5486,
  [SMALL_STATE(345)] = 5493,
  [SMALL_STATE(346)] = 5500,
  [SMALL_STATE(347)] = 5507,
  [SMALL_STATE(348)] = 5511,
  [SMALL_STATE(349)] = 5515,
  [SMALL_STATE(350)] = 5519,
  [SMALL_STATE(351)] = 5523,
  [SMALL_STATE(352)] = 5527,
  [SMALL_STATE(353)] = 5531,
  [SMALL_STATE(354)] = 5535,
  [SMALL_STATE(355)] = 5539,
  [SMALL_STATE(356)] = 5543,
  [SMALL_STATE(357)] = 5547,
  [SMALL_STATE(358)] = 5551,
  [SMALL_STATE(359)] = 5555,
  [SMALL_STATE(360)] = 5559,
  [SMALL_STATE(361)] = 5563,
  [SMALL_STATE(362)] = 5567,
  [SMALL_STATE(363)] = 5571,
  [SMALL_STATE(364)] = 5575,
  [SMALL_STATE(365)] = 5579,
  [SMALL_STATE(366)] = 5583,
  [SMALL_STATE(367)] = 5587,
  [SMALL_STATE(368)] = 5591,
  [SMALL_STATE(369)] = 5595,
  [SMALL_STATE(370)] = 5599,
  [SMALL_STATE(371)] = 5603,
  [SMALL_STATE(372)] = 5607,
  [SMALL_STATE(373)] = 5611,
  [SMALL_STATE(374)] = 5615,
  [SMALL_STATE(375)] = 5619,
  [SMALL_STATE(376)] = 5623,
  [SMALL_STATE(377)] = 5627,
  [SMALL_STATE(378)] = 5631,
  [SMALL_STATE(379)] = 5635,
  [SMALL_STATE(380)] = 5639,
  [SMALL_STATE(381)] = 5643,
  [SMALL_STATE(382)] = 5647,
  [SMALL_STATE(383)] = 5651,
  [SMALL_STATE(384)] = 5655,
  [SMALL_STATE(385)] = 5659,
  [SMALL_STATE(386)] = 5663,
  [SMALL_STATE(387)] = 5667,
  [SMALL_STATE(388)] = 5671,
  [SMALL_STATE(389)] = 5675,
  [SMALL_STATE(390)] = 5679,
  [SMALL_STATE(391)] = 5683,
  [SMALL_STATE(392)] = 5687,
  [SMALL_STATE(393)] = 5691,
  [SMALL_STATE(394)] = 5695,
  [SMALL_STATE(395)] = 5699,
  [SMALL_STATE(396)] = 5703,
  [SMALL_STATE(397)] = 5707,
  [SMALL_STATE(398)] = 5711,
  [SMALL_STATE(399)] = 5715,
  [SMALL_STATE(400)] = 5719,
  [SMALL_STATE(401)] = 5723,
  [SMALL_STATE(402)] = 5727,
  [SMALL_STATE(403)] = 5731,
  [SMALL_STATE(404)] = 5735,
  [SMALL_STATE(405)] = 5739,
  [SMALL_STATE(406)] = 5743,
  [SMALL_STATE(407)] = 5747,
  [SMALL_STATE(408)] = 5751,
  [SMALL_STATE(409)] = 5755,
  [SMALL_STATE(410)] = 5759,
  [SMALL_STATE(411)] = 5763,
  [SMALL_STATE(412)] = 5767,
  [SMALL_STATE(413)] = 5771,
  [SMALL_STATE(414)] = 5775,
  [SMALL_STATE(415)] = 5779,
  [SMALL_STATE(416)] = 5783,
  [SMALL_STATE(417)] = 5787,
  [SMALL_STATE(418)] = 5791,
  [SMALL_STATE(419)] = 5795,
  [SMALL_STATE(420)] = 5799,
  [SMALL_STATE(421)] = 5803,
  [SMALL_STATE(422)] = 5807,
  [SMALL_STATE(423)] = 5811,
  [SMALL_STATE(424)] = 5815,
  [SMALL_STATE(425)] = 5819,
  [SMALL_STATE(426)] = 5823,
  [SMALL_STATE(427)] = 5827,
  [SMALL_STATE(428)] = 5831,
  [SMALL_STATE(429)] = 5835,
  [SMALL_STATE(430)] = 5839,
  [SMALL_STATE(431)] = 5843,
  [SMALL_STATE(432)] = 5847,
  [SMALL_STATE(433)] = 5851,
  [SMALL_STATE(434)] = 5855,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 1, 0, 0), SHIFT(296),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 1, 0, 0), SHIFT(296),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 1, 0, 0), SHIFT(296),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 1, 0, 0), SHIFT(296),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 2, 0, 0), SHIFT(296),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 2, 0, 0), SHIFT(296),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 1, 0, 0), SHIFT(296),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 2, 0, 0), SHIFT(296),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 2, 0, 0), SHIFT(296),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 2, 0, 0), SHIFT(296),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 1, 0, 0), SHIFT(346),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 1, 0, 0), SHIFT(346),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 1, 0, 0), SHIFT(346),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 1, 0, 0), SHIFT(346),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 2, 0, 0), SHIFT(346),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 1, 0, 0), SHIFT(346),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 2, 0, 0), SHIFT(346),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 2, 0, 0), SHIFT(346),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 2, 0, 0), SHIFT(346),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 2, 0, 0), SHIFT(346),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_end, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_end, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_end, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_end, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_end, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_end, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_end, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_end, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_end, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_end, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 4, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 4, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 4, 0, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 4, 0, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 3, 0, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 3, 0, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 5, 0, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 5, 0, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_end_tag, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_end_tag, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_end_tag, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_end_tag, 3, 0, 0),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_start, 6, 0, 16),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_start, 6, 0, 16),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_start, 6, 0, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_start, 6, 0, 6),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_start, 6, 0, 8),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_start, 6, 0, 8),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_start, 5, 0, 14),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_start, 5, 0, 14),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_start, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_start, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 2, 0, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_start, 5, 0, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_start, 5, 0, 6),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 3, 0, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_start, 6, 0, 14),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_start, 6, 0, 14),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_start, 5, 0, 8),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_start, 5, 0, 8),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(297),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_start, 5, 0, 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_start, 5, 0, 6),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_start, 7, 0, 16),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_start, 7, 0, 16),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(322),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_start, 6, 0, 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_start, 6, 0, 6),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_when_start_repeat1, 2, 0, 0),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_start_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_when_start_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_modifier, 1, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 11),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_name, 1, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 5, 0, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 5, 0, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 1, 0, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 3, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 3, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_element, 2, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_element, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 4, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 4, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 3, 0, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 3, 0, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 4, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 5, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_self_closing_element, 3, 0, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_self_closing_element, 3, 0, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_void_element, 4, 0, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_void_element, 4, 0, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_self_closing_element, 4, 0, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_self_closing_element, 4, 0, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_end_tag, 3, 0, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_end_tag, 3, 0, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_element, 3, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_element, 3, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_formatter, 2, 0, 13),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 4, 0, 0),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_attribute, 1, 0, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter, 2, 0, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_start_tag, 3, 0, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start_tag, 3, 0, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 5, 0, 15),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_handler, 3, 0, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 3, 0, 5),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start, 5, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_tag_name, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start, 4, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_start_tag, 4, 0, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_start_tag, 4, 0, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 4, 0, 10),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_attribute, 3, 0, 5),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 3, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_formatter, 3, 0, 13),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_quoted_attribute_value, 2, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_tag_name, 1, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_quoted_attribute_value, 3, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_chain, 2, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 4, 0, 0),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formatter_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formatter_arguments_repeat1, 2, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter_arguments, 2, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatter, 3, 0, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [969] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_start, 6, 0, 7),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_start, 5, 0, 7),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
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
