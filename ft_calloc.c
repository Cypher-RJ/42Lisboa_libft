/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:44 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/04/17 18:40:46 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			size_tt;
	unsigned char	*ptr;
	size_t			i;

	size_tt = nmemb * size;
	ptr = malloc(size_tt);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < size_tt)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/* #include <stdio.h>
#include <string.h>
#include <limits.h>

void test_ft_calloc(size_t nmemb, size_t size) {
    unsigned char *ptr = ft_calloc(nmemb, size);
    if (ptr == NULL) {
        printf("ft_calloc returned NULL for nmemb=%zu, size=%zu\n", nmemb, size);
    } else {
        // Check if the memory is zero-initialized
        for (size_t i = 0; i < nmemb * size; i++) {
            if (ptr[i] != 0) {
                printf("Memory not zero-initialized at index %zu\n", i);
                free(ptr);
                return;
            }
        }
        printf("Test passed for nmemb=%zu, size=%zu\n", nmemb, size);
        free(ptr);
    }
}

int main() {
    test_ft_calloc(0, 5);        // Zero nmemb
    test_ft_calloc(5, 0);        // Zero size
    test_ft_calloc(10, 10);      // Normal case
    test_ft_calloc(1024, 1024);  // Large allocation
    test_ft_calloc(__SIZE_MAX__, 2); // Overflow case
    return 0;
} */