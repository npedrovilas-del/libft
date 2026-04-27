*This project has been created as part of the 42 curriculum by pneto-vi*

Libft is the foundational project of the 42 Common Core. The goal is to create a custom C library by recoding standard C functions and implementing additional utility functions. This library acts as a personal toolkit that will be used and expanded throughout the entire curriculum.
Features

The library is composed of three main categories of functions, all of which are mandatory for the project completion:
# Standard libc Functions

Re-implementations of essential functions from standard libraries:

    Memory Management: memset, bzero, memcpy, memmove, memchr, memcmp, calloc.

    String Analysis: strlen, strchr, strrchr, strncmp, strnstr, strdup.

    String Copy/Concatenation: strlcpy, strlcat.

    Character Classification: isalpha, isdigit, isalnum, isascii, isprint.

    Conversions: toupper, tolower, atoi.

# Additional Utility Functions

Functions developed to handle specific string and memory operations not found in the standard libc:

    ft_substr: Extracts a specific portion of a string.

    ft_strjoin: Concatenates two strings into a newly allocated string.

    ft_strtrim: Removes specified characters from the start and end of a string.

    ft_split: Breaks a string into an array of substrings using a delimiter.

    ft_itoa: Converts integer values into their string representation.

    ft_strmapi / ft_striteri: Applies a function to each character of a string.

# Output Functions

Utility functions to write characters, strings, and numbers to a specific file descriptor:

    ft_putchar_fd: Outputs a character to a given file descriptor.

    ft_putstr_fd: Outputs a string to a given file descriptor.

    ft_putendl_fd: Outputs a string followed by a newline.

    ft_putnbr_fd: Outputs an integer to a given file descriptor.

# Usage
Compilation

To compile the library and generate the libft.a file, use the following command:
Bash

make

# Integration

Include the header in your source files and link the library during the compilation of your program:
C

#include "libft.h"

To compile your code with the library:
Bash

gcc main.c libft.a -o program_name

# Makefile Commands

    make: Compiles the source files and creates the static library.

    make clean: Removes the object files (.o).

    make fclean: Removes the object files and the generated library file.

    make re: Recompiles the entire library from scratch.