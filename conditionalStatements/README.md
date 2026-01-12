
# Conditional Statements in C

Conditional statements control decision-making in a program. If your code can't make decisions, it's just a calculator — not logic.

C provides the following conditional constructs:

- `if`
- `if else`
- `else if` (ladder)
- `switch`

---

## 1. if Statement

**Purpose**

Executes a block only when a condition is true. No fallback — no safety net.

**Syntax**

```c
if (condition) {
	// code executes if condition is true
}
```

**Example**

```c
if (x > 0) {
	printf("x is positive");
}
```

**Check**

If the condition is false, nothing happens. If you expected something else to happen — that's a design mistake.

## 2. if else Statement

**Purpose**

Handles two mutually exclusive paths. Either this happens, or that happens — no third option.

**Syntax**

```c
if (condition) {
	// executes if condition is true
} else {
	// executes if condition is false
}
```

**Example**

```c
if (x % 2 == 0) {
	printf("Even number");
} else {
	printf("Odd number");
}
```

**Check**

Use this when exactly one path must execute. If more cases exist, use another construct.

## 3. if else if Ladder

**Purpose**

Used when multiple conditions need to be checked in sequence.

**Syntax**

```c
if (condition1) {
	// executes if condition1 is true
} else if (condition2) {
	// executes if condition2 is true
} else if (condition3) {
	// executes if condition3 is true
} else {
	// executes if none are true
}
```

**Example**

```c
if (marks >= 90) {
	printf("Grade A");
} else if (marks >= 75) {
	printf("Grade B");
} else if (marks >= 60) {
	printf("Grade C");
} else {
	printf("Fail");
}
```

**Check**

Conditions are checked top to bottom. Once a condition is true, the rest are ignored — order matters.

## 4. switch Statement

**Purpose**

Efficient alternative to long `else if` chains when comparing one variable against fixed values.

**Syntax**

```c
switch (expression) {
	case value1:
		// code
		break;
	case value2:
		// code
		break;
	default:
		// code if no case matches
}
```

**Example**

```c
switch (day) {
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	default:
		printf("Invalid day");
}
```

**Check**

Use `switch` for readability and efficiency when checking one value against many constants. Remember to include `break` where appropriate.

---

### Notes

- Keep conditions simple and readable.
- Choose
    - `if`/`else` for two-way decisions.
    - `else if` ladders for ordered ranges, 
    - `switch` for discrete fixed-value checks.