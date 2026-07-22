# Puzzle for Zed

Puzzle single-file component support for [Zed](https://zed.dev), backed by a
standalone Tree-sitter grammar.

## Features

- HTML-like highlighting in `<puzzle-view>` and `<puzzle-skeleton>`
- JavaScript in `<scripts>` and TypeScript in `<scripts lang="ts">`
- CSS in `<styles>` and `<styles scoped>`
- TypeScript-aware highlighting inside Puzzle expressions
- Puzzle conditionals, case blocks, collection/range loops, and SVG directives
- Distinct component tags, event/action names, modifiers, and `@` sigils
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

`npm test` runs focused Tree-sitter corpus fixtures. `npm run test:examples`
parses every `.pzl` file in the sibling Puzzle framework repository and fails
if any syntax error is produced. If Puzzle lives elsewhere, set
`PUZZLE_EXAMPLES_DIR`.

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

## License

MIT
