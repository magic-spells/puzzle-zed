# Puzzle for Zed

Puzzle single-file component support for [Zed](https://zed.dev), backed by a
standalone Tree-sitter grammar.

The grammar tracks the **Puzzle 0.8.0** template grammar.

## Features

- HTML-like highlighting in `<puzzle-view>` and `<puzzle-skeleton>`
- JavaScript in `<script>` and TypeScript in `<script lang="ts">`
- CSS in `<style>` and `<style scoped>`
- Template expressions (D176) parsed as JavaScript-shaped expressions in every
  position — interpolations, attribute values, component props, marker
  arguments, block headers, `{:when}` values, the `{#for}` header and
  `@event` handlers: calls, method calls, arrow-function arguments, template
  literals, object and array literals, `??` and `?.`
- The function library scoped as builtins when called bare (`currency(price)`,
  `t('cart.count', { count: n })`, `date(d, 'short')`, `timeago(at)`, …),
  along with the JavaScript globals (`Math.round`, `Number`, `parseInt`, …);
  an app's own registered functions scope as ordinary functions
- `@event` values as plain calls: a handler is a call to one of the view's
  methods with data arguments (`@click={ select(item.id) }`,
  `@input={ setName(event.target.value) }`, or a ternary choosing between two
  handlers). The grammar parses its bare callees as `handler_function_name`,
  scoped as ordinary functions — the handler and every call in its arguments,
  with no library builtin and no `raw`/`newline_to_br` rule, even when a name
  matches a library function
- Puzzle conditionals, case blocks, collection/range loops, and SVG directives
- `{#raw}` blocks: structural HTML inside, inert braces, no markers. The body
  is one span, so a `<puzzle-view>…</puzzle-view>` or `<script>…</script>`
  sample inside it ends neither the block nor the section
- HTML void elements (`area base br col embed hr img input link meta source
  track wbr`) with or without the slash: `<br>`, `<br/>` and
  `<input value={ x } readonly>` are whole elements and never nest, so in
  `<p>a<br>b</p>` the `</p>` closes the `<p>`. A void closing tag (`</br>`,
  `</input>`) is a compile error: it parses as a `void_end_tag` that closes
  nothing and is flagged invalid where it stands, in a raw body too
- A second `{:else}` in one `{#if}`, `{#unless}`, `{#case}` or `{#for}` is a
  compile error: it parses as a `duplicate_else` node and is flagged invalid,
  and the rest of the block still parses
- Escaped braces: `\{` and `\}` are literal text, never an interpolation, and
  are scoped as escapes — in template text and in quoted attribute values, but
  deliberately not inside `{#raw}`, where the bytes stay verbatim
- A single `|` anywhere in a template expression — text, attribute value,
  prop, marker argument, block header or `@event` handler — is flagged invalid: there
  is no pipe and no bitwise OR. `||` is logical OR, and a `|` inside a string
  or template literal is text. `<script>` and `<style>` are untouched
- `this` is flagged invalid in every template expression, `@event` handlers included
  (`x.this` is an ordinary property)
- `raw()` and `newline_to_br()` scoped as builtins only as the whole of a text
  interpolation (parentheses aside); in an attribute value, prop, marker
  argument, `key=`/`flip=`, a block header, nested inside another call or
  operator, or directly inside a text-only element (`<textarea>`, `<title>`, …)
  or `<svg>`/`<math>`, they are flagged invalid
- Composition markers (`<Children>`, `<Slot>`, `<Portal>`, `<Snippet>`) scoped
  apart from user components, with the lowercase spellings flagged
- Snippets (D166): `<Snippet user>` bare parameters, `<Snippet fits="row" …>`,
  and brace-valued marker arguments — `<Children user={ user }>`,
  `<Slot name="row" user={ user }>`
- Distinct component tags — including dotted component-family member paths
  such as `<Frame.Wrapper>` (D167) — event/action names, and `@` sigils, plus the
  fourteen legal event modifiers scoped apart from unknown ones. A tag is a
  component when its first character is anything but an ASCII lowercase
  letter, so `<Übersicht>`, `<概要>` and `<_x>` are components and
  `<straße-karte>` is an element
- Bracket matching, auto-indentation, and a component-aware outline
- Tailwind CSS language-server opt-in for `.pzl` files

The parser is deliberately kept in this repository instead of hiding the
language definition inside Zed-specific code. It can also be reused by editors
with Tree-sitter support, including Neovim and Helix.

## Install as a development extension

The checked-in `extension.toml` points its grammar at this local checkout. The
repository must contain at least one Git commit because Zed loads grammars by
Git revision.

1. Open Zed's Extensions page.
2. Run **zed: install dev extension** from the command palette, or click
   **Install Dev Extension**.
3. Select this `puzzle-zed` folder.
4. Open a `.pzl` file. Zed should select **Puzzle** automatically.

Zed requires Rust installed through
[rustup](https://rustup.rs/) when building development extensions.

## Development

```sh
npm install
npm run generate
npm test
npm run test:examples
npm run test:conformance
```

`npm test` runs focused Tree-sitter corpus fixtures and the highlight
assertions in `test/highlight` (checked against `queries/highlights.scm`).
`npm run test:conformance` places every valid case of the shared expression
table (`packages/puzzle-lang/conformance/expressions-parse.json` in the
monorepo, or `PUZZLE_CONFORMANCE`) in each expression position and fails on a
syntax error or an `@error` capture.
`npm run test:examples` parses every `.pzl` file under the Puzzle monorepo's
`packages/puzzle/examples` (found at `../../puzzle`, with the older sibling
layouts as fallbacks) and fails if any syntax error is produced. If Puzzle lives
elsewhere, set `PUZZLE_EXAMPLES_DIR`. The Tree-sitter CLI caches compiled
parsers by grammar name, so when testing more than one checkout of this grammar
give each its own `TREE_SITTER_LIBDIR`.

## Publishing

Before publishing, change the grammar repository in `extension.toml` from the
local `file://` URL to:

```toml
[grammars.puzzle]
repository = "https://github.com/magic-spells/puzzle-zed"
commit = "<full commit SHA containing the generated parser>"
```

Then submit the public repository to
[`zed-industries/extensions`](https://github.com/zed-industries/extensions) as
a Git submodule and add its entry to that repository's `extensions.toml`.

## Intentional limits

This extension provides structural parsing, highlighting, injections, outline,
and editing behavior. Compiler-backed diagnostics, completion, navigation, and
formatting would require a Puzzle language server. The Puzzle compiler remains
the source of truth for semantic validation.

Beyond the markup rules above (void closing tags, a second `{:else}`), the
grammar parses a template expression far enough to flag the three
things an editor can see on its own — a `|`, `this`, and a misplaced `raw()`
or `newline_to_br()` — and deliberately no further. Which methods a value
has (the method table), the excluded operators (bitwise operators, `**` and
the rest still parse and highlight as operators), which names resolve, and
function arity are the compiler's to report. A regular-expression literal is
not part of the language and does not parse.

Known limitations:

- `raw()`/`newline_to_br()` is flagged inside a text-only or foreign element
  only when its interpolation is a direct child of that element; one nested
  deeper (under an `{#if}`, say) is left to the compiler, as is one wrapped in
  parentheses inside another expression (`a + (raw(x))`).
- Inside the body of an inline block in a quoted attribute value
  (`class="{#if on}…{/if}"`), text may not contain either quote character: the
  body does not know which quote encloses the value, so an apostrophe there
  (`title="{#if on}it's on{/if}"`) is a parse error. Text directly in a quoted
  value is fine — `hint="the view's data()"` and `class="[&>svg]:size-4"`
  parse as ordinary text.

## License

MIT
