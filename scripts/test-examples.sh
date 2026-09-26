#!/bin/sh
set -eu

# The framework moved into a monorepo package (D162), so the examples now sit at
# packages/puzzle/examples. The editor repos live one level down, under
# editors/, so the monorepo is ../../puzzle; the sibling and pre-monorepo paths
# stay as fallbacks. PUZZLE_EXAMPLES_DIR overrides all of them.
if [ -n "${PUZZLE_EXAMPLES_DIR:-}" ]; then
  puzzle_examples_dir=$PUZZLE_EXAMPLES_DIR
elif [ -d ../../puzzle/packages/puzzle/examples ]; then
  puzzle_examples_dir=../../puzzle/packages/puzzle/examples
elif [ -d ../puzzle/packages/puzzle/examples ]; then
  puzzle_examples_dir=../puzzle/packages/puzzle/examples
else
  puzzle_examples_dir=../puzzle/examples
fi

if [ ! -d "$puzzle_examples_dir" ]; then
  echo "Puzzle examples not found at: $puzzle_examples_dir" >&2
  echo "Set PUZZLE_EXAMPLES_DIR to the framework's examples directory." >&2
  exit 2
fi

rg --files "$puzzle_examples_dir" -g '*.pzl' -0 \
  | xargs -0 tree-sitter parse --quiet --stat
