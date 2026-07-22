#!/bin/sh
set -eu

puzzle_examples_dir=${PUZZLE_EXAMPLES_DIR:-../puzzle/examples}

if [ ! -d "$puzzle_examples_dir" ]; then
  echo "Puzzle examples not found at: $puzzle_examples_dir" >&2
  echo "Set PUZZLE_EXAMPLES_DIR to the framework's examples directory." >&2
  exit 2
fi

rg --files "$puzzle_examples_dir" -g '*.pzl' -0 \
  | xargs -0 tree-sitter parse --quiet --stat
