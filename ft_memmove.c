/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:45:10 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/04/17 18:41:44 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*memdest;
	unsigned char	*memsrc;
	size_t			i;

	memdest = (unsigned char *)dest;
	memsrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (memsrc < memdest)
	{
		i = n;
		while (i-- > 0)
			memdest[i] = memsrc[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			memdest[i] = memsrc[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

// Assuming ft_memmove is declared in another file or above this main function
extern void *ft_memmove(void *dest, const void *src, size_t n);

int main() {
    char src1[50] = "Hello, world!";
    char dest1[50];
    char src2[50] = "Hello, world!";
    char dest2[50];

    // Test 1: Basic overlap test
    printf("Before ft_memmove dest1: '%s'\n", src1);
    ft_memmove(src1 + 5, src1, 10);
    printf("After ft_memmove dest1: '%s'\n", src1);

    printf("Before memmove dest2: '%s'\n", src2);
    memmove(src2 + 5, src2, 10);
    printf("After memmove dest2: '%s'\n", src2);

    // Test 2: Non-overlapping
    ft_memmove(dest1, "Sample text", 11);
    memmove(dest2, "Sample text", 11);
    printf("ft_memmove result: '%s'\n", dest1);
    printf("memmove result: '%s'\n", dest2);

    // Test 3: Move zero bytes
    ft_memmove(dest1, src1, 0);
    memmove(dest2, src2, 0);
    printf("ft_memmove zero bytes result: '%s'\n", dest1);
    printf("memmove zero bytes result: '%s'\n", dest2);

    return 0;
} */