#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 323
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  anon_sym_puzzle_DASHview = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_puzzle_DASHskeleton = 5,
  anon_sym_scripts = 6,
  anon_sym_styles = 7,
  anon_sym_SLASH_GT = 8,
  anon_sym_SLASH = 9,
  sym_tag_name = 10,
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
  anon_sym_POUND = 36,
  anon_sym_if = 37,
  anon_sym_else = 38,
  anon_sym_if2 = 39,
  anon_sym_unless = 40,
  anon_sym_case = 41,
  anon_sym_when = 42,
  anon_sym_for = 43,
  anon_sym_svg = 44,
  sym_text = 45,
  sym_comment = 46,
  sym_script_content = 47,
  sym_style_content = 48,
  sym_expression_content = 49,
  sym_inline_comment = 50,
  sym_block_comment = 51,
  sym_document = 52,
  sym__top_level = 53,
  sym__node = 54,
  sym_view_element = 55,
  sym_view_start_tag = 56,
  sym_view_end_tag = 57,
  sym_skeleton_element = 58,
  sym_skeleton_start_tag = 59,
  sym_skeleton_end_tag = 60,
  sym_scripts_element = 61,
  sym_scripts_start_tag = 62,
  sym_scripts_end_tag = 63,
  sym_styles_element = 64,
  sym_styles_start_tag = 65,
  sym_styles_end_tag = 66,
  sym_element = 67,
  sym_start_tag = 68,
  sym_end_tag = 69,
  sym_self_closing_element = 70,
  sym_void_element = 71,
  sym_void_tag_name = 72,
  sym_attribute = 73,
  sym_normal_attribute = 74,
  sym_event_attribute = 75,
  sym_event_name = 76,
  sym_event_modifier = 77,
  sym_quoted_attribute_value = 78,
  sym__attribute_node = 79,
  sym_interpolation = 80,
  sym_if_statement = 81,
  sym_if_start = 82,
  sym_else_if_block = 83,
  sym_else_if_start = 84,
  sym_else_block = 85,
  sym_else_start = 86,
  sym_if_end = 87,
  sym_unless_statement = 88,
  sym_unless_start = 89,
  sym_unless_end = 90,
  sym_case_statement = 91,
  sym_case_start = 92,
  sym_when_block = 93,
  sym_when_start = 94,
  sym_case_else_block = 95,
  sym_case_end = 96,
  sym_for_statement = 97,
  sym_for_start = 98,
  sym_for_else_block = 99,
  sym_for_end = 100,
  sym_svg_directive = 101,
  sym_attribute_if_statement = 102,
  sym_attribute_else_if_block = 103,
  sym_attribute_else_block = 104,
  sym_attribute_unless_statement = 105,
  sym_attribute_case_statement = 106,
  sym_attribute_when_block = 107,
  sym_attribute_case_else_block = 108,
  sym_attribute_for_statement = 109,
  sym_attribute_for_else_block = 110,
  aux_sym_document_repeat1 = 111,
  aux_sym_view_element_repeat1 = 112,
  aux_sym_view_start_tag_repeat1 = 113,
  aux_sym_event_attribute_repeat1 = 114,
  aux_sym_quoted_attribute_value_repeat1 = 115,
  aux_sym_if_statement_repeat1 = 116,
  aux_sym_case_statement_repeat1 = 117,
  aux_sym_attribute_if_statement_repeat1 = 118,
  aux_sym_attribute_case_statement_repeat1 = 119,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_puzzle_DASHview] = "section_tag_name",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_puzzle_DASHskeleton] = "section_tag_name",
  [anon_sym_scripts] = "section_tag_name",
  [anon_sym_styles] = "section_tag_name",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_SLASH] = "/",
  [sym_tag_name] = "tag_name",
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
  [anon_sym_POUND] = "#",
  [anon_sym_if] = "directive_name",
  [anon_sym_else] = "directive_name",
  [anon_sym_if2] = "directive_name",
  [anon_sym_unless] = "directive_name",
  [anon_sym_case] = "directive_name",
  [anon_sym_when] = "directive_name",
  [anon_sym_for] = "directive_name",
  [anon_sym_svg] = "directive_name",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_script_content] = "script_content",
  [sym_style_content] = "style_content",
  [sym_expression_content] = "expression_content",
  [sym_inline_comment] = "inline_comment",
  [sym_block_comment] = "block_comment",
  [sym_document] = "document",
  [sym__top_level] = "_top_level",
  [sym__node] = "_node",
  [sym_view_element] = "view_element",
  [sym_view_start_tag] = "view_start_tag",
  [sym_view_end_tag] = "view_end_tag",
  [sym_skeleton_element] = "skeleton_element",
  [sym_skeleton_start_tag] = "skeleton_start_tag",
  [sym_skeleton_end_tag] = "skeleton_end_tag",
  [sym_scripts_element] = "scripts_element",
  [sym_scripts_start_tag] = "scripts_start_tag",
  [sym_scripts_end_tag] = "scripts_end_tag",
  [sym_styles_element] = "styles_element",
  [sym_styles_start_tag] = "styles_start_tag",
  [sym_styles_end_tag] = "styles_end_tag",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_element] = "self_closing_element",
  [sym_void_element] = "void_element",
  [sym_void_tag_name] = "void_tag_name",
  [sym_attribute] = "attribute",
  [sym_normal_attribute] = "normal_attribute",
  [sym_event_attribute] = "event_attribute",
  [sym_event_name] = "event_name",
  [sym_event_modifier] = "event_modifier",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__attribute_node] = "_attribute_node",
  [sym_interpolation] = "interpolation",
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
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
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
  [anon_sym_scripts] = anon_sym_puzzle_DASHview,
  [anon_sym_styles] = anon_sym_puzzle_DASHview,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_tag_name] = sym_tag_name,
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_if,
  [anon_sym_if2] = anon_sym_if,
  [anon_sym_unless] = anon_sym_if,
  [anon_sym_case] = anon_sym_if,
  [anon_sym_when] = anon_sym_if,
  [anon_sym_for] = anon_sym_if,
  [anon_sym_svg] = anon_sym_if,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_script_content] = sym_script_content,
  [sym_style_content] = sym_style_content,
  [sym_expression_content] = sym_expression_content,
  [sym_inline_comment] = sym_inline_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_document] = sym_document,
  [sym__top_level] = sym__top_level,
  [sym__node] = sym__node,
  [sym_view_element] = sym_view_element,
  [sym_view_start_tag] = sym_view_start_tag,
  [sym_view_end_tag] = sym_view_end_tag,
  [sym_skeleton_element] = sym_skeleton_element,
  [sym_skeleton_start_tag] = sym_skeleton_start_tag,
  [sym_skeleton_end_tag] = sym_skeleton_end_tag,
  [sym_scripts_element] = sym_scripts_element,
  [sym_scripts_start_tag] = sym_scripts_start_tag,
  [sym_scripts_end_tag] = sym_scripts_end_tag,
  [sym_styles_element] = sym_styles_element,
  [sym_styles_start_tag] = sym_styles_start_tag,
  [sym_styles_end_tag] = sym_styles_end_tag,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_element] = sym_self_closing_element,
  [sym_void_element] = sym_void_element,
  [sym_void_tag_name] = sym_void_tag_name,
  [sym_attribute] = sym_attribute,
  [sym_normal_attribute] = sym_normal_attribute,
  [sym_event_attribute] = sym_event_attribute,
  [sym_event_name] = sym_event_name,
  [sym_event_modifier] = sym_event_modifier,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__attribute_node] = sym__attribute_node,
  [sym_interpolation] = sym_interpolation,
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
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
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
  [anon_sym_scripts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_styles] = {
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
  [sym_tag_name] = {
    .visible = true,
    .named = true,
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
  [anon_sym_case] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_svg] = {
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
  [sym_scripts_element] = {
    .visible = true,
    .named = true,
  },
  [sym_scripts_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_scripts_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_element] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_end_tag] = {
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
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
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
  [40] = 37,
  [41] = 39,
  [42] = 36,
  [43] = 38,
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
  [85] = 67,
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
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 105,
  [121] = 121,
  [122] = 88,
  [123] = 107,
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
  [137] = 136,
  [138] = 128,
  [139] = 133,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 143,
  [144] = 143,
  [145] = 81,
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
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 148,
  [168] = 60,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 77,
  [174] = 79,
  [175] = 80,
  [176] = 170,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 150,
  [182] = 147,
  [183] = 60,
  [184] = 60,
  [185] = 172,
  [186] = 180,
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
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 130,
  [218] = 131,
  [219] = 132,
  [220] = 220,
  [221] = 135,
  [222] = 222,
  [223] = 129,
  [224] = 224,
  [225] = 134,
  [226] = 226,
  [227] = 227,
  [228] = 222,
  [229] = 202,
  [230] = 209,
  [231] = 231,
  [232] = 211,
  [233] = 227,
  [234] = 234,
  [235] = 205,
  [236] = 214,
  [237] = 237,
  [238] = 231,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
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
  [264] = 239,
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
  [275] = 258,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 242,
  [281] = 260,
  [282] = 282,
  [283] = 283,
  [284] = 274,
  [285] = 285,
  [286] = 286,
  [287] = 285,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 266,
  [292] = 292,
  [293] = 278,
  [294] = 294,
  [295] = 282,
  [296] = 258,
  [297] = 258,
  [298] = 247,
  [299] = 255,
  [300] = 292,
  [301] = 262,
  [302] = 276,
  [303] = 250,
  [304] = 304,
  [305] = 305,
  [306] = 244,
  [307] = 245,
  [308] = 249,
  [309] = 279,
  [310] = 254,
  [311] = 286,
  [312] = 268,
  [313] = 288,
  [314] = 248,
  [315] = 261,
  [316] = 267,
  [317] = 241,
  [318] = 305,
  [319] = 304,
  [320] = 263,
  [321] = 272,
  [322] = 273,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '"', 219,
        '#', 225,
        '\'', 220,
        '/', 116,
        ':', 214,
        '<', 104,
        '=', 212,
        '>', 107,
        '@', 213,
        'a', 77,
        'b', 9,
        'c', 18,
        'e', 60,
        'f', 68,
        'h', 72,
        'i', 43,
        'l', 48,
        'm', 28,
        'p', 16,
        's', 25,
        't', 73,
        'u', 66,
        'w', 20,
        '{', 223,
        '}', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '{') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '{') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'a', 166,
        'b', 118,
        'c', 157,
        'e', 154,
        'h', 162,
        'i', 152,
        'l', 142,
        'm', 131,
        'p', 123,
        's', 128,
        't', 163,
        'w', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        'a', 166,
        'b', 118,
        'c', 157,
        'e', 154,
        'h', 162,
        'i', 152,
        'l', 142,
        'm', 131,
        'p', 124,
        's', 158,
        't', 163,
        'w', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '}') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(200);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(208);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 95:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 'z') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'z') ADVANCE(58);
      END_STATE();
    case 99:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 100:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '"', 219,
        '#', 225,
        '\'', 220,
        '/', 116,
        ':', 214,
        '<', 104,
        '=', 212,
        '>', 107,
        '@', 213,
        'a', 77,
        'b', 9,
        'c', 67,
        'e', 61,
        'h', 72,
        'i', 45,
        'l', 48,
        'm', 28,
        'p', 16,
        's', 24,
        't', 73,
        'w', 19,
        '{', 223,
        '}', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '{') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(235);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHview);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHview);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHskeleton);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_puzzle_DASHskeleton);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_scripts);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_scripts);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'z') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'z') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_area);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_br);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_col);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_col);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_embed);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_hr);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_hr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_img);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_img);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_track);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_wbr);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_wbr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_event_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_attribute_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_attribute_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_if2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(235);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 102, .external_lex_state = 2},
  [2] = {.lex_state = 102, .external_lex_state = 2},
  [3] = {.lex_state = 102, .external_lex_state = 2},
  [4] = {.lex_state = 102, .external_lex_state = 2},
  [5] = {.lex_state = 102, .external_lex_state = 2},
  [6] = {.lex_state = 102, .external_lex_state = 2},
  [7] = {.lex_state = 102, .external_lex_state = 2},
  [8] = {.lex_state = 102, .external_lex_state = 2},
  [9] = {.lex_state = 102, .external_lex_state = 2},
  [10] = {.lex_state = 102, .external_lex_state = 2},
  [11] = {.lex_state = 102, .external_lex_state = 2},
  [12] = {.lex_state = 102, .external_lex_state = 2},
  [13] = {.lex_state = 102, .external_lex_state = 2},
  [14] = {.lex_state = 102, .external_lex_state = 2},
  [15] = {.lex_state = 102, .external_lex_state = 2},
  [16] = {.lex_state = 102, .external_lex_state = 2},
  [17] = {.lex_state = 102, .external_lex_state = 2},
  [18] = {.lex_state = 102, .external_lex_state = 2},
  [19] = {.lex_state = 102, .external_lex_state = 2},
  [20] = {.lex_state = 102, .external_lex_state = 2},
  [21] = {.lex_state = 102, .external_lex_state = 2},
  [22] = {.lex_state = 102, .external_lex_state = 2},
  [23] = {.lex_state = 102, .external_lex_state = 2},
  [24] = {.lex_state = 102, .external_lex_state = 2},
  [25] = {.lex_state = 102, .external_lex_state = 2},
  [26] = {.lex_state = 102, .external_lex_state = 2},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 102, .external_lex_state = 2},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 102, .external_lex_state = 2},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 102, .external_lex_state = 2},
  [61] = {.lex_state = 102, .external_lex_state = 2},
  [62] = {.lex_state = 102, .external_lex_state = 2},
  [63] = {.lex_state = 102, .external_lex_state = 2},
  [64] = {.lex_state = 102, .external_lex_state = 2},
  [65] = {.lex_state = 102, .external_lex_state = 2},
  [66] = {.lex_state = 102, .external_lex_state = 2},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 102, .external_lex_state = 2},
  [69] = {.lex_state = 102, .external_lex_state = 2},
  [70] = {.lex_state = 102, .external_lex_state = 2},
  [71] = {.lex_state = 102, .external_lex_state = 2},
  [72] = {.lex_state = 102, .external_lex_state = 2},
  [73] = {.lex_state = 102, .external_lex_state = 2},
  [74] = {.lex_state = 102, .external_lex_state = 2},
  [75] = {.lex_state = 102, .external_lex_state = 2},
  [76] = {.lex_state = 102, .external_lex_state = 2},
  [77] = {.lex_state = 102, .external_lex_state = 2},
  [78] = {.lex_state = 102, .external_lex_state = 2},
  [79] = {.lex_state = 102, .external_lex_state = 2},
  [80] = {.lex_state = 102, .external_lex_state = 2},
  [81] = {.lex_state = 102, .external_lex_state = 2},
  [82] = {.lex_state = 102, .external_lex_state = 2},
  [83] = {.lex_state = 102, .external_lex_state = 2},
  [84] = {.lex_state = 102, .external_lex_state = 2},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 102, .external_lex_state = 2},
  [87] = {.lex_state = 102, .external_lex_state = 2},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 102, .external_lex_state = 2},
  [90] = {.lex_state = 102, .external_lex_state = 2},
  [91] = {.lex_state = 102, .external_lex_state = 2},
  [92] = {.lex_state = 102, .external_lex_state = 2},
  [93] = {.lex_state = 102, .external_lex_state = 2},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 102, .external_lex_state = 2},
  [96] = {.lex_state = 102, .external_lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 102, .external_lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 102, .external_lex_state = 2},
  [103] = {.lex_state = 102, .external_lex_state = 2},
  [104] = {.lex_state = 102, .external_lex_state = 2},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 102, .external_lex_state = 2},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 102, .external_lex_state = 2},
  [110] = {.lex_state = 102, .external_lex_state = 2},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 102, .external_lex_state = 2},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 102, .external_lex_state = 2},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 102, .external_lex_state = 2},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 102, .external_lex_state = 2},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 102, .external_lex_state = 2},
  [130] = {.lex_state = 102, .external_lex_state = 2},
  [131] = {.lex_state = 102, .external_lex_state = 2},
  [132] = {.lex_state = 102, .external_lex_state = 2},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 102, .external_lex_state = 2},
  [135] = {.lex_state = 102, .external_lex_state = 2},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 4},
  [190] = {.lex_state = 0, .external_lex_state = 5},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0, .external_lex_state = 4},
  [194] = {.lex_state = 0, .external_lex_state = 5},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 50},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0, .external_lex_state = 3},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 100},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0, .external_lex_state = 5},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 100},
  [229] = {.lex_state = 50},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 100},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0, .external_lex_state = 3},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 100},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 50},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0, .external_lex_state = 3},
  [247] = {.lex_state = 0, .external_lex_state = 3},
  [248] = {.lex_state = 0, .external_lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0, .external_lex_state = 3},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0, .external_lex_state = 3},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 99},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
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
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0, .external_lex_state = 3},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0, .external_lex_state = 3},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0, .external_lex_state = 3},
  [299] = {.lex_state = 0, .external_lex_state = 3},
  [300] = {.lex_state = 0, .external_lex_state = 3},
  [301] = {.lex_state = 23},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0, .external_lex_state = 3},
  [314] = {.lex_state = 0, .external_lex_state = 3},
  [315] = {.lex_state = 0, .external_lex_state = 3},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 50},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_puzzle_DASHview] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_puzzle_DASHskeleton] = ACTIONS(1),
    [anon_sym_scripts] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_if2] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_script_content] = ACTIONS(1),
    [sym_style_content] = ACTIONS(1),
    [sym_expression_content] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(294),
    [sym__top_level] = STATE(2),
    [sym__node] = STATE(2),
    [sym_view_element] = STATE(2),
    [sym_view_start_tag] = STATE(10),
    [sym_skeleton_element] = STATE(2),
    [sym_skeleton_start_tag] = STATE(11),
    [sym_scripts_element] = STATE(2),
    [sym_scripts_start_tag] = STATE(189),
    [sym_styles_element] = STATE(2),
    [sym_styles_start_tag] = STATE(190),
    [sym_element] = STATE(62),
    [sym_start_tag] = STATE(14),
    [sym_self_closing_element] = STATE(62),
    [sym_void_element] = STATE(62),
    [sym_interpolation] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_if_start] = STATE(5),
    [sym_unless_statement] = STATE(62),
    [sym_unless_start] = STATE(6),
    [sym_case_statement] = STATE(62),
    [sym_case_start] = STATE(99),
    [sym_for_statement] = STATE(62),
    [sym_for_start] = STATE(7),
    [sym_svg_directive] = STATE(62),
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
  [0] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(10), 1,
      sym_view_start_tag,
    STATE(11), 1,
      sym_skeleton_start_tag,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(189), 1,
      sym_scripts_start_tag,
    STATE(190), 1,
      sym_styles_start_tag,
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
      sym_scripts_element,
      sym_styles_element,
      aux_sym_document_repeat1,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [63] = 15,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(10), 1,
      sym_view_start_tag,
    STATE(11), 1,
      sym_skeleton_start_tag,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(189), 1,
      sym_scripts_start_tag,
    STATE(190), 1,
      sym_styles_start_tag,
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
      sym_scripts_element,
      sym_styles_element,
      aux_sym_document_repeat1,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [126] = 15,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(20), 1,
      sym_else_start,
    STATE(22), 1,
      sym_else_if_start,
    STATE(63), 1,
      sym_if_end,
    STATE(99), 1,
      sym_case_start,
    STATE(200), 1,
      sym_else_block,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(100), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [185] = 15,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(20), 1,
      sym_else_start,
    STATE(22), 1,
      sym_else_if_start,
    STATE(83), 1,
      sym_if_end,
    STATE(99), 1,
      sym_case_start,
    STATE(199), 1,
      sym_else_block,
    STATE(4), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    STATE(117), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [244] = 13,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(20), 1,
      sym_else_start,
    STATE(84), 1,
      sym_unless_end,
    STATE(99), 1,
      sym_case_start,
    STATE(207), 1,
      sym_else_block,
    STATE(8), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [296] = 13,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_else_start,
    STATE(70), 1,
      sym_for_end,
    STATE(99), 1,
      sym_case_start,
    STATE(195), 1,
      sym_for_else_block,
    STATE(9), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [348] = 13,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(20), 1,
      sym_else_start,
    STATE(64), 1,
      sym_unless_end,
    STATE(99), 1,
      sym_case_start,
    STATE(213), 1,
      sym_else_block,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [400] = 13,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_else_start,
    STATE(66), 1,
      sym_for_end,
    STATE(99), 1,
      sym_case_start,
    STATE(224), 1,
      sym_for_else_block,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [452] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(32), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(102), 1,
      sym_view_end_tag,
    STATE(12), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [501] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(98), 1,
      sym_skeleton_end_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(13), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [550] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(32), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(121), 1,
      sym_view_end_tag,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [599] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(124), 1,
      sym_skeleton_end_tag,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [648] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(82), 1,
      sym_end_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(15), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [697] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(61), 1,
      sym_end_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [746] = 11,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(46), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [792] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [835] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(21), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [878] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(26), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [921] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(24), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [964] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [1007] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(17), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [1050] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(25), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [1093] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [1136] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [1179] = 10,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_if_start,
    STATE(6), 1,
      sym_unless_start,
    STATE(7), 1,
      sym_for_start,
    STATE(14), 1,
      sym_start_tag,
    STATE(99), 1,
      sym_case_start,
    STATE(16), 2,
      sym__node,
      aux_sym_view_element_repeat1,
    ACTIONS(9), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
    STATE(62), 9,
      sym_element,
      sym_self_closing_element,
      sym_void_element,
      sym_interpolation,
      sym_if_statement,
      sym_unless_statement,
      sym_case_statement,
      sym_for_statement,
      sym_svg_directive,
  [1222] = 7,
    ACTIONS(79), 1,
      anon_sym_puzzle_DASHview,
    ACTIONS(81), 1,
      anon_sym_puzzle_DASHskeleton,
    ACTIONS(83), 1,
      anon_sym_scripts,
    ACTIONS(85), 1,
      anon_sym_styles,
    ACTIONS(87), 1,
      sym_tag_name,
    STATE(55), 1,
      sym_void_tag_name,
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
  [1257] = 12,
    ACTIONS(91), 1,
      sym_attribute_text,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(44), 1,
      sym_else_start,
    STATE(48), 1,
      sym_else_if_start,
    STATE(108), 1,
      sym_case_start,
    STATE(149), 1,
      sym_if_end,
    STATE(196), 1,
      sym_attribute_else_block,
    STATE(112), 2,
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
  [1301] = 12,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(44), 1,
      sym_else_start,
    STATE(48), 1,
      sym_else_if_start,
    STATE(108), 1,
      sym_case_start,
    STATE(152), 1,
      sym_if_end,
    STATE(204), 1,
      sym_attribute_else_block,
    STATE(118), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1345] = 3,
    ACTIONS(87), 1,
      sym_tag_name,
    STATE(55), 1,
      sym_void_tag_name,
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
  [1368] = 10,
    ACTIONS(97), 1,
      sym_attribute_text,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(46), 1,
      sym_else_start,
    STATE(108), 1,
      sym_case_start,
    STATE(165), 1,
      sym_for_end,
    STATE(201), 1,
      sym_attribute_for_else_block,
    STATE(34), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1405] = 10,
    ACTIONS(101), 1,
      sym_attribute_text,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(44), 1,
      sym_else_start,
    STATE(108), 1,
      sym_case_start,
    STATE(169), 1,
      sym_unless_end,
    STATE(197), 1,
      sym_attribute_else_block,
    STATE(33), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1442] = 10,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(44), 1,
      sym_else_start,
    STATE(108), 1,
      sym_case_start,
    STATE(155), 1,
      sym_unless_end,
    STATE(206), 1,
      sym_attribute_else_block,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1479] = 10,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(46), 1,
      sym_else_start,
    STATE(108), 1,
      sym_case_start,
    STATE(160), 1,
      sym_for_end,
    STATE(210), 1,
      sym_attribute_for_else_block,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1516] = 8,
    ACTIONS(107), 1,
      sym_attribute_text,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    ACTIONS(105), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1548] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1579] = 8,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(36), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1610] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1641] = 8,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(38), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1672] = 8,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(42), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1703] = 8,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      sym_attribute_text,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(43), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1734] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1765] = 8,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1796] = 7,
    ACTIONS(131), 1,
      sym_attribute_text,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(50), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1824] = 7,
    ACTIONS(136), 1,
      sym_attribute_text,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(52), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1852] = 7,
    ACTIONS(141), 1,
      sym_attribute_text,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(53), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1880] = 7,
    ACTIONS(146), 1,
      sym_attribute_text,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(51), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1908] = 7,
    ACTIONS(151), 1,
      sym_attribute_text,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(49), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1936] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1964] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [1992] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2020] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2048] = 7,
    ACTIONS(95), 1,
      sym_attribute_text,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_if_start,
    STATE(31), 1,
      sym_for_start,
    STATE(32), 1,
      sym_unless_start,
    STATE(108), 1,
      sym_case_start,
    STATE(35), 7,
      sym__attribute_node,
      sym_interpolation,
      sym_attribute_if_statement,
      sym_attribute_unless_statement,
      sym_attribute_case_statement,
      sym_attribute_for_statement,
      aux_sym_quoted_attribute_value_repeat1,
  [2076] = 6,
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(173), 1,
      anon_sym_SLASH_GT,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    STATE(57), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2097] = 6,
    ACTIONS(179), 1,
      anon_sym_GT,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      sym_attribute_name,
    STATE(59), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(167), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2118] = 2,
    ACTIONS(189), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(187), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2131] = 6,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_SLASH_GT,
    STATE(67), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2152] = 2,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(195), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2165] = 6,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      sym_attribute_name,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(201), 1,
      anon_sym_SLASH,
    STATE(85), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(167), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2186] = 2,
    ACTIONS(205), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(203), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2199] = 2,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(207), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2212] = 2,
    ACTIONS(213), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(211), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2225] = 2,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(215), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2238] = 2,
    ACTIONS(221), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(219), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2251] = 2,
    ACTIONS(225), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(223), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2264] = 2,
    ACTIONS(229), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(227), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2277] = 5,
    ACTIONS(233), 1,
      anon_sym_AT,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(231), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(67), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2296] = 2,
    ACTIONS(241), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(239), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2309] = 2,
    ACTIONS(245), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(243), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2322] = 2,
    ACTIONS(249), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(247), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2335] = 2,
    ACTIONS(253), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(251), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2348] = 2,
    ACTIONS(257), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(255), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2361] = 2,
    ACTIONS(261), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(259), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2374] = 2,
    ACTIONS(265), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(263), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2387] = 2,
    ACTIONS(269), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(267), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2400] = 2,
    ACTIONS(273), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(271), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2413] = 2,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(275), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2426] = 2,
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
  [2439] = 2,
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
  [2452] = 2,
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
  [2465] = 2,
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
  [2478] = 2,
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
  [2491] = 2,
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
  [2504] = 2,
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
  [2517] = 5,
    ACTIONS(307), 1,
      anon_sym_AT,
    ACTIONS(310), 1,
      sym_attribute_name,
    ACTIONS(231), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    STATE(85), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(167), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2536] = 2,
    ACTIONS(315), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(313), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2549] = 2,
    ACTIONS(319), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(317), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2562] = 5,
    ACTIONS(323), 1,
      anon_sym_EQ,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      sym_attribute_name,
    STATE(107), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(321), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
  [2580] = 2,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(329), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2592] = 2,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(333), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2604] = 2,
    ACTIONS(339), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(337), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2616] = 2,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(341), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2628] = 2,
    ACTIONS(347), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(345), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2640] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(349), 1,
      anon_sym_GT,
    STATE(67), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2658] = 2,
    ACTIONS(351), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(353), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [2670] = 2,
    ACTIONS(355), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(357), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [2682] = 6,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_when_start,
    STATE(23), 1,
      sym_else_start,
    STATE(65), 1,
      sym_case_end,
    STATE(220), 1,
      sym_case_else_block,
    STATE(153), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [2702] = 2,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(361), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2714] = 6,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_when_start,
    STATE(23), 1,
      sym_else_start,
    STATE(86), 1,
      sym_case_end,
    STATE(191), 1,
      sym_case_else_block,
    STATE(97), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [2734] = 6,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_else_start,
    STATE(22), 1,
      sym_else_if_start,
    STATE(71), 1,
      sym_if_end,
    STATE(203), 1,
      sym_else_block,
    STATE(146), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [2754] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(367), 1,
      anon_sym_GT,
    STATE(67), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2772] = 2,
    ACTIONS(371), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(369), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2784] = 2,
    ACTIONS(373), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(375), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [2796] = 2,
    ACTIONS(379), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(377), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2808] = 5,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      sym_attribute_name,
    STATE(88), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(381), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
  [2826] = 2,
    ACTIONS(387), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(389), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [2838] = 4,
    ACTIONS(393), 1,
      anon_sym_COLON,
    ACTIONS(396), 1,
      sym_attribute_name,
    STATE(107), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(391), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
  [2854] = 6,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_when_start,
    STATE(47), 1,
      sym_else_start,
    STATE(177), 1,
      sym_case_end,
    STATE(198), 1,
      sym_attribute_case_else_block,
    STATE(113), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [2874] = 2,
    ACTIONS(402), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(400), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2886] = 2,
    ACTIONS(406), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(404), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [2898] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(408), 1,
      anon_sym_GT,
    STATE(67), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2916] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_else_start,
    STATE(48), 1,
      sym_else_if_start,
    STATE(152), 1,
      sym_if_end,
    STATE(204), 1,
      sym_attribute_else_block,
    STATE(154), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [2936] = 6,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_when_start,
    STATE(47), 1,
      sym_else_start,
    STATE(157), 1,
      sym_case_end,
    STATE(208), 1,
      sym_attribute_case_else_block,
    STATE(158), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [2956] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(412), 1,
      anon_sym_GT,
    STATE(101), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [2974] = 2,
    ACTIONS(414), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(416), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [2986] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(418), 1,
      anon_sym_GT,
    STATE(127), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3004] = 6,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_else_start,
    STATE(22), 1,
      sym_else_if_start,
    STATE(63), 1,
      sym_if_end,
    STATE(200), 1,
      sym_else_block,
    STATE(146), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [3024] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_else_start,
    STATE(48), 1,
      sym_else_if_start,
    STATE(161), 1,
      sym_if_end,
    STATE(212), 1,
      sym_attribute_else_block,
    STATE(154), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3044] = 2,
    ACTIONS(420), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
    ACTIONS(422), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3056] = 5,
    ACTIONS(385), 1,
      sym_attribute_name,
    ACTIONS(424), 1,
      anon_sym_EQ,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(122), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(381), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
  [3074] = 2,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(428), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3086] = 5,
    ACTIONS(327), 1,
      sym_attribute_name,
    ACTIONS(426), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_EQ,
    STATE(123), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(321), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
  [3104] = 4,
    ACTIONS(396), 1,
      sym_attribute_name,
    ACTIONS(434), 1,
      anon_sym_COLON,
    STATE(123), 1,
      aux_sym_event_attribute_repeat1,
    ACTIONS(391), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
  [3120] = 2,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(437), 5,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      sym_text,
  [3132] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(441), 1,
      anon_sym_GT,
    STATE(111), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3150] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(443), 1,
      anon_sym_GT,
    STATE(94), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3168] = 5,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(445), 1,
      anon_sym_GT,
    STATE(67), 2,
      sym_attribute,
      aux_sym_view_start_tag_repeat1,
    STATE(148), 2,
      sym_normal_attribute,
      sym_event_attribute,
  [3186] = 5,
    ACTIONS(447), 1,
      sym_unquoted_attribute_value,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(172), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3203] = 2,
    ACTIONS(455), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(457), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3214] = 2,
    ACTIONS(459), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(461), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3225] = 2,
    ACTIONS(463), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(465), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3236] = 2,
    ACTIONS(467), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(469), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3247] = 2,
    ACTIONS(473), 2,
      anon_sym_COLON,
      sym_attribute_name,
    ACTIONS(471), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
  [3258] = 2,
    ACTIONS(475), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(477), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3269] = 2,
    ACTIONS(479), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(481), 4,
      sym_comment,
      sym_inline_comment,
      sym_block_comment,
      sym_text,
  [3280] = 2,
    ACTIONS(485), 2,
      anon_sym_COLON,
      sym_attribute_name,
    ACTIONS(483), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
  [3291] = 2,
    ACTIONS(485), 2,
      anon_sym_COLON,
      sym_attribute_name,
    ACTIONS(483), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
  [3302] = 5,
    ACTIONS(487), 1,
      sym_unquoted_attribute_value,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    STATE(185), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [3319] = 2,
    ACTIONS(473), 2,
      anon_sym_COLON,
      sym_attribute_name,
    ACTIONS(471), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
  [3330] = 2,
    ACTIONS(497), 2,
      anon_sym_COLON,
      sym_attribute_name,
    ACTIONS(495), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_AT,
  [3341] = 2,
    ACTIONS(497), 2,
      anon_sym_COLON,
      sym_attribute_name,
    ACTIONS(495), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_AT,
  [3352] = 5,
    ACTIONS(499), 1,
      anon_sym_if,
    ACTIONS(501), 1,
      anon_sym_unless,
    ACTIONS(503), 1,
      anon_sym_case,
    ACTIONS(505), 1,
      anon_sym_for,
    ACTIONS(507), 1,
      anon_sym_svg,
  [3368] = 2,
    ACTIONS(511), 1,
      anon_sym_EQ,
    ACTIONS(509), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3378] = 2,
    ACTIONS(513), 1,
      anon_sym_EQ,
    ACTIONS(509), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3388] = 2,
    ACTIONS(291), 1,
      sym_attribute_text,
    ACTIONS(293), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3397] = 3,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_else_if_start,
    STATE(146), 2,
      sym_else_if_block,
      aux_sym_if_statement_repeat1,
  [3408] = 1,
    ACTIONS(518), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3415] = 1,
    ACTIONS(520), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3422] = 2,
    ACTIONS(524), 1,
      sym_attribute_text,
    ACTIONS(522), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3431] = 1,
    ACTIONS(526), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3438] = 4,
    ACTIONS(503), 1,
      anon_sym_case,
    ACTIONS(528), 1,
      anon_sym_if,
    ACTIONS(530), 1,
      anon_sym_unless,
    ACTIONS(532), 1,
      anon_sym_for,
  [3451] = 2,
    ACTIONS(536), 1,
      sym_attribute_text,
    ACTIONS(534), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3460] = 3,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_when_start,
    STATE(153), 2,
      sym_when_block,
      aux_sym_case_statement_repeat1,
  [3471] = 3,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_else_if_start,
    STATE(154), 2,
      sym_attribute_else_if_block,
      aux_sym_attribute_if_statement_repeat1,
  [3482] = 2,
    ACTIONS(546), 1,
      sym_attribute_text,
    ACTIONS(544), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3491] = 4,
    ACTIONS(548), 1,
      anon_sym_SLASH,
    ACTIONS(550), 1,
      anon_sym_COLON,
    ACTIONS(552), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      sym_expression_content,
  [3504] = 2,
    ACTIONS(558), 1,
      sym_attribute_text,
    ACTIONS(556), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3513] = 3,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_when_start,
    STATE(158), 2,
      sym_attribute_when_block,
      aux_sym_attribute_case_statement_repeat1,
  [3524] = 1,
    ACTIONS(563), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3531] = 2,
    ACTIONS(567), 1,
      sym_attribute_text,
    ACTIONS(565), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3540] = 2,
    ACTIONS(571), 1,
      sym_attribute_text,
    ACTIONS(569), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3549] = 2,
    ACTIONS(575), 1,
      sym_attribute_text,
    ACTIONS(573), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3558] = 2,
    ACTIONS(579), 1,
      sym_attribute_text,
    ACTIONS(577), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3567] = 2,
    ACTIONS(583), 1,
      sym_attribute_text,
    ACTIONS(581), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3576] = 2,
    ACTIONS(587), 1,
      sym_attribute_text,
    ACTIONS(585), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3585] = 4,
    ACTIONS(589), 1,
      anon_sym_SLASH,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(593), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_expression_content,
  [3598] = 1,
    ACTIONS(520), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3605] = 1,
    ACTIONS(203), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3612] = 2,
    ACTIONS(599), 1,
      sym_attribute_text,
    ACTIONS(597), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3621] = 1,
    ACTIONS(601), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3628] = 4,
    ACTIONS(552), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      sym_expression_content,
    ACTIONS(603), 1,
      anon_sym_SLASH,
    ACTIONS(605), 1,
      anon_sym_COLON,
  [3641] = 1,
    ACTIONS(607), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3648] = 2,
    ACTIONS(275), 1,
      sym_attribute_text,
    ACTIONS(277), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3657] = 2,
    ACTIONS(283), 1,
      sym_attribute_text,
    ACTIONS(285), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3666] = 2,
    ACTIONS(287), 1,
      sym_attribute_text,
    ACTIONS(289), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3675] = 1,
    ACTIONS(601), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3682] = 2,
    ACTIONS(611), 1,
      sym_attribute_text,
    ACTIONS(609), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3691] = 4,
    ACTIONS(593), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_expression_content,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_COLON,
  [3704] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(593), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_expression_content,
    ACTIONS(617), 1,
      anon_sym_SLASH,
  [3717] = 1,
    ACTIONS(619), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3724] = 1,
    ACTIONS(526), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3731] = 1,
    ACTIONS(518), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3738] = 2,
    ACTIONS(203), 1,
      sym_attribute_text,
    ACTIONS(205), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3747] = 1,
    ACTIONS(203), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AT,
      sym_attribute_name,
  [3754] = 1,
    ACTIONS(607), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3761] = 1,
    ACTIONS(619), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_AT,
      sym_attribute_name,
  [3768] = 4,
    ACTIONS(550), 1,
      anon_sym_COLON,
    ACTIONS(552), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      sym_expression_content,
    ACTIONS(621), 1,
      anon_sym_SLASH,
  [3781] = 2,
    ACTIONS(625), 1,
      sym_attribute_text,
    ACTIONS(623), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [3790] = 3,
    ACTIONS(627), 1,
      anon_sym_LT_SLASH,
    ACTIONS(629), 1,
      sym_script_content,
    STATE(109), 1,
      sym_scripts_end_tag,
  [3800] = 3,
    ACTIONS(631), 1,
      anon_sym_LT_SLASH,
    ACTIONS(633), 1,
      sym_style_content,
    STATE(110), 1,
      sym_styles_end_tag,
  [3810] = 2,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_case_end,
  [3817] = 2,
    ACTIONS(631), 1,
      anon_sym_LT_SLASH,
    STATE(93), 1,
      sym_styles_end_tag,
  [3824] = 1,
    ACTIONS(637), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [3829] = 1,
    ACTIONS(639), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [3834] = 2,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_for_end,
  [3841] = 2,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_if_end,
  [3848] = 2,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_unless_end,
  [3855] = 2,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_case_end,
  [3862] = 2,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_if_end,
  [3869] = 2,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_if_end,
  [3876] = 2,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_for_end,
  [3883] = 2,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(655), 1,
      anon_sym_if2,
  [3890] = 2,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_if_end,
  [3897] = 2,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_if_end,
  [3904] = 2,
    ACTIONS(603), 1,
      anon_sym_SLASH,
    ACTIONS(605), 1,
      anon_sym_COLON,
  [3911] = 2,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_unless_end,
  [3918] = 2,
    ACTIONS(657), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_unless_end,
  [3925] = 2,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_case_end,
  [3932] = 2,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_interpolation,
  [3939] = 2,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_for_end,
  [3946] = 2,
    ACTIONS(659), 1,
      anon_sym_SLASH,
    ACTIONS(661), 1,
      anon_sym_COLON,
  [3953] = 2,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_if_end,
  [3960] = 2,
    ACTIONS(657), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_unless_end,
  [3967] = 2,
    ACTIONS(663), 1,
      anon_sym_else,
    ACTIONS(665), 1,
      anon_sym_when,
  [3974] = 2,
    ACTIONS(552), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      sym_expression_content,
  [3981] = 1,
    ACTIONS(667), 2,
      sym_script_content,
      anon_sym_LT_SLASH,
  [3986] = 2,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    ACTIONS(461), 1,
      sym_attribute_text,
  [3993] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      sym_attribute_text,
  [4000] = 2,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    ACTIONS(469), 1,
      sym_attribute_text,
  [4007] = 2,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_case_end,
  [4014] = 2,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      sym_attribute_text,
  [4021] = 2,
    ACTIONS(669), 1,
      aux_sym_event_name_token1,
    STATE(105), 1,
      sym_event_name,
  [4028] = 2,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      sym_attribute_text,
  [4035] = 2,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_for_end,
  [4042] = 2,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      sym_attribute_text,
  [4049] = 1,
    ACTIONS(671), 2,
      sym_style_content,
      anon_sym_LT_SLASH,
  [4054] = 2,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_interpolation,
  [4061] = 2,
    ACTIONS(673), 1,
      aux_sym_event_name_token1,
    STATE(120), 1,
      sym_event_name,
  [4068] = 2,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_if2,
  [4075] = 2,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_interpolation,
  [4082] = 2,
    ACTIONS(679), 1,
      aux_sym_event_name_token1,
    STATE(140), 1,
      sym_event_modifier,
  [4089] = 2,
    ACTIONS(681), 1,
      anon_sym_SLASH,
    ACTIONS(683), 1,
      anon_sym_COLON,
  [4096] = 2,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_interpolation,
  [4103] = 2,
    ACTIONS(593), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_expression_content,
  [4110] = 2,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_COLON,
  [4117] = 2,
    ACTIONS(685), 1,
      anon_sym_else,
    ACTIONS(687), 1,
      anon_sym_when,
  [4124] = 2,
    ACTIONS(627), 1,
      anon_sym_LT_SLASH,
    STATE(92), 1,
      sym_scripts_end_tag,
  [4131] = 2,
    ACTIONS(689), 1,
      aux_sym_event_name_token1,
    STATE(141), 1,
      sym_event_modifier,
  [4138] = 1,
    ACTIONS(691), 1,
      anon_sym_for,
  [4142] = 1,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
  [4146] = 1,
    ACTIONS(655), 1,
      anon_sym_if2,
  [4150] = 1,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
  [4154] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
  [4158] = 1,
    ACTIONS(663), 1,
      anon_sym_else,
  [4162] = 1,
    ACTIONS(548), 1,
      anon_sym_SLASH,
  [4166] = 1,
    ACTIONS(699), 1,
      sym_expression_content,
  [4170] = 1,
    ACTIONS(701), 1,
      sym_expression_content,
  [4174] = 1,
    ACTIONS(703), 1,
      sym_expression_content,
  [4178] = 1,
    ACTIONS(705), 1,
      anon_sym_case,
  [4182] = 1,
    ACTIONS(603), 1,
      anon_sym_SLASH,
  [4186] = 1,
    ACTIONS(707), 1,
      anon_sym_GT,
  [4190] = 1,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
  [4194] = 1,
    ACTIONS(711), 1,
      anon_sym_GT,
  [4198] = 1,
    ACTIONS(681), 1,
      anon_sym_SLASH,
  [4202] = 1,
    ACTIONS(713), 1,
      sym_expression_content,
  [4206] = 1,
    ACTIONS(715), 1,
      anon_sym_puzzle_DASHview,
  [4210] = 1,
    ACTIONS(717), 1,
      anon_sym_GT,
  [4214] = 1,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
  [4218] = 1,
    ACTIONS(721), 1,
      anon_sym_styles,
  [4222] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
  [4226] = 1,
    ACTIONS(725), 1,
      sym_expression_content,
  [4230] = 1,
    ACTIONS(727), 1,
      anon_sym_if,
  [4234] = 1,
    ACTIONS(729), 1,
      anon_sym_else,
  [4238] = 1,
    ACTIONS(731), 1,
      anon_sym_for,
  [4242] = 1,
    ACTIONS(733), 1,
      anon_sym_puzzle_DASHskeleton,
  [4246] = 1,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
  [4250] = 1,
    ACTIONS(665), 1,
      anon_sym_when,
  [4254] = 1,
    ACTIONS(621), 1,
      anon_sym_SLASH,
  [4258] = 1,
    ACTIONS(737), 1,
      sym_expression_content,
  [4262] = 1,
    ACTIONS(739), 1,
      anon_sym_GT,
  [4266] = 1,
    ACTIONS(741), 1,
      sym_tag_name,
  [4270] = 1,
    ACTIONS(743), 1,
      anon_sym_COLON,
  [4274] = 1,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
  [4278] = 1,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
  [4282] = 1,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
  [4286] = 1,
    ACTIONS(749), 1,
      anon_sym_else,
  [4290] = 1,
    ACTIONS(199), 1,
      anon_sym_GT,
  [4294] = 1,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
  [4298] = 1,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
  [4302] = 1,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
  [4306] = 1,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
  [4310] = 1,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
  [4314] = 1,
    ACTIONS(761), 1,
      anon_sym_scripts,
  [4318] = 1,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
  [4322] = 1,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
  [4326] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [4330] = 1,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
  [4334] = 1,
    ACTIONS(769), 1,
      sym_expression_content,
  [4338] = 1,
    ACTIONS(771), 1,
      anon_sym_GT,
  [4342] = 1,
    ACTIONS(773), 1,
      anon_sym_GT,
  [4346] = 1,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
  [4350] = 1,
    ACTIONS(777), 1,
      sym_expression_content,
  [4354] = 1,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
  [4358] = 1,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
  [4362] = 1,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
  [4366] = 1,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [4370] = 1,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
  [4374] = 1,
    ACTIONS(789), 1,
      sym_expression_content,
  [4378] = 1,
    ACTIONS(791), 1,
      sym_expression_content,
  [4382] = 1,
    ACTIONS(793), 1,
      sym_expression_content,
  [4386] = 1,
    ACTIONS(795), 1,
      anon_sym_if,
  [4390] = 1,
    ACTIONS(797), 1,
      anon_sym_else,
  [4394] = 1,
    ACTIONS(613), 1,
      anon_sym_SLASH,
  [4398] = 1,
    ACTIONS(799), 1,
      anon_sym_COLON,
  [4402] = 1,
    ACTIONS(801), 1,
      anon_sym_unless,
  [4406] = 1,
    ACTIONS(685), 1,
      anon_sym_else,
  [4410] = 1,
    ACTIONS(589), 1,
      anon_sym_SLASH,
  [4414] = 1,
    ACTIONS(803), 1,
      anon_sym_case,
  [4418] = 1,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
  [4422] = 1,
    ACTIONS(659), 1,
      anon_sym_SLASH,
  [4426] = 1,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
  [4430] = 1,
    ACTIONS(617), 1,
      anon_sym_SLASH,
  [4434] = 1,
    ACTIONS(809), 1,
      sym_expression_content,
  [4438] = 1,
    ACTIONS(811), 1,
      sym_expression_content,
  [4442] = 1,
    ACTIONS(813), 1,
      sym_expression_content,
  [4446] = 1,
    ACTIONS(687), 1,
      anon_sym_when,
  [4450] = 1,
    ACTIONS(677), 1,
      anon_sym_if2,
  [4454] = 1,
    ACTIONS(815), 1,
      anon_sym_unless,
  [4458] = 1,
    ACTIONS(817), 1,
      anon_sym_COLON,
  [4462] = 1,
    ACTIONS(819), 1,
      anon_sym_else,
  [4466] = 1,
    ACTIONS(821), 1,
      anon_sym_COLON,
  [4470] = 1,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 296,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 452,
  [SMALL_STATE(11)] = 501,
  [SMALL_STATE(12)] = 550,
  [SMALL_STATE(13)] = 599,
  [SMALL_STATE(14)] = 648,
  [SMALL_STATE(15)] = 697,
  [SMALL_STATE(16)] = 746,
  [SMALL_STATE(17)] = 792,
  [SMALL_STATE(18)] = 835,
  [SMALL_STATE(19)] = 878,
  [SMALL_STATE(20)] = 921,
  [SMALL_STATE(21)] = 964,
  [SMALL_STATE(22)] = 1007,
  [SMALL_STATE(23)] = 1050,
  [SMALL_STATE(24)] = 1093,
  [SMALL_STATE(25)] = 1136,
  [SMALL_STATE(26)] = 1179,
  [SMALL_STATE(27)] = 1222,
  [SMALL_STATE(28)] = 1257,
  [SMALL_STATE(29)] = 1301,
  [SMALL_STATE(30)] = 1345,
  [SMALL_STATE(31)] = 1368,
  [SMALL_STATE(32)] = 1405,
  [SMALL_STATE(33)] = 1442,
  [SMALL_STATE(34)] = 1479,
  [SMALL_STATE(35)] = 1516,
  [SMALL_STATE(36)] = 1548,
  [SMALL_STATE(37)] = 1579,
  [SMALL_STATE(38)] = 1610,
  [SMALL_STATE(39)] = 1641,
  [SMALL_STATE(40)] = 1672,
  [SMALL_STATE(41)] = 1703,
  [SMALL_STATE(42)] = 1734,
  [SMALL_STATE(43)] = 1765,
  [SMALL_STATE(44)] = 1796,
  [SMALL_STATE(45)] = 1824,
  [SMALL_STATE(46)] = 1852,
  [SMALL_STATE(47)] = 1880,
  [SMALL_STATE(48)] = 1908,
  [SMALL_STATE(49)] = 1936,
  [SMALL_STATE(50)] = 1964,
  [SMALL_STATE(51)] = 1992,
  [SMALL_STATE(52)] = 2020,
  [SMALL_STATE(53)] = 2048,
  [SMALL_STATE(54)] = 2076,
  [SMALL_STATE(55)] = 2097,
  [SMALL_STATE(56)] = 2118,
  [SMALL_STATE(57)] = 2131,
  [SMALL_STATE(58)] = 2152,
  [SMALL_STATE(59)] = 2165,
  [SMALL_STATE(60)] = 2186,
  [SMALL_STATE(61)] = 2199,
  [SMALL_STATE(62)] = 2212,
  [SMALL_STATE(63)] = 2225,
  [SMALL_STATE(64)] = 2238,
  [SMALL_STATE(65)] = 2251,
  [SMALL_STATE(66)] = 2264,
  [SMALL_STATE(67)] = 2277,
  [SMALL_STATE(68)] = 2296,
  [SMALL_STATE(69)] = 2309,
  [SMALL_STATE(70)] = 2322,
  [SMALL_STATE(71)] = 2335,
  [SMALL_STATE(72)] = 2348,
  [SMALL_STATE(73)] = 2361,
  [SMALL_STATE(74)] = 2374,
  [SMALL_STATE(75)] = 2387,
  [SMALL_STATE(76)] = 2400,
  [SMALL_STATE(77)] = 2413,
  [SMALL_STATE(78)] = 2426,
  [SMALL_STATE(79)] = 2439,
  [SMALL_STATE(80)] = 2452,
  [SMALL_STATE(81)] = 2465,
  [SMALL_STATE(82)] = 2478,
  [SMALL_STATE(83)] = 2491,
  [SMALL_STATE(84)] = 2504,
  [SMALL_STATE(85)] = 2517,
  [SMALL_STATE(86)] = 2536,
  [SMALL_STATE(87)] = 2549,
  [SMALL_STATE(88)] = 2562,
  [SMALL_STATE(89)] = 2580,
  [SMALL_STATE(90)] = 2592,
  [SMALL_STATE(91)] = 2604,
  [SMALL_STATE(92)] = 2616,
  [SMALL_STATE(93)] = 2628,
  [SMALL_STATE(94)] = 2640,
  [SMALL_STATE(95)] = 2658,
  [SMALL_STATE(96)] = 2670,
  [SMALL_STATE(97)] = 2682,
  [SMALL_STATE(98)] = 2702,
  [SMALL_STATE(99)] = 2714,
  [SMALL_STATE(100)] = 2734,
  [SMALL_STATE(101)] = 2754,
  [SMALL_STATE(102)] = 2772,
  [SMALL_STATE(103)] = 2784,
  [SMALL_STATE(104)] = 2796,
  [SMALL_STATE(105)] = 2808,
  [SMALL_STATE(106)] = 2826,
  [SMALL_STATE(107)] = 2838,
  [SMALL_STATE(108)] = 2854,
  [SMALL_STATE(109)] = 2874,
  [SMALL_STATE(110)] = 2886,
  [SMALL_STATE(111)] = 2898,
  [SMALL_STATE(112)] = 2916,
  [SMALL_STATE(113)] = 2936,
  [SMALL_STATE(114)] = 2956,
  [SMALL_STATE(115)] = 2974,
  [SMALL_STATE(116)] = 2986,
  [SMALL_STATE(117)] = 3004,
  [SMALL_STATE(118)] = 3024,
  [SMALL_STATE(119)] = 3044,
  [SMALL_STATE(120)] = 3056,
  [SMALL_STATE(121)] = 3074,
  [SMALL_STATE(122)] = 3086,
  [SMALL_STATE(123)] = 3104,
  [SMALL_STATE(124)] = 3120,
  [SMALL_STATE(125)] = 3132,
  [SMALL_STATE(126)] = 3150,
  [SMALL_STATE(127)] = 3168,
  [SMALL_STATE(128)] = 3186,
  [SMALL_STATE(129)] = 3203,
  [SMALL_STATE(130)] = 3214,
  [SMALL_STATE(131)] = 3225,
  [SMALL_STATE(132)] = 3236,
  [SMALL_STATE(133)] = 3247,
  [SMALL_STATE(134)] = 3258,
  [SMALL_STATE(135)] = 3269,
  [SMALL_STATE(136)] = 3280,
  [SMALL_STATE(137)] = 3291,
  [SMALL_STATE(138)] = 3302,
  [SMALL_STATE(139)] = 3319,
  [SMALL_STATE(140)] = 3330,
  [SMALL_STATE(141)] = 3341,
  [SMALL_STATE(142)] = 3352,
  [SMALL_STATE(143)] = 3368,
  [SMALL_STATE(144)] = 3378,
  [SMALL_STATE(145)] = 3388,
  [SMALL_STATE(146)] = 3397,
  [SMALL_STATE(147)] = 3408,
  [SMALL_STATE(148)] = 3415,
  [SMALL_STATE(149)] = 3422,
  [SMALL_STATE(150)] = 3431,
  [SMALL_STATE(151)] = 3438,
  [SMALL_STATE(152)] = 3451,
  [SMALL_STATE(153)] = 3460,
  [SMALL_STATE(154)] = 3471,
  [SMALL_STATE(155)] = 3482,
  [SMALL_STATE(156)] = 3491,
  [SMALL_STATE(157)] = 3504,
  [SMALL_STATE(158)] = 3513,
  [SMALL_STATE(159)] = 3524,
  [SMALL_STATE(160)] = 3531,
  [SMALL_STATE(161)] = 3540,
  [SMALL_STATE(162)] = 3549,
  [SMALL_STATE(163)] = 3558,
  [SMALL_STATE(164)] = 3567,
  [SMALL_STATE(165)] = 3576,
  [SMALL_STATE(166)] = 3585,
  [SMALL_STATE(167)] = 3598,
  [SMALL_STATE(168)] = 3605,
  [SMALL_STATE(169)] = 3612,
  [SMALL_STATE(170)] = 3621,
  [SMALL_STATE(171)] = 3628,
  [SMALL_STATE(172)] = 3641,
  [SMALL_STATE(173)] = 3648,
  [SMALL_STATE(174)] = 3657,
  [SMALL_STATE(175)] = 3666,
  [SMALL_STATE(176)] = 3675,
  [SMALL_STATE(177)] = 3682,
  [SMALL_STATE(178)] = 3691,
  [SMALL_STATE(179)] = 3704,
  [SMALL_STATE(180)] = 3717,
  [SMALL_STATE(181)] = 3724,
  [SMALL_STATE(182)] = 3731,
  [SMALL_STATE(183)] = 3738,
  [SMALL_STATE(184)] = 3747,
  [SMALL_STATE(185)] = 3754,
  [SMALL_STATE(186)] = 3761,
  [SMALL_STATE(187)] = 3768,
  [SMALL_STATE(188)] = 3781,
  [SMALL_STATE(189)] = 3790,
  [SMALL_STATE(190)] = 3800,
  [SMALL_STATE(191)] = 3810,
  [SMALL_STATE(192)] = 3817,
  [SMALL_STATE(193)] = 3824,
  [SMALL_STATE(194)] = 3829,
  [SMALL_STATE(195)] = 3834,
  [SMALL_STATE(196)] = 3841,
  [SMALL_STATE(197)] = 3848,
  [SMALL_STATE(198)] = 3855,
  [SMALL_STATE(199)] = 3862,
  [SMALL_STATE(200)] = 3869,
  [SMALL_STATE(201)] = 3876,
  [SMALL_STATE(202)] = 3883,
  [SMALL_STATE(203)] = 3890,
  [SMALL_STATE(204)] = 3897,
  [SMALL_STATE(205)] = 3904,
  [SMALL_STATE(206)] = 3911,
  [SMALL_STATE(207)] = 3918,
  [SMALL_STATE(208)] = 3925,
  [SMALL_STATE(209)] = 3932,
  [SMALL_STATE(210)] = 3939,
  [SMALL_STATE(211)] = 3946,
  [SMALL_STATE(212)] = 3953,
  [SMALL_STATE(213)] = 3960,
  [SMALL_STATE(214)] = 3967,
  [SMALL_STATE(215)] = 3974,
  [SMALL_STATE(216)] = 3981,
  [SMALL_STATE(217)] = 3986,
  [SMALL_STATE(218)] = 3993,
  [SMALL_STATE(219)] = 4000,
  [SMALL_STATE(220)] = 4007,
  [SMALL_STATE(221)] = 4014,
  [SMALL_STATE(222)] = 4021,
  [SMALL_STATE(223)] = 4028,
  [SMALL_STATE(224)] = 4035,
  [SMALL_STATE(225)] = 4042,
  [SMALL_STATE(226)] = 4049,
  [SMALL_STATE(227)] = 4054,
  [SMALL_STATE(228)] = 4061,
  [SMALL_STATE(229)] = 4068,
  [SMALL_STATE(230)] = 4075,
  [SMALL_STATE(231)] = 4082,
  [SMALL_STATE(232)] = 4089,
  [SMALL_STATE(233)] = 4096,
  [SMALL_STATE(234)] = 4103,
  [SMALL_STATE(235)] = 4110,
  [SMALL_STATE(236)] = 4117,
  [SMALL_STATE(237)] = 4124,
  [SMALL_STATE(238)] = 4131,
  [SMALL_STATE(239)] = 4138,
  [SMALL_STATE(240)] = 4142,
  [SMALL_STATE(241)] = 4146,
  [SMALL_STATE(242)] = 4150,
  [SMALL_STATE(243)] = 4154,
  [SMALL_STATE(244)] = 4158,
  [SMALL_STATE(245)] = 4162,
  [SMALL_STATE(246)] = 4166,
  [SMALL_STATE(247)] = 4170,
  [SMALL_STATE(248)] = 4174,
  [SMALL_STATE(249)] = 4178,
  [SMALL_STATE(250)] = 4182,
  [SMALL_STATE(251)] = 4186,
  [SMALL_STATE(252)] = 4190,
  [SMALL_STATE(253)] = 4194,
  [SMALL_STATE(254)] = 4198,
  [SMALL_STATE(255)] = 4202,
  [SMALL_STATE(256)] = 4206,
  [SMALL_STATE(257)] = 4210,
  [SMALL_STATE(258)] = 4214,
  [SMALL_STATE(259)] = 4218,
  [SMALL_STATE(260)] = 4222,
  [SMALL_STATE(261)] = 4226,
  [SMALL_STATE(262)] = 4230,
  [SMALL_STATE(263)] = 4234,
  [SMALL_STATE(264)] = 4238,
  [SMALL_STATE(265)] = 4242,
  [SMALL_STATE(266)] = 4246,
  [SMALL_STATE(267)] = 4250,
  [SMALL_STATE(268)] = 4254,
  [SMALL_STATE(269)] = 4258,
  [SMALL_STATE(270)] = 4262,
  [SMALL_STATE(271)] = 4266,
  [SMALL_STATE(272)] = 4270,
  [SMALL_STATE(273)] = 4274,
  [SMALL_STATE(274)] = 4278,
  [SMALL_STATE(275)] = 4282,
  [SMALL_STATE(276)] = 4286,
  [SMALL_STATE(277)] = 4290,
  [SMALL_STATE(278)] = 4294,
  [SMALL_STATE(279)] = 4298,
  [SMALL_STATE(280)] = 4302,
  [SMALL_STATE(281)] = 4306,
  [SMALL_STATE(282)] = 4310,
  [SMALL_STATE(283)] = 4314,
  [SMALL_STATE(284)] = 4318,
  [SMALL_STATE(285)] = 4322,
  [SMALL_STATE(286)] = 4326,
  [SMALL_STATE(287)] = 4330,
  [SMALL_STATE(288)] = 4334,
  [SMALL_STATE(289)] = 4338,
  [SMALL_STATE(290)] = 4342,
  [SMALL_STATE(291)] = 4346,
  [SMALL_STATE(292)] = 4350,
  [SMALL_STATE(293)] = 4354,
  [SMALL_STATE(294)] = 4358,
  [SMALL_STATE(295)] = 4362,
  [SMALL_STATE(296)] = 4366,
  [SMALL_STATE(297)] = 4370,
  [SMALL_STATE(298)] = 4374,
  [SMALL_STATE(299)] = 4378,
  [SMALL_STATE(300)] = 4382,
  [SMALL_STATE(301)] = 4386,
  [SMALL_STATE(302)] = 4390,
  [SMALL_STATE(303)] = 4394,
  [SMALL_STATE(304)] = 4398,
  [SMALL_STATE(305)] = 4402,
  [SMALL_STATE(306)] = 4406,
  [SMALL_STATE(307)] = 4410,
  [SMALL_STATE(308)] = 4414,
  [SMALL_STATE(309)] = 4418,
  [SMALL_STATE(310)] = 4422,
  [SMALL_STATE(311)] = 4426,
  [SMALL_STATE(312)] = 4430,
  [SMALL_STATE(313)] = 4434,
  [SMALL_STATE(314)] = 4438,
  [SMALL_STATE(315)] = 4442,
  [SMALL_STATE(316)] = 4446,
  [SMALL_STATE(317)] = 4450,
  [SMALL_STATE(318)] = 4454,
  [SMALL_STATE(319)] = 4458,
  [SMALL_STATE(320)] = 4462,
  [SMALL_STATE(321)] = 4466,
  [SMALL_STATE(322)] = 4470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_element_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 2, 0, 0), SHIFT(215),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 1, 0, 0), SHIFT(215),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 1, 0, 0), SHIFT(215),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 1, 0, 0), SHIFT(215),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_when_block, 2, 0, 0), SHIFT(215),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_block, 1, 0, 0), SHIFT(215),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 1, 0, 0), SHIFT(215),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_block, 2, 0, 0), SHIFT(215),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case_else_block, 2, 0, 0), SHIFT(215),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_for_else_block, 2, 0, 0), SHIFT(215),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 1, 0, 0), SHIFT(234),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 1, 0, 0), SHIFT(234),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 1, 0, 0), SHIFT(234),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 1, 0, 0), SHIFT(234),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 1, 0, 0), SHIFT(234),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_if_block, 2, 0, 0), SHIFT(234),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_else_block, 2, 0, 0), SHIFT(234),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_case_else_block, 2, 0, 0), SHIFT(234),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_when_block, 2, 0, 0), SHIFT(234),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attribute_for_else_block, 2, 0, 0), SHIFT(234),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 3, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 3, 0, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 4, 0, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 4, 0, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 5, 0, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 5, 0, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_svg_directive, 5, 0, 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_end, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_end, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_end, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_end, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_end, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_end, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_end, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_end, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_statement, 2, 0, 0),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 3, 0, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_attribute, 3, 0, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_end_tag, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts_end_tag, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripts_end_tag, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_end_tag, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_end_tag, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts_element, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripts_element, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_element, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_element, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_end_tag, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 2, 0, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_attribute, 2, 0, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_start_tag, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(238),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts_element, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripts_element, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_element, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_element, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_start_tag, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_element, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_element, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 12), SHIFT_REPEAT(231),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skeleton_element, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_start, 5, 0, 13),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_start, 5, 0, 13),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_start, 5, 0, 6),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_start, 5, 0, 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_start, 5, 0, 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_start, 5, 0, 6),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_start, 5, 0, 8),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_start, 5, 0, 8),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_modifier, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_modifier, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_start, 6, 0, 15),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_start, 6, 0, 15),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_start, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_start, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_name, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_name, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 11),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_event_attribute_repeat1, 2, 0, 11),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 1, 0, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 5, 0, 14),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 3, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_unless_statement, 3, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 3, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_case_statement, 3, 0, 0),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_case_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_tag_name, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_for_statement, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 4, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 4, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 4, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_unless_statement, 4, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 4, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_case_statement, 4, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 4, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_for_statement, 4, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_for_statement, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_for_statement, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_unless_statement, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_unless_statement, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_attribute, 4, 0, 10),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_attribute, 3, 0, 5),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_case_statement, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_case_statement, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_if_statement, 5, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_if_statement, 5, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts_start_tag, 4, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_start_tag, 4, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts_start_tag, 3, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_start_tag, 3, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_start, 5, 0, 7),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [781] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_comment = 0,
  ts_external_token_script_content = 1,
  ts_external_token_style_content = 2,
  ts_external_token_expression_content = 3,
  ts_external_token_inline_comment = 4,
  ts_external_token_block_comment = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_script_content] = sym_script_content,
  [ts_external_token_style_content] = sym_style_content,
  [ts_external_token_expression_content] = sym_expression_content,
  [ts_external_token_inline_comment] = sym_inline_comment,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token_script_content] = true,
    [ts_external_token_style_content] = true,
    [ts_external_token_expression_content] = true,
    [ts_external_token_inline_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
    [ts_external_token_inline_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token_expression_content] = true,
  },
  [4] = {
    [ts_external_token_script_content] = true,
  },
  [5] = {
    [ts_external_token_style_content] = true,
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
