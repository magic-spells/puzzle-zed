# Puzzle for Zed

Puzzle single-file component support for [Zed](https://zed.dev), backed by a
standalone Tree-sitter grammar.

The grammar tracks the **Puzzle 0.8.0** template grammar.

## Features

- HTML-like highlighting in `<puzzle-view>` and `<puzzle-skeleton>`
- JavaScript in `<script>` and TypeScript in `<script lang="ts">`
- CSS in `<style>` and `<style scoped>`
- TypeScript-aware highlighting inside Puzzle expressions
- Puzzle conditionals, case blocks, collection/range loops, and SVG directives
- `{#raw}` blocks: structural HTML inside, inert braces, no markers
- Escaped braces: `\{` and `\}` are literal text, never an interpolation, and
  are scoped as escapes — in template text and in quoted attribute values, but
  deliberately not inside `{#raw}`, where the bytes stay verbatim
- Formatter chains (`{ price | currency('$') }`), told apart from `||` and from
  a `|` inside a string or parentheses. A formatter name is an identifier,
  optionally kebab-case (`my-format`); anything else after a pipe
  (`{ w / 2 | 0 }`, `{ mask | bit-1 }`) is a syntax error, as it is in the
  compiler
- Formatter chains in every value position (D173) — brace-only attribute
  values (`title={ price | currency }`), component props and marker
  arguments. Block headers are conditions, not values: a pipe in an `{#if}`,
  `{:else if}`, `{#unless}` or `{#case}` header (an inline one inside a quoted
  attribute value included), a `{#for}` header or a `{:when}` value is a
  compile error and is flagged invalid — compute the value in `data()` and
  test that field. `@event` handler bodies are JavaScript, but a template has
  no bitwise OR (D176), so a pipe in a handler (`@click={ a | b }`) is flagged
  the same way. `||` stays logical OR everywhere. Object literals in formatter
  arguments (`{ 'cart.count' | t({ count: n }) }`) balance as JavaScript
- The markup formatters `raw` and `newline_to_br` (D174) scoped as formatters
  only as the last link of a text interpolation, with no arguments; after
  another formatter, with arguments, in an attribute value, prop or marker
  argument, or directly inside a text-only element (`<textarea>`, `<title>`, …)
  or `<svg>`/`<math>`, they are flagged invalid
- Composition markers (`<Children>`, `<Slot>`, `<Portal>`, `<Snippet>`) scoped
  apart from user components, with the lowercase spellings flagged
- Snippets (D166): `<Snippet user>` bare parameters, `<Snippet fits="row" …>`,
  and brace-valued marker arguments — `<Children user={ user }>`,
  `<Slot name="row" user={ user }>`
- Distinct component tags — including dotted component-family member paths
  such as `<Frame.Wrapper>` (D167) — event/action names, and `@` sigils, plus the
  fourteen legal event modifiers scoped apart from unknown ones
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
```

`npm test` runs focused Tree-sitter corpus fixtures and the highlight
assertions in `test/highlight` (checked against `queries/highlights.scm`).
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

Template values are the D176 data language — paths, literals and operators,
with `.size` for a count — and are highlighted with TypeScript's expression
grammar. The grammar does not check what a value may contain: `.length`, a
call on data (`draft.trim()`, `Math.round(x)`), an arrow function, a template
literal, a regex literal or a nested `|` (`{ (a | b) }`) all parse and
highlight as TypeScript, and the compiler reports them. `this.` chains and
`@event` handler bodies are JavaScript by design.

Known limitations:

- A markup formatter is flagged inside a text-only or foreign element only
  when its interpolation is a direct child of that element; one nested deeper
  (under an `{#if}`, say) is left to the compiler.
- Inside the body of an inline block in a quoted attribute value
  (`class="{#if on}…{/if}"`), text may not contain either quote character: the
  body does not know which quote encloses the value, so an apostrophe there
  (`title="{#if on}it's on{/if}"`) is a parse error. Text directly in a quoted
  value is fine — `hint="the view's data()"` and `class="[&>svg]:size-4"`
  parse as ordinary text.

## License

MIT
