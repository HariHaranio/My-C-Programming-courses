
# Operators in C

C provides a rich set of operators grouped by purpose. Below is a concise reference with examples and important notes.

## Categories

- **Arithmetic:** `+`, `-`, `*`, `/`, `%` — integer/floating-point math. `%` is defined only for integers.

- **Unary:** unary `+`, unary `-`, `++` (increment), `--` (decrement), `!` (logical NOT), `~` (bitwise NOT). `++`/`--` have prefix and postfix forms.

- **Relational:** `==`, `!=`, `<`, `>`, `<=`, `>=` — compare values, result is `0` (false) or `1` (true).

- **Logical:** `&&` (AND), `||` (OR), `!` (NOT). `&&` and `||` short-circuit.

- **Bitwise:** `&`, `|`, `^` (XOR), `~`, `<<` (left shift), `>>` (right shift). Operate on integer representations.

- **Assignment:** `=` and compound forms `+=`, `-=`, `*=`, `/=`, `%=`, `&=`, `|=`, `^=`, `<<=`, `>>=`.

- **Conditional (ternary):** `?:` — `cond ? expr1 : expr2`.

- **Sizeof:** `sizeof` — yields the size in bytes (type `size_t`) of an expression or type.

- **Comma operator:** `,` — evaluates left operand, then right; returns right operand's value.

- **Pointer / Address:** `&` (address-of), `*` (dereference). Note `*` is also multiplication depending on context.

- **Member access:** `.` (access member of object), `->` (access member via pointer to struct/union).

- **Cast:** `(type)` — explicit conversion of an expression to another type.

## Precedence & associativity (brief)

Operators have a defined precedence; higher precedence operators bind first. Common order (high→low):

- Unary, multiplicative (`*`, `/`, `%`), additive (`+`, `-`), shifts, relational, equality, bitwise, logical, conditional (`?:`), assignment, comma.

When unsure, use parentheses to make intent explicit.

## Examples

- Arithmetic and assignment:

```c
int a = 5, b = 2;
int c = a + b;   // 7
a += 3;          // a becomes 8
```

- Increment forms:

```c
int x = 5;
int y = ++x; // prefix: x becomes 6, y == 6
int z = x++; // postfix: z == 6, x becomes 7
```

- Conditional and logical:

```c

```
## Important notes

- Be careful with side effects: modifying the same object multiple times without intervening sequence points can cause undefined behavior (e.g., `i = i++ + 1;`).
- Right-shift of signed negative values and many other behaviors are implementation-defined; prefer unsigned types for bitwise shifts when portability matters.
- Use parentheses to avoid precedence surprises and improve readability.

---

If you want, I can add a small `examples.c` file demonstrating each operator category. Tell me if you'd like that added to the folder.