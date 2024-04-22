/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:35:02 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/04/17 18:41:47 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = s;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (s);
}
/* #include <stdio.h>
#include <string.h>

// Your ft_memset function goes here...

int main() {
    char str[50] = "Hello, world!";
    printf("Original string: %s\n", str);

    // Using ft_memset to set the first 5 characters to 'A'
    ft_memset(str, 'A', 5);
    printf("After ft_memset: %s\n", str);

    // Using memset from standard library to set the first 5 
		characters to 'A' for comparison
    char str2[50] = "Hello, world!";
    memset(str2, 'A', 5);
    printf("After memset: %s\n", str2);

    return 0;
}
 */