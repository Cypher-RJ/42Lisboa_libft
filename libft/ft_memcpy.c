/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:18:49 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/04/17 18:41:41 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*memdest;
	unsigned char	*memsrc;
	size_t			i;

	memsrc = (unsigned char *)src;
	memdest = (unsigned char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

extern void *ft_memcpy(void *dest, const void *src, size_t n);

void print_memory(const char *label, const char *data, size_t n) {
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", (unsigned char)data[i]);
    }
    printf("\n");
}

int main() {
    char src[] = "Hello, world!";
    char dest1[50];
    char dest2[50];

    // Test 1: Copy a string including the null terminator
    ft_memcpy(dest1, src, sizeof(src));
    memcpy(dest2, src, sizeof(src));
    printf("Test 1 - Copy string including null terminator:\n");
    print_memory("ft_memcpy", dest1, sizeof(src));
    print_memory("memcpy", dest2, sizeof(src));

    // Test 2: Copy part of a string
    ft_memcpy(dest1, src, 5);
    memcpy(dest2, src, 5);
    printf("\nTest 2 - Copy part of string (5 chars):\n");
    print_memory("ft_memcpy", dest1, 5);
    print_memory("memcpy", dest2, 5);

    // Test 3: Copy into overlapping regions
    strcpy(dest1, "Initial data");
    strcpy(dest2, "Initial data");
    ft_memcpy(dest1 + 5, dest1, 6);
    memcpy(dest2 + 5, dest2, 6);
    printf("\nTest 3 - Copy into overlapping regions:\n");
    print_memory("ft_memcpy", dest1, 16);
    print_memory("memcpy", dest2, 16);

    return 0;
} */