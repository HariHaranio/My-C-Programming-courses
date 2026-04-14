# Function.
A function is a block of code that performs a specific task.
It can take input parameters, perform operations, and return a value.
Functions are used to break down complex problems into smaller,
manageable pieces, promote code reusability, and improve readability.

# Arguments and Return Values.
Functions can have parameters (arguments) that allow you to pass data into the function.
Functions can also return a value using the `return` statement. The return type of the function must be specified in the function definition.


## 1. Function Definition.
A function is defined with a return type, a name, and parameters (if any). The body of the function contains the code that performs the task.

```c
return_type function_name(parameter_list) {
    // function body
}
```
**Example**

```c   
int add(int a, int b) {
    return a + b;
}
```

Advantages of using functions:
- Modularity: Functions allow you to break down complex problems into smaller, manageable pieces.
- Reusability: Once a function is defined, it can be called multiple times from different parts of the program.
- Readability: Functions make the code more readable and easier to understand.
- Maintainability: Functions make it easier to maintain and update the code.

## 2. Function Declaration (Prototype).

A function declaration, also known as a prototype.
- It informs the compiler about the function name, return type, and parameters before its actual definition. 
- This is especially useful when the function is defined after its usage in the code.

```c
    return_type function_name(parameter_list);
``` 

**Example**

```c
int add(int a, int b);
```

## 3. Function Call.
To execute a function, you need to call it by using its name and providing the required arguments (if any).

```c
int result = add(5, 10);
``` 

# C Programming – Types of Functions

## Overview

In C programming, functions are classified based on how they handle **input (arguments)** and **output (return values)**.
Understanding this is critical because it defines how data flows through your program.

---

## 1. No Arguments, No Return Value

### Description
* Function does not take any input
* Function does not return any output

### Syntax

```c
void func() {
    // code
}
```

### Example

```c
#include<stdio.h>

void greet() {
    printf("Hello\n");
}

int main() {
    greet();
    return 0;
}
```

### Use Case

* Simple tasks like printing messages

### Limitation

* Not reusable
* No data interaction

---

## 2. Arguments, No Return Value

### Description

* Function takes input
* Does not return any value

### Syntax

```c
void func(int a, int b) {
    // code
}
```

### Example

```c
#include<stdio.h>

void sum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    sum(5, 3);
    return 0;
}
```

### Use Case

* Display operations
* Logging

### Limitation

* Output cannot be reused

---

## 3. No Arguments, Return Value

### Description

* Function does not take input
* Returns a value

### Syntax

```c
int func() {
    return value;
}
```

### Example

```c
#include<stdio.h>

int getValue() {
    return 10;
}

int main() {
    int x = getValue();
    printf("%d\n", x);
    return 0;
}
```

### Use Case

* Generating values internally (e.g., sensor reading)

### Limitation

* No flexibility in input

---

## 4. Arguments with Return Value (Recommended)

### Description

* Function takes input
* Returns output

### Syntax

```c
int func(int a, int b) {
    return value;
}
```

### Example

```c
#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}
```

### Use Case

* Real-world applications
* Reusable logic
* Modular programming

### Advantage

* Flexible and scalable
* Supports complex systems

---

## Conclusion

| Type               | Input | Output | Flexibility |
| ------------------ | ----- | ------ | ----------- |
| No Args, No Return | ❌     | ❌      | Low         |
| Args, No Return    | ✅     | ❌      | Medium      |
| No Args, Return    | ❌     | ✅      | Medium      |
| Args, Return       | ✅     | ✅      | High        |

---

## Key Takeaway

Prefer **functions with arguments and return values** for better code design, reusability, and scalability.
