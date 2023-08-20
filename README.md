# The C Programming Language

## Chapter One: Introduction

### Getting started

A **C program** whatever it's size consists of _variables_ and _functions_. A functions contains statements that specify the computing operations to be done and variables store values used during the computation.

Normally as a developer we have the liberty to give the functions whatever names we like, but **main** is special. Our program begins executing at the beginning of **main**. So every program must have a **main** somewhere.The **main** will call other functions to help perform its job, some that we developers wrote and others from libraries thar are provided for us.

The first line of the code:

`#include <stdio.h>`

tells the compiler to include information about the _standard input/output library_.

A sequence of characters in double quotes, called a **character string** or **string constants**.

### Variables and Arithmetic Expressions

In **C**, all variables must be declared before they are used, usually at the beginning of the function before any executable statements. A declaration announces the properties of variables; it consists of a type name and a list of variables.

_The range of both int and float depends ont the machine we are using._

#### Provided Data Types in C

- int: Numbers.
- float: Decimal numbers.
- char: Character - a single byte.
- long: Long integer.
- double: Double-precision floating point.

_The size of these objects are also machine-dependent._

Individual statements are terminated by _semicolons_.

**The reason for not doing (5/9):** In **C** integer division truncates. Any fractional part is discarded. Since 5 and 9 are integers, (5/9) would be truncated to zero.

But (5.0/9.0) is not truncated because it is the ratio of two floating-point values.

If an arithmetic operator has has integer operands, and integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, the integer will be converted to floating point before the operation done.

### Symbolic Constants

**Symbolic constants** are not variables, so they do not appear in declarations. Identifiers are used to represent fixed values in programs using symbolic constants in the **C Programming** language. There is no semicolon at the end of a **#define** line.
