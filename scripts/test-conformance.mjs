#!/usr/bin/env node
// Proves the grammar and highlight queries raise no false alarm on the
// expression language (D176). Every VALID case in the shared conformance
// table (packages/puzzle-lang/conformance/expressions-parse.json in the Puzzle
// monorepo) is placed in each expression position — text, a brace-only and a
// quoted attribute value, an {#if} header, a {#for} collection, a {:when}
// value, and an @event value for the handler cases — and each file must
// parse with no ERROR or MISSING node and pick up no @error capture from
// queries/highlights.scm.
//
// The table is found at ../../puzzle (the editor repos live under editors/ in
// the monorepo), with the sibling layout as a fallback; PUZZLE_CONFORMANCE
// names the JSON file directly.
import { spawnSync } from 'node:child_process';
import { existsSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';

const rel = 'packages/puzzle-lang/conformance/expressions-parse.json';
const candidates = [
  process.env.PUZZLE_CONFORMANCE,
  join('..', '..', 'puzzle', rel),
  join('..', 'puzzle', rel),
].filter(Boolean);
const tablePath = candidates.find(p => existsSync(p));
if (!tablePath) {
  console.error(`expressions-parse.json not found (tried ${candidates.join(', ')}).`);
  console.error('Set PUZZLE_CONFORMANCE to the file.');
  process.exit(2);
}

const { cases } = JSON.parse(readFileSync(tablePath, 'utf8'));
const valid = cases.filter(c => c.ok);

// An @event case only makes sense in a handler, and an `argument` case (an
// arrow function at the top level) only as a call argument.
function placements(c) {
  if (c.handler) return { handler: s => `<b @click={ ${s} }>k</b>` };
  if (c.argument) {
    return {
      argument: s => `{ f(${s}) }`,
      attributeArgument: s => `<b title={ f(${s}) }>k</b>`,
    };
  }
  const forms = {
    text: s => `<p>{ ${s} }</p>`,
    attribute: s => `<b title={ ${s} }>k</b>`,
    if: s => `{#if ${s}}k{/if}`,
    for: s => `{#for x in ${s}}<i></i>{/for}`,
    when: s => `{#case k}{:when ${s}}k{/case}`,
  };
  if (!c.src.includes('"')) forms.quoted = s => `<b class="x { ${s} }">k</b>`;
  return forms;
}

const dir = mkdtempSync(join(tmpdir(), 'puzzle-zed-conformance-'));
const files = [];
valid.forEach((c, i) => {
  for (const [name, wrap] of Object.entries(placements(c))) {
    const file = join(dir, `${String(i).padStart(3, '0')}-${name}.pzl`);
    writeFileSync(file, `<puzzle-view>\n${wrap(c.src)}\n</puzzle-view>\n`);
    files.push({ file, c, name });
  }
});

const bin = 'tree-sitter';
let failed = 0;
try {
  // --quiet prints only the files that hold an ERROR or MISSING node.
  const parsed = run([bin, 'parse', '--quiet', ...files.map(f => f.file)]);
  for (const line of parsed.split('\n').filter(l => l.includes('.pzl'))) {
    failed++;
    report('syntax error', line.trim().split(/\s+/)[0], line.trim());
  }
  const queried = run([bin, 'query', 'queries/highlights.scm', ...files.map(f => f.file)]);
  // An empty report means the query never ran, not that nothing was flagged.
  if (!queried.includes('capture:')) throw new Error('tree-sitter query produced no captures');
  let current = null;
  for (const line of queried.split('\n')) {
    if (line && !line.startsWith(' ')) current = line.trim();
    const m = line.match(/capture: \d+ - error, .*text: `(.*)`/);
    if (m) {
      failed++;
      report('@error capture', current, `\`${m[1]}\``);
    }
  }
} finally {
  rmSync(dir, { recursive: true, force: true });
}

console.log(`${valid.length} valid cases in ${files.length} placements from ${tablePath}: ${failed} false alarm(s)`);
process.exit(failed ? 1 : 0);

// `tree-sitter parse` exits non-zero when a file has a syntax error; the
// report on stdout is what matters, so the status is not checked here.
function run(argv) {
  const r = spawnSync('npx', argv, { encoding: 'utf8', maxBuffer: 1 << 28, stdio: ['ignore', 'pipe', 'inherit'] });
  if (r.error) throw r.error;
  return r.stdout;
}

function report(kind, file, detail) {
  const f = files.find(x => x.file === file);
  const what = f ? `${JSON.stringify(f.c.src)} as ${f.name}` : file;
  console.error(`${kind}: ${what} — ${detail}`);
}
