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
    // Pipe-free expressions — an @event handler body and the {#svg …} path —
    // aliased to expression_content everywhere they appear. They differ from a
    // value expression only in that a top-level '|' is NOT a formatter pipe
    // there: a handler body is plain JavaScript, so `@click={ a | b }` is a
    // bitwise OR.
    $.directive_expression,
    // One formatter argument, aliased to expression_content so the TypeScript
    // injection covers it. Stops at a top-level ',' or ')'.
    $.formatter_argument,
    // Literal text inside {#raw} … {/raw} (D150).
    $.raw_text,
    // A brace-delimited attribute value inside a raw body. Its bytes are
    // literal, but its END is found with the same JS-aware balanced scan the
    // compiler uses, so a '}' inside a string, regex or comment does not close
    // it.
    $.raw_brace_value,
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
      $.raw_block,
      $.interpolation,
      $.void_element,
      $.self_closing_element,
      $.element,
      $.escaped_brace,
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
        field('value', $.event_handler),
      )),
    ),

    // An @event value is a handler body, not a value position: it takes no
    // formatter chain, so a top-level '|' stays JavaScript (bitwise OR).
    event_handler: $ => seq(
      '{',
      field('value', alias($.directive_expression, $.expression_content)),
      '}',
    ),

    // A leading ':' is deliberately excluded. Tree-sitter's lexer prefers the
    // longest match, so an attribute name that could start with ':' swallowed
    // the ':prevent' of '@click:prevent' whole and event modifiers never parsed
    // at all. Puzzle has no leading-colon attribute names, so dropping ':' from
    // the first character class is the fix.
    attribute_name: _ => /[A-Za-z_][A-Za-z0-9_.:-]*/,
    event_name: _ => token.immediate(/[A-Za-z_][A-Za-z0-9_-]*/),
    event_modifier: _ => token.immediate(/[A-Za-z_][A-Za-z0-9_-]*/),
    // Must not END on '/', or a self-closing '/>' gets swallowed. The '\{'/'\}'
    // escape reaches an unquoted value too — the compiler routes TokAttrBare
    // through the same parseAttrParts as a quoted value — but an unquoted value
    // is one flat token with no room for a child node, so the escape is folded
    // into the token instead of surfacing as escaped_brace.
    unquoted_attribute_value: _ => /([^<>{}"'=\s]|\\[{}])*([^<>{}"'=\s/]|\\[{}])/,

    quoted_attribute_value: $ => choice(
      seq(
        '"',
        repeat(choice($._attribute_node, alias($._attribute_text_double, $.attribute_text))),
        '"',
      ),
      seq(
        "'",
        repeat(choice($._attribute_node, alias($._attribute_text_single, $.attribute_text))),
        "'",
      ),
    ),

    _attribute_node: $ => choice(
      $.attribute_if_statement,
      $.attribute_unless_statement,
      $.attribute_case_statement,
      $.attribute_for_statement,
      $.interpolation,
      $.escaped_brace,
      $.attribute_text,
    ),

    // Same shape as `text`, plus the enclosing quotes. The compiler routes a
    // quoted value through parseAttrParts, which applies the very same '\{'/'\}'
    // escape and treats a lone '}' as literal. A '\' before a quote is NOT an
    // escape — the quoted-value scan ends the value at the next raw quote byte —
    // so the backslash-pair alternative excludes them and the lone-'\'
    // alternative carries the trailing backslash of `class="C:\"`.
    attribute_text: _ => token(choice(
      /([^{"'\\]|\\[^{}"'\\])+/,
      /\\/,
    )),
    // Directly inside a quoted value, only that value's own quote ends it, so
    // the other quote character and '<'/'>' are ordinary text there:
    // hint="the view's data()" and class="[&>svg]:size-4" are one text run
    // each. Both alias back to attribute_text. The shared attribute_text above
    // still serves the bodies of inline blocks in an attribute value, where
    // the enclosing quote is not known, so an apostrophe inside an inline
    // {#if} body in a double-quoted value is still a known limitation.
    _attribute_text_double: _ => token(choice(
      /([^{"\\]|\\[^{}"\\])+/,
      /\\/,
    )),
    _attribute_text_single: _ => token(choice(
      /([^{'\\]|\\[^{}'\\])+/,
      /\\/,
    )),

    // { expr }, { expr | formatter }, { expr | formatter(arg, arg) | other }.
    // The scanner ends expression_content at the first top-level SINGLE '|', so
    // a logical-OR ('||') and a '|' inside a string, a /a|b/ regex, or any
    // (), [] or {} stay part of the expression. The same chain is legal in every
    // value position (D173 V1): text, quoted and brace-only attribute values,
    // component props and marker arguments — all of which parse as this node.
    // Block headers are conditions, not value positions, and take no chain.
    interpolation: $ => seq(
      '{',
      field('value', $.expression_content),
      repeat($.formatter),
      '}',
    ),

    formatter: $ => seq(
      '|',
      field('name', $.formatter_name),
      optional($.formatter_arguments),
    ),

    // The compiler's isFormatterName: '-' is legal after the first character.
    formatter_name: _ => /[A-Za-z_$][A-Za-z0-9_$-]*/,

    // A formatter chain where the compiler rejects one (D173 V1): every block
    // header — the {#if}, {:else if}, {#unless} and {#case} conditions (inline
    // ones in a quoted attribute value included), a {#for} header (collection
    // or either range bound) and a {:when} value. Formatters are for values,
    // not logic: compute the value in data() and test that field. It parses
    // (no ERROR node) so highlighting can flag the name as invalid. After a
    // rejected pipe the rest of the header — a `, counter` or another {:when}
    // value — still parses, so the one mistake is the one flag.
    _invalid_chain: $ => choice(
      $.invalid_formatter,
      seq(',', $.expression_content),
    ),

    invalid_formatter: $ => seq(
      '|',
      field('name', alias($.formatter_name, $.invalid_formatter_name)),
      optional($.formatter_arguments),
    ),

    formatter_arguments: $ => seq(
      '(',
      optional(seq(
        alias($.formatter_argument, $.expression_content),
        repeat(seq(',', alias($.formatter_argument, $.expression_content))),
      )),
      ')',
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
      repeat($._invalid_chain),
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
      repeat($._invalid_chain),
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
      alias('if', $.directive_name),
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
      repeat($._invalid_chain),
      '}',
    ),

    unless_end: $ => seq(
      '{',
      '/',
      alias('unless', $.directive_name),
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
      repeat($._invalid_chain),
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
      repeat($._invalid_chain),
      '}',
    ),

    case_else_block: $ => seq(
      $.else_start,
      repeat($._node),
    ),

    case_end: $ => seq(
      '{',
      '/',
      alias('case', $.directive_name),
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
      repeat($._invalid_chain),
      '}',
    ),

    for_else_block: $ => seq(
      $.else_start,
      repeat($._node),
    ),

    for_end: $ => seq(
      '{',
      '/',
      alias('for', $.directive_name),
      '}',
    ),

    svg_directive: $ => seq(
      '{',
      '#',
      alias(token.immediate('svg'), $.directive_name),
      field('path', alias($.directive_expression, $.expression_content)),
      '}',
    ),

    // ----- {#raw} … {/raw} (D150) -------------------------------------------
    // A raw block turns the template lexer off for its body. Braces are inert
    // there — no interpolation, no block tags, no formatter pipes, no @event
    // binding, and '\{' is not an escape — but HTML stays structural, so <b>
    // is a real element and <Slot/>, <Portal> and <Card/> are plain elements,
    // NOT composition markers. Raw blocks do not nest: the first valid closer
    // wins. Legal at text positions only, so raw_block is a _node and is
    // deliberately absent from _attribute_node.
    raw_block: $ => seq(
      $.raw_start,
      repeat($._raw_node),
      $.raw_end,
    ),

    // The opener ends at the first '}'. Anything between the keyword and that
    // brace is allowed and ignored: {#raw json} is valid.
    raw_start: $ => seq(
      '{',
      '#',
      alias(token.immediate('raw'), $.directive_name),
      optional($.raw_opener_rest),
      '}',
    ),

    raw_opener_rest: _ => /[^}\s][^}]*/,

    // Whitespace-tolerant, like every other closer: {/raw}, {/ raw }, {/raw }.
    raw_end: $ => seq(
      '{',
      '/',
      alias('raw', $.directive_name),
      '}',
    ),

    _raw_node: $ => choice(
      $.comment,
      $.raw_void_element,
      $.raw_self_closing_element,
      $.raw_element,
      $.raw_text,
    ),

    raw_element: $ => seq(
      $.raw_start_tag,
      repeat($._raw_node),
      $.raw_end_tag,
    ),

    raw_start_tag: $ => seq(
      '<',
      field('name', $.raw_tag_name),
      repeat($.raw_attribute),
      '>',
    ),

    raw_end_tag: $ => seq(
      '</',
      field('name', $.raw_tag_name),
      '>',
    ),

    raw_self_closing_element: $ => seq(
      '<',
      field('name', $.raw_tag_name),
      repeat($.raw_attribute),
      '/>',
    ),

    raw_void_element: $ => prec(5, seq(
      '<',
      field('name', $.void_tag_name),
      repeat($.raw_attribute),
      optional('/'),
      '>',
    )),

    // A separate tag-name token is what keeps the marker highlight queries from
    // firing on <Slot/> or <Portal> inside a raw body.
    raw_tag_name: _ => /[A-Za-z][A-Za-z0-9_.:-]*/,

    // Attribute values never enter interpolation here, and 'ref', 'island',
    // 'key' and 'flip' are ordinary attribute names. The name charset is wide
    // enough to hold a literal '@click' or '{'.
    raw_attribute: $ => seq(
      field('name', $.raw_attribute_name),
      optional(seq(
        '=',
        field('value', choice(
          $.raw_quoted_attribute_value,
          $.raw_brace_value,
          $.raw_unquoted_attribute_value,
        )),
      )),
    ),

    raw_attribute_name: _ => /[^\s<>"'=/]+/,
    // Must not END on '/', or a self-closing '/>' gets swallowed.
    raw_unquoted_attribute_value: _ => /[^<>"'=\s]*[^<>"'=\s/]/,

    raw_quoted_attribute_value: $ => choice(
      seq('"', optional($.raw_attribute_text), '"'),
      seq("'", optional($.raw_attribute_text), "'"),
    ),

    raw_attribute_text: _ => /[^<>"']+/,

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

    // '\{' and '\}' are literal braces: the compiler's lexText drops the
    // backslash and emits the brace, so '\{' never opens an interpolation. The
    // decision is purely local — a backslash escapes only when the very next
    // byte is a brace — so '\\{' is a literal backslash followed by an escaped
    // brace, and there is no way to write a real interpolation after a
    // backslash. Deliberately absent from every {#raw} context: lexRawText does
    // no backslash handling at all, and a raw body's bytes stay verbatim (D150).
    escaped_brace: _ => token(prec(1, /\\[{}]/)),

    // Tree-sitter picks the longest match at a position, so `text` must be
    // unable to swallow the backslash of a '\{' pair or escaped_brace never
    // fires. The first alternative runs ordinary characters plus backslash
    // pairs that are NOT escapes (`C:\Users` stays one token); the second
    // carries a backslash the first cannot — before a brace, before markup, or
    // at end of input — as a one-character token.
    //
    // A lone '}' is ordinary text, not an error: lexText breaks on '<' and '{'
    // only, so `a } b` is literal in the compiler and only '{' needs escaping
    // to be written literally. '{' stays excluded — it always opens an
    // interpolation or a directive.
    text: _ => token(choice(
      /([^<>{\\]|\\[^<>{}\\])+/,
      /\\/,
    )),
  },
});
