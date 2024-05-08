/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:47:40 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/08 19:53:24 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *str = "This is a test string.";
	int character = 'i';

	char *result = ft_strchr(str, character);

	if (result == NULL)
		printf("Character '%c' not found in string.\n", character);
	else
		printf("Character '%c' found at position %ld.\n", character, result - str);
} */