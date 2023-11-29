# 42-Ft_printf
## Overview
This project, 42-Ft_printf, is a reimplementation of the standard C library function printf. The goal is to create a simplified version of the original printf function while maintaining its basic functionality and formatting options.

## Introduction
The printf function in C is used for formatted output. This project aims to implement a simplified version of printf with support for basic format specifiers, modifiers, and flags. It follows the requirements specified in the 42 school's project guidelines.

## Usage
To use the ft_printf function, include the header file "ft_printf.h" in your code, and link the compiled library.

```bash
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
Compile your code and the ft_printf library together:

```bash
gcc -o my_program my_program.c libftprintf.a
```
## Supported Format Specifiers
```bash
%c: Character
%s: String
%p: Pointer
%d: Decimal (int)
%i: Integer
%x: Hexadecimal (lowercase)
%X: Hexadecimal (uppercase)
%%: Percent sign
```
## Return Value
The function returns the number of characters printed (excluding the null byte).

## Examples
```bash
ft_printf("Hello, %s! You are %d years old.\n", "John", 25);
```
