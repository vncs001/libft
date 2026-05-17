*This project has been created as part of the 42 curriculum by vaugusto.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.  
The goal of this project is to recreate a set of standard C library functions, as well as additional utility functions that will be reused throughout future projects.

This project focuses on:
- Understanding low-level memory manipulation
- Working with strings and pointers
- Learning how static libraries work
- Improving code organization and modularity
- Writing clean and reusable C code

The final result is a static library (`libft.a`) containing multiple utility functions implemented from scratch.

---

# Features

The library includes functions for:

## Character checks and conversions
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

## String manipulation
- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

## Memory manipulation
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

## Conversion functions
- `ft_atoi`
- `ft_itoa`

## File descriptor output
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## Linked list functions
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

# Project Structure

```text
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── README.md
```

---

# Instructions

## Compilation

To compile the library:

```bash
make
```

This will generate:

```text
libft.a
```

---

## Available Makefile Rules

### Compile the library

```bash
make
```

### Remove object files

```bash
make clean
```

### Remove object files and library

```bash
make fclean
```

### Recompile everything

```bash
make re
```

---

# Usage Example

Include the header in your project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc main.c libft.a
```

---

# Technical Notes

- Global variables are not used.
- Helper functions are declared as `static` when restricted to a single file.
- The project follows the 42 Norm.
- The library is compiled as a static archive using `ar`.

---

## AI Usage

AI tools were used for:
- Understanding Makefile concepts
- Clarifying memory management behavior
- Improving documentation structure and readability

All code implementation, debugging, testing, and final decisions were completed manually.

---

# Author

vaugusto

Project developed at 42 School.
