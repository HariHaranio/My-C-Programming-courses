# Function
A function is a block of code that performs a specific task.
It can take input parameters, perform operations, and return a value.
Functions are used to break down complex problems into smaller,
manageable pieces, promote code reusability, and improve readability.

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