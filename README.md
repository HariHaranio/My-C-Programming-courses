# History of C Programming.
- In early 1969 Dennis Ritchie and Ken Thompson started working on a new operating system called UNIX at Bell Labs.
- They needed a programming language that was efficient, portable, and suitable for system programming.
- The UNIX system uses CPL & BCPL programming languages, but they had limitations in terms of performance and flexibility.
- so in 1969 ken thompson simplified BCPL to create a new language called B, which was used to write the early versions of UNIX.
- However, B had its own limitations, such as lack of data types and poor performance
- In 1972, Dennis Ritchie developed the C programming language as an improvement over B, adding features like data types, structures, and better performance.
- C was developed in the early 1970s by Dennis Ritchie at Bell Labs.
- c was eveloved from the B programming language, which was created by Ken Thompson.
- C was designed to be a system programming language, providing low-level access to memory.

# C Programming

C is a general-purpose, procedural programming language that provides low-level access
to memory, a simple set of keywords, and a clean style that makes it ideal for systems
programming, embedded development, and learning core programming concepts.

# variables.
- A variable is a named storage location in memory that holds a value which can be changed during program execution.
- Variables have a type that determines the kind of data they can hold (e.g., `int`, `float`, `char`).
- Variables must be declared before they can be used, specifying their type and name.
- Variables can be initialized at the time of declaration or assigned a value later in the program.
- The scope of a variable determines where it can be accessed in the program (e.g., local, global).
- Variables can be modified using assignment operators (e.g., `=`, `+=`, `-=`).
- Proper naming conventions for variables improve code readability and maintainability (e.g., using descriptive names, avoiding reserved keywords).

# keywords.
- keywords are reserved words in C that have a special meaning and cannot be used as identifiers (e.g., variable names, function names).
- C has a total of 32 keywords, including `int`, `float`, `if`, `else`, `while`, `for`, `return`, etc.
- Keywords are used to define the structure and flow of a C program, such as declaring variables, controlling program flow, and defining functions.
- Keywords are case-sensitive, meaning that `int` and `Int` are considered different identifiers.
- Understanding and using keywords correctly is essential for writing valid and efficient C code.

# operators.
- Operators are symbols that perform operations on variables and values in C.
- C has a variety of operators, 
    - including arithmetic operators (`+`, `-`, `*`, `/`, `%`),
    - relational operators (`==`, `!=`, `<`, `>`, `<=`, `>=`), 
    - logical operators (`&&`, `||`, `!`), 
    - bitwise operators (`&`, `|`, `^`, `~`), 
    - assignment operators (`=`, `+=`, `-=`, `/=`,`*=`,`%=`).
- Operators can be used to manipulate data, perform calculations, and control the flow of a program.
- The precedence of operators determine the order in which operations are performed in an expression.
- Understanding how to use operators correctly is crucial for writing efficient and bug-free C code.


## Getting Started

Prerequisites: a C compiler such as `gcc` (MinGW on Windows).

Compile and run an example (Windows / PowerShell): 
- VScode (code editer),
- Code::Blocks (IDE).

## Tips for programming.
    >.Document what you learn for easy recollection.
    >.Start Building your own project early based on what u learn.
    >.Practice Alorithms months before first interviews

## Style & Notes

- Keep functions small and focused.
- Use meaningful variable names and comment 

## Resources

- [cppreference](https://en.cppreference.com/w/c)
- [geeksforgeeks operators-in-c](https://www.geeksforgeeks.org/c/operators-in-c/)

Feel free to ask for more detailed README sections (contributing, tests,

or CI) and I can expand this file.
