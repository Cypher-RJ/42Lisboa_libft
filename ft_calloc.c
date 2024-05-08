/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:44 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/08 19:12:23 by rcesar-d         ###   ########.fr       */
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

int main() {
	int *arr;
	int n = 5;
	int i = 0;

	arr = (int *)ft_calloc(n, sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}
	while (i < n) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);
	return 0;
} */