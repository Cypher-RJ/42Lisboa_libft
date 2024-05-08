/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:15:41 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/04/17 18:41:23 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mems;
	size_t			i;

	mems = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mems[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

void test_memchr(const void *s, int c, size_t n) {
    char *result = memchr(s, c, n);
    char *ft_result = ft_memchr(s, c, n);

    printf("memchr: %p, ft_memchr: %p\n", result, ft_result);
    printf("Test %s\n", (result == ft_result) ? "PASSED" : "FAILED");
}

int main() {
    const char *str = "Hello, world!";
    
    // Test with character present
    test_memchr(str, 'o', strlen(str));
    
    // Test with character not present
    test_memchr(str, 'x', strlen(str));
    
    // Test with n = 0
    test_memchr(str, 'o', 0);
    
    // Test with n less than length of string
    test_memchr(str, 'o', 5);
    
    // Test with n greater than length of string
    test_memchr(str, 'o', 20);

    // Test with negative character
    test_memchr(str, 256 + 'o', strlen(str));
    return 0;
} */
