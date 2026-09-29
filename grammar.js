/**
 * @file Tree-sitter grammar for Puzzle single-file components
 * @author Magic Spells
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Binding power of the expression operators, JavaScript's order. The
// expression language (D176) has only some of these operators; the rest —
// the bitwise ones, `**` — still parse, so a stray one reads as one operator
// the compiler reports instead of an ERROR node that derails the tag around
// it. `|` is among them because a single '|' is the one spelling the
// highlight queries flag everywhere.
const PREC = {
  ternary: 1,
  coalesce: 2,
  or: 3,
  and: 4,
  bitor: 5,
  bitxor: 6,
  bitand: 7,
  equality: 8,
  relational: 9,
  shift: 10,
  additive: 11,
  multiplicative: 12,
  exponent: 13,
  unary: 14,
  call: 15,
  member: 16,
};

const commaSep1 = rule => seq(rule, repeat(seq(',', rule)));
// A list that may end with one trailing comma, as JavaScript allows in
// arrays, objects, arguments and arrow parameters.
const trailingCommaSep = rule => optional(seq(commaSep1(rule), optional(',')));

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
    // `(x)` is a parenthesized expression until a `=>` makes it an arrow
    // function's parameter list.
    [$._primary_expression, $._arrow_parameter],
  ],

  externals: $ => [
    $.comment,
    $.script_content,
    $.style_content,
    $.inline_comment,
    $.block_comment,
    // The {#svg …} path: one opaque token, balanced like an expression, that
    // ends at the closing '}'.
    $.directive_expression,
    // Literal text inside {#raw} … {/raw} (D150).
    $.raw_text,
    // A brace-delimited attribute value inside a raw body. Its bytes are
    // literal, but its END is found with the same JS-aware balanced scan the
    // compiler uses, so a '}' inside a string, regex or comment does not close
    // it.
    $.raw_brace_value,
    // The text of a template literal between its backticks and `${ }`
    // substitutions. External because whitespace is text there, not extras.
    $._template_chars,
    // `?.`, except before a digit: `a?.5:1` is a conditional, as in
    // JavaScript. Tree-sitter's lexer has no lookahead, so the scanner owns it.
    $.optional_chain,
  ],

  extras: $ => [
    // JavaScript's whitespace, which is wider than the ASCII '\s': a no-break
    // space, U+3000 or a BOM between two operands is still whitespace.
    /[\s\u00A0\u1680\u2000-\u200A\u2028\u2029\u202F\u205F\u3000\uFEFF]+/,
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

    // An @event value is a call to one of the view's handlers — the whole
    // value, or each branch of a top-level conditional (D176 rule 7) — whose
    // arguments are ordinary template expressions with `event` in scope. It
    // parses as the same expression every other position does.
    event_handler: $ => seq(
      '{',
      field('value', $._expression),
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

    // { expr } — in template text, in a quoted or brace-only attribute value,
    // a component prop and a marker argument. The value is one template
    // expression (D176): JavaScript-shaped, parsed by the rules at the end of
    // this grammar.
    interpolation: $ => seq(
      '{',
      field('value', $._expression),
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
      field('condition', $._expression),
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
      field('condition', $._expression),
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
      field('condition', $._expression),
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
      field('value', $._expression),
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
      field('value', $._expression),
      repeat(seq(',', field('value', $._expression))),
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
      $._for_clause,
      '}',
    ),

    // `item in items` or the range `from...to`, each with an optional
    // `, counter`. The item and counter are bindings, not expressions.
    //
    // `1...5` lexes as the number `1.` (JavaScript's trailing-dot form) and
    // then `..`, because the lexer has no lookahead to stop the number before
    // a dot that belongs to the range. So `..` after a number is the range
    // operator too; `a..b` anywhere else is not a range the compiler accepts.
    _for_clause: $ => choice(
      seq(
        field('item', alias($.identifier, $.loop_binding)),
        'in',
        field('collection', $._expression),
        optional(seq(',', field('counter', alias($.identifier, $.loop_binding)))),
      ),
      seq(
        field('from', $._expression),
        choice('...', '..'),
        field('to', $._expression),
        optional(seq(',', field('counter', alias($.identifier, $.loop_binding)))),
      ),
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
      field('path', alias($.directive_expression, $.svg_path)),
      '}',
    ),

    // ----- {#raw} … {/raw} (D150) -------------------------------------------
    // A raw block turns the template lexer off for its body. Braces are inert
    // there — no interpolation, no block tags, no expressions, no @event
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

    // ----- Template expressions (D176) --------------------------------------
    // Every expression position — interpolations, attribute values, props,
    // marker arguments, block headers, {:when} values, the {#for} header and
    // @event handlers — parses as one JavaScript-shaped expression. The tree
    // is what lets the highlight queries flag the three things an editor can
    // see without the compiler: a single `|` (there is no pipe and no bitwise
    // OR), `this`, and `raw()`/`newline_to_br()` anywhere but the whole of a
    // text interpolation. The grammar is deliberately a little wider than the
    // language — bitwise operators and `**` parse — and everything the
    // compiler decides (the method table, the excluded operators, which names
    // resolve) is left to the compiler.
    _expression: $ => choice(
      $._primary_expression,
      $.unary_expression,
      $.binary_expression,
      $.ternary_expression,
    ),

    _primary_expression: $ => choice(
      $.identifier,
      $.this,
      $.number,
      $.string,
      $.template_string,
      $.array,
      $.object,
      $.parenthesized_expression,
      $.member_expression,
      $.subscript_expression,
      $.call_expression,
    ),

    // JavaScript's ID_Start / ID_Continue, plus '$', '_' and the two joiners.
    // `true`, `null`, `undefined`, `NaN` and friends are identifiers here; the
    // highlight queries tell them apart by name.
    identifier: _ => /[\p{ID_Start}_$][\p{ID_Continue}$\u200C\u200D]*/,

    // Not an identifier in a template (D176 rule 7). It parses — in every
    // position, arrow parameters and object shorthand included — so the
    // highlight queries can flag it. `x.this` is a property, not this node.
    this: _ => 'this',

    // Decimal only, with JavaScript's leading- and trailing-dot forms.
    number: _ => token(choice(
      /\d+(\.\d*)?([eE][+-]?\d+)?/,
      /\.\d+([eE][+-]?\d+)?/,
    )),

    // One token each; a backslash-newline is a line continuation.
    string: _ => token(choice(
      /'([^'\\\r\n]|\\(.|\r?\n))*'/,
      /"([^"\\\r\n]|\\(.|\r?\n))*"/,
    )),

    template_string: $ => seq(
      '`',
      repeat(choice($._template_chars, $.template_substitution)),
      '`',
    ),

    template_substitution: $ => seq(
      '${',
      $._expression,
      '}',
    ),

    array: $ => seq(
      '[',
      trailingCommaSep($._expression),
      ']',
    ),

    object: $ => seq(
      '{',
      trailingCommaSep(choice(
        $.pair,
        alias($.identifier, $.shorthand_property_identifier),
        $.this,
      )),
      '}',
    ),

    pair: $ => seq(
      field('key', choice(alias($.identifier, $.property_identifier), $.string)),
      ':',
      field('value', $._expression),
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')',
    ),

    member_expression: $ => prec(PREC.member, seq(
      field('object', $._primary_expression),
      choice('.', $.optional_chain),
      field('property', alias($.identifier, $.property_identifier)),
    )),

    subscript_expression: $ => prec(PREC.member, seq(
      field('object', $._primary_expression),
      optional($.optional_chain),
      '[',
      field('index', $._expression),
      ']',
    )),

    // The callee's shape is decided by the parser, not by the highlight
    // queries, so each name gets exactly one capture: a bare `name(…)` is a
    // function_name (a library or app function; in an @event value, the
    // view's handler), `a.m(…)` puts a method_name in the member_expression,
    // and any other callee is an ordinary expression.
    call_expression: $ => prec(PREC.call, seq(
      field('function', choice(
        alias($.identifier, $.function_name),
        alias($._method, $.member_expression),
        $.parenthesized_expression,
        $.call_expression,
        $.subscript_expression,
        $.this,
        $.number,
        $.string,
        $.template_string,
        $.array,
      )),
      field('arguments', $.arguments),
    )),

    _method: $ => seq(
      field('object', $._primary_expression),
      choice('.', $.optional_chain),
      field('property', alias($.identifier, $.method_name)),
    ),

    // Arrow functions are legal only as call arguments (D176 rule 1).
    arguments: $ => seq(
      '(',
      trailingCommaSep(choice($._expression, $.arrow_function)),
      ')',
    ),

    arrow_function: $ => seq(
      field('parameters', choice($._arrow_parameter, $.formal_parameters)),
      '=>',
      field('body', $._expression),
    ),

    _arrow_parameter: $ => choice(
      alias($.identifier, $.parameter),
      $.this,
    ),

    formal_parameters: $ => seq(
      '(',
      trailingCommaSep($._arrow_parameter),
      ')',
    ),

    unary_expression: $ => prec.left(PREC.unary, seq(
      field('operator', choice('!', '-', '+', '~')),
      field('argument', $._expression),
    )),

    binary_expression: $ => choice(
      ...[
        ['??', PREC.coalesce],
        ['||', PREC.or],
        ['&&', PREC.and],
        ['|', PREC.bitor],
        ['^', PREC.bitxor],
        ['&', PREC.bitand],
        ['==', PREC.equality],
        ['!=', PREC.equality],
        ['===', PREC.equality],
        ['!==', PREC.equality],
        ['<', PREC.relational],
        ['<=', PREC.relational],
        ['>', PREC.relational],
        ['>=', PREC.relational],
        ['<<', PREC.shift],
        ['>>', PREC.shift],
        ['>>>', PREC.shift],
        ['+', PREC.additive],
        ['-', PREC.additive],
        ['*', PREC.multiplicative],
        ['/', PREC.multiplicative],
        ['%', PREC.multiplicative],
      ].map(([operator, precedence]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))),
      prec.right(PREC.exponent, seq(
        field('left', $._expression),
        field('operator', '**'),
        field('right', $._expression),
      )),
    ),

    ternary_expression: $ => prec.right(PREC.ternary, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression),
    )),
  },
});
