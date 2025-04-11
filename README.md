# Libft Introduction

Libft (Library of Functions)

Libft is a very important project, since this library will be used in future 42 school assignments. If you are a 42 student, I highly recommend you go through the trial and error process of writing your own code and testing it yourself, rather than copy-pasting code you only half-understand. If you've succeeded your piscine, there is no reason you couldn't figure this project out for yourself! Be patient and thorough.

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

- [`ft_isalpha`](42Lisboa_libft/ft_isalpha.c)	- checks  for  an  alphabetic  character.
- [`ft_isdigit`](42Lisboa_libft/ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](42Lisboa_libft/ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](42Lisboa_libft/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](42Lisboa_libft/ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](42Lisboa_libft/ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](42Lisboa_libft/ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [`ft_memset`](42Lisboa_libft/ft_memset.c)	- fill memory with a constant byte.
- [`ft_strlen`](42Lisboa_libft/ft_strlen.c)	- calculate the length of a string.
- [`ft_bzero`](42Lisboa_libft/ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](42Lisboa_libft/ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](42Lisboa_libft/ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](42Lisboa_libft/ft_strlcpy.c)	- copy string to an specific size.
- [`ft_strlcat`](42Lisboa_libft/ft_strlcat.c)	- concatenate string to an specific size.
- [`ft_strchr`](42Lisboa_libft/ft_strchr.c)	- locate character in string.
- [`ft_strrchr`](42Lisboa_libft/ft_strrchr.c)	- locate character in string.
- [`ft_strncmp`](42Lisboa_libft/ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](42Lisboa_libft/ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](42Lisboa_libft/ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](42Lisboa_libft/ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](42Lisboa_libft/ft_strdup.c)	- creates a dupplicate for the string passed as parameter.

### Functions from `<stdlib.h>`
- [`ft_atoi`](42Lisboa_libft/ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](42Lisboa_libft/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](42Lisboa_libft/ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](42Lisboa_libft/ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](42Lisboa_libft/ft_strtrim.c)	- trims the beginning and end of string with specific set of chars.
- [`ft_split`](42Lisboa_libft/ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](42Lisboa_libft/ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](42Lisboa_libft/ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](42Lisboa_libft/ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](42Lisboa_libft/ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](42Lisboa_libft/ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](42Lisboa_libft/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](42Lisboa_libft/ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [`ft_lstnew`](42Lisboa_libft/ft_lstnew.c)	- creates a new list element.
- [`ft_lstadd_front`](42Lisboa_libft/ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [`ft_lstsize`](42Lisboa_libft/ft_lstsize.c)	- counts the number of elements in a list.
- [`ft_lstlast`](42Lisboa_libft/ft_lstlast.c)	- returns the last element of the list.
- [`ft_lstadd_back`](42Lisboa_libft/ft_lstadd_back.c)	- adds an element at the end of a list.
- [`ft_lstclear`](42Lisboa_libft/ft_lstclear.c)	- deletes and free list.
- [`ft_lstiter`](42Lisboa_libft/ft_lstiter.c)	- applies a function to each element of a list.
- [`ft_lstmap`](42Lisboa_libft/ft_lstmap.c)	- applies a function to each element of a list.
