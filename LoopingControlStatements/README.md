# Control Statements in C (Loops)

Control statements determine how many times a block of code executes.
If you don’t control execution flow, your program controls you — via bugs, infinite loops, and wasted CPU cycles.

C provides three primary looping constructs:

- `for` loop
- `while` loop
- `do while` loop

# 1. for Loop
-------------
### Purpose

    Used when the number of iterations is known in advance.
    This is not optional knowledge — it’s the whole point of the for loop.

#### Syntax
```c
for (initialization; condition; increment/decrement) {
    // loop body
}
```

#### Example
```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

### Execution Flow

1. Initialization runs once
2. Condition is checked
3. Loop body executes if condition is true
4. Increment/decrement happens

#### Check

If you use a for loop when you don’t know how many times it will run, you’re lying to yourself and future readers of your code.

# 2. while Loop
----------------
### Purpose

    Used when the number of iterations is unknown, and execution depends on a condition.

#### Syntax
```c
while (condition) {
    // loop body
}
```

#### Example
```c
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```

### Execution Flow

- Condition is checked before entering the loop
- If false initially, the loop never executes

#### Check

If your condition never becomes false, congratulations — you just wrote an infinite loop.
That’s not clever. That’s a bug.

# 3. do while Loop
-------------------
### Purpose

    Used when the loop body must execute at least once, regardless of the condition.

#### Syntax
```c
do {
    // loop body
} while (condition);
```

#### Example
```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);
```

### Execution Flow

- Loop body executes first
- Condition is checked afterward
- Repeats if condition is true

#### Check

Use this only when one guaranteed execution makes logical sense (e.g., menu systems, user input validation).
If not, you’re forcing structure instead of logic.

