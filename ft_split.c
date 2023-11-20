/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:11:51 by saryu             #+#    #+#             */
/*   Updated: 2023/11/17 14:43:07 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates(with malloc(3)) and returns an array of strings 
 * obtained by splitting 's' using the character 'c' as delimiter. 
 * The array must end with a NULL pointer.
 * */

int	get_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0)
		{
			if (s[i] != c)
				count++;
		}
		else
		{
			if (s[i] != c && s[i - 1] == c)
				count++;
		}
		i++;
	}
	return (count);
}

char	**split_str(char const *s, char c, char **result)
{
	size_t	i;
	size_t	start;
	size_t	split_i;

	i = 0;
	split_i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			result[split_i++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	result[split_i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**result;

	count = get_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	result = split_str(s, c, result);
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char str[30] = "aaa aaa aaa";
    char **result = ft_split(str, ' ');
    while (**result)
    {
        printf("%s\n", *result);
        free(*result);
        result++;
    }
    return (0);
}*/