# tree-sitter-zit

**zit** grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter) - an enhanced task tracking format based on [[x]it!](https://xit.jotaen.net/)

This grammar supports both the original xit format and zit (enhanced xit) with additional features like task IDs, time tracking, dependencies, assignees, recurring tasks, Linear/Jira/GitHub issue linking, and more. See [SPEC.md](./SPEC.md) for the complete zit specification.

## Installation

You need to have a proper [tree-sitter setup first](https://github.com/nvim-treesitter/nvim-treesitter#installation).

## Development

### Running Tests

The grammar includes comprehensive tests in the `test/corpus/` directory covering all xit and zit features:

```bash
# Run all tests
npm test

# Or using tree-sitter CLI directly
tree-sitter test

# Run a specific test file
tree-sitter test -f checkboxes
tree-sitter test -f task_ids
```

### Building the Grammar

```bash
# Generate parser from grammar.js
tree-sitter generate

# Build WASM for web usage
tree-sitter build --wasm

# Test the parser interactively
tree-sitter parse example.zit
```
