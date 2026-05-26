# Topic Template

Use this template when adding or expanding a topic folder.

```text
topic-name/
  README.md
  examples...
```

## README Structure

```md
# Topic Name

## Why This Matters
Explain where the topic appears in real programs.

## Mental Model
Describe the concept in plain language before showing syntax.

## Syntax
Show the smallest correct version.

## Core Examples
Link to runnable files in this folder.

## Important Details
Cover edge cases, memory behavior, type rules, and constraints.

## Common Mistakes
Show what goes wrong and how to fix it.

## Real-World Usage
Connect the topic to systems, embedded, CLI tools, parsers, data structures, or
application code.

## Practice Bridge
If the topic maps well to problem solving, link a small number of focused
LeetCode-style practice problems and state what each one reinforces.

## Exercises
Give small tasks that require editing or extending the examples.

## Review Questions
Ask questions that reveal whether the reader really understood the topic.
```

## Example File Rules

- One concept per file when possible.
- Include a short comment at the top explaining the goal.
- Keep the example compilable by itself.
- Use safe input and memory patterns unless the file is intentionally
  demonstrating a mistake.
- If the example contains a deliberate risk, name it clearly.
