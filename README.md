# Libft Introduction

Libft (Library of Functions)

In this project, you will be creating a library of functions, the file structure for this project is the following:

### .c Files 
Where all of your functions will be written in. 

### .h (Header)
Your header file is useful for 2 things:
- First, instead of doing for example `#include <unistd.h>` in all of your .c files, you just write it once in your header and all of your .c files will read it from your header file. 
- Secondly, let's say one of your .c files uses another function from another .c file, well instead of writting that function above, just write `#include "libft.h"` and it will find it in your header file. 

Make sure you add `#include "libft.h"` in all of your .c files.

### Makefile 
Makefile is where you will create a file to compile your projects. Remember how in the piscine, you created an **int main** and **gcc** to compile the projects, well with a Makefile, you don't have to do that anymore, you just type `make` once you have created your Makefile. 

# Libft Functions

### Functions from `<ctype.h>`

- [`ft_isalpha`](libft/ft_isalpha.c)	- checks  for  an  alphabetic  character.
- [`ft_isdigit`](libft/ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](libft/ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](libft/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](libft/ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](libft/ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](libft/ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [`ft_memset`](libft/ft_memset.c)	- fill memory with a constant byte.
- [`ft_strlen`](libft/ft_strlen.c)	- calculate the length of a string.
- [`ft_bzero`](libft/ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](libft/ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](libft/ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](libft/ft_strlcpy.c)	- copy string to an specific size.
- [`ft_strlcat`](libft/ft_strlcat.c)	- concatenate string to an specific size.
- [`ft_strchr`](libft/ft_strchr.c)	- locate character in string.
- [`ft_strrchr`](libft/ft_strrchr.c)	- locate character in string.
- [`ft_strncmp`](libft/ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](libft/ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](libft/ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](libft/ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](libft/ft_strdup.c)	- creates a dupplicate for the string passed as parameter.

### Functions from `<stdlib.h>`
- [`ft_atoi`](libft/ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](libft/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](libft/ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](libft/ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](libft/ft_strtrim.c)	- trims the beginning and end of string with specific set of chars.
- [`ft_split`](libft/ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](libft/ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](libft/ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](libft/ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](libft/ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](libft/ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](libft/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [`ft_lstnew`](libft/ft_lstnew.c)	- creates a new list element.
- [`ft_lstadd_front`](libft/ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [`ft_lstsize`](libft/ft_lstsize.c)	- counts the number of elements in a list.
- [`ft_lstlast`](libft/ft_lstlast.c)	- returns the last element of the list.
- [`ft_lstadd_back`](libft/ft_lstadd_back.c)	- adds an element at the end of a list.
- [`ft_lstclear`](libft/ft_lstclear.c)	- deletes and free list.
- [`ft_lstiter`](libft/ft_lstiter.c)	- applies a function to each element of a list.
- [`ft_lstmap`](libft/ft_lstmap.c)	- applies a function to each element of a list.
