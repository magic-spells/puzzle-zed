/**
 * @file Tree-sitter grammar for Puzzle single-file components
 * @author Magic Spells
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'puzzle',

  conflicts: $ => [
    [$.else_if_block],
    [$.else_block],
    [$.when_block],
    [$.case_else_block],
    [$.for_else_block],
    [$.attribute_else_if_block],
    [$.attribute_else_block],
    [$.attribute_when_block],
    [$.attribute_case_else_block],
    [$.attribute_for_else_block],
  ],

  externals: $ => [
    $.comment,
    $.script_content,
    $.style_content,
    $.expression_content,
    $.inline_comment,
    $.block_comment,
  ],

  extras: $ => [
    /\s+/,
  ],

  supertypes: $ => [
    $._node,
  ],

  rules: {
    document: $ => repeat($._top_level),

    _top_level: $ => choice(
      $.view_element,
      $.skeleton_element,
      $.script_element,
      $.style_element,
      $._node,
    ),

    _node: $ => choice(
      $.comment,
      $.inline_comment,
      $.block_comment,
      $.if_statement,
      $.unless_statement,
      $.case_statement,
      $.for_statement,
      $.svg_directive,
      $.interpolation,
      $.void_element,
      $.self_closing_element,
      $.element,
      $.text,
    ),

    view_element: $ => prec(10, seq(
      $.view_start_tag,
      repeat($._node),
      $.view_end_tag,
    )),

    view_start_tag: $ => seq(
      '<',
      alias('puzzle-view', $.section_tag_name),
      repeat($.attribute),
      '>',
    ),

    view_end_tag: $ => seq(
      '</',
      alias('puzzle-view', $.section_tag_name),
      '>',
    ),

    skeleton_element: $ => prec(10, seq(
      $.skeleton_start_tag,
      repeat($._node),
      $.skeleton_end_tag,
    )),

    skeleton_start_tag: $ => seq(
      '<',
      alias('puzzle-skeleton', $.section_tag_name),
      repeat($.attribute),
      '>',
    ),

    skeleton_end_tag: $ => seq(
      '</',
      alias('puzzle-skeleton', $.section_tag_name),
      '>',
    ),

    script_element: $ => prec(10, seq(
      $.script_start_tag,
      optional($.script_content),
      $.script_end_tag,
    )),

    script_start_tag: $ => seq(
      '<',
      alias('script', $.section_tag_name),
      repeat($.attribute),
      '>',
    ),

    script_end_tag: $ => seq(
      '</',
      alias('script', $.section_tag_name),
      '>',
    ),

    style_element: $ => prec(10, seq(
      $.style_start_tag,
      optional($.style_content),
      $.style_end_tag,
    )),

    style_start_tag: $ => seq(
      '<',
      alias('style', $.section_tag_name),
      repeat($.attribute),
      '>',
    ),

    style_end_tag: $ => seq(
      '</',
      alias('style', $.section_tag_name),
      '>',
    ),

    element: $ => seq(
      $.start_tag,
      repeat($._node),
      $.end_tag,
    ),

    start_tag: $ => seq(
      '<',
      field('name', $.tag_name),
      repeat($.attribute),
      '>',
    ),

    end_tag: $ => seq(
      '</',
      field('name', $.tag_name),
      '>',
    ),

    self_closing_element: $ => seq(
      '<',
      field('name', $.tag_name),
      repeat($.attribute),
      '/>',
    ),

    void_element: $ => prec(5, seq(
      '<',
      field('name', $.void_tag_name),
      repeat($.attribute),
      optional('/'),
      '>',
    )),

    tag_name: _ => /[A-Za-z][A-Za-z0-9_.:-]*/,

    void_tag_name: _ => choice(
      'area',
      'base',
      'br',
      'col',
      'embed',
      'hr',
      'img',
      'input',
      'link',
      'meta',
      'param',
      'source',
      'track',
      'wbr',
    ),

    attribute: $ => choice(
      $.event_attribute,
      $.normal_attribute,
    ),

    normal_attribute: $ => seq(
      field('name', $.attribute_name),
      optional(seq(
        '=',
        field('value', choice(
          $.quoted_attribute_value,
          $.unquoted_attribute_value,
          $.interpolation,
        )),
      )),
    ),

    event_attribute: $ => seq(
      '@',
      field('name', $.event_name),
      repeat(seq(
        ':',
        field('modifier', $.event_modifier),
      )),
      optional(seq(
        '=',
        field('value', $.interpolation),
      )),
    ),

    attribute_name: _ => /[A-Za-z_:][A-Za-z0-9_.:-]*/,
    event_name: _ => token.immediate(/[A-Za-z_][A-Za-z0-9_-]*/),
    event_modifier: _ => token.immediate(/[A-Za-z_][A-Za-z0-9_-]*/),
    unquoted_attribute_value: _ => /[^<>{}"'=\s]+/,

    quoted_attribute_value: $ => choice(
      seq(
        '"',
        repeat($._attribute_node),
        '"',
      ),
      seq(
        "'",
        repeat($._attribute_node),
        "'",
      ),
    ),

    _attribute_node: $ => choice(
      $.attribute_if_statement,
      $.attribute_unless_statement,
      $.attribute_case_statement,
      $.attribute_for_statement,
      $.interpolation,
      $.attribute_text,
    ),

    attribute_text: _ => /[^<>{}"']+/,

    interpolation: $ => seq(
      '{',
      field('value', $.expression_content),
      '}',
    ),

    if_statement: $ => seq(
      $.if_start,
      repeat($._node),
      repeat($.else_if_block),
      optional($.else_block),
      $.if_end,
    ),

    if_start: $ => seq(
      '{',
      '#',
      alias(token.immediate('if'), $.directive_name),
      field('condition', $.expression_content),
      '}',
    ),

    else_if_block: $ => seq(
      $.else_if_start,
      repeat($._node),
    ),

    else_if_start: $ => seq(
      '{',
      ':',
      alias(token.immediate('else'), $.directive_name),
      alias('if', $.directive_name),
      field('condition', $.expression_content),
      '}',
    ),

    else_block: $ => seq(
      $.else_start,
      repeat($._node),
    ),

    else_start: $ => seq(
      '{',
      ':',
      alias(token.immediate('else'), $.directive_name),
      '}',
    ),

    if_end: $ => seq(
      '{',
      '/',
      alias(token.immediate('if'), $.directive_name),
      '}',
    ),

    unless_statement: $ => seq(
      $.unless_start,
      repeat($._node),
      optional($.else_block),
      $.unless_end,
    ),

    unless_start: $ => seq(
      '{',
      '#',
      alias(token.immediate('unless'), $.directive_name),
      field('condition', $.expression_content),
      '}',
    ),

    unless_end: $ => seq(
      '{',
      '/',
      alias(token.immediate('unless'), $.directive_name),
      '}',
    ),

    case_statement: $ => seq(
      $.case_start,
      repeat($.when_block),
      optional($.case_else_block),
      $.case_end,
    ),

    case_start: $ => seq(
      '{',
      '#',
      alias(token.immediate('case'), $.directive_name),
      field('value', $.expression_content),
      '}',
    ),

    when_block: $ => seq(
      $.when_start,
      repeat($._node),
    ),

    when_start: $ => seq(
      '{',
      ':',
      alias(token.immediate('when'), $.directive_name),
      field('values', $.expression_content),
      '}',
    ),

    case_else_block: $ => seq(
      $.else_start,
      repeat($._node),
    ),

    case_end: $ => seq(
      '{',
      '/',
      alias(token.immediate('case'), $.directive_name),
      '}',
    ),

    for_statement: $ => seq(
      $.for_start,
      repeat($._node),
      optional($.for_else_block),
      $.for_end,
    ),

    for_start: $ => seq(
      '{',
      '#',
      alias(token.immediate('for'), $.directive_name),
      field('clause', $.expression_content),
      '}',
    ),

    for_else_block: $ => seq(
      $.else_start,
      repeat($._node),
    ),

    for_end: $ => seq(
      '{',
      '/',
      alias(token.immediate('for'), $.directive_name),
      '}',
    ),

    svg_directive: $ => seq(
      '{',
      '#',
      alias(token.immediate('svg'), $.directive_name),
      field('path', $.expression_content),
      '}',
    ),

    attribute_if_statement: $ => seq(
      $.if_start,
      repeat($._attribute_node),
      repeat($.attribute_else_if_block),
      optional($.attribute_else_block),
      $.if_end,
    ),

    attribute_else_if_block: $ => seq(
      $.else_if_start,
      repeat($._attribute_node),
    ),

    attribute_else_block: $ => seq(
      $.else_start,
      repeat($._attribute_node),
    ),

    attribute_unless_statement: $ => seq(
      $.unless_start,
      repeat($._attribute_node),
      optional($.attribute_else_block),
      $.unless_end,
    ),

    attribute_case_statement: $ => seq(
      $.case_start,
      repeat($.attribute_when_block),
      optional($.attribute_case_else_block),
      $.case_end,
    ),

    attribute_when_block: $ => seq(
      $.when_start,
      repeat($._attribute_node),
    ),

    attribute_case_else_block: $ => seq(
      $.else_start,
      repeat($._attribute_node),
    ),

    attribute_for_statement: $ => seq(
      $.for_start,
      repeat($._attribute_node),
      optional($.attribute_for_else_block),
      $.for_end,
    ),

    attribute_for_else_block: $ => seq(
      $.else_start,
      repeat($._attribute_node),
    ),

    text: _ => /[^<>{}]+/,
  },
});
