/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:49:36 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:49:38 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a substring from the string 's'.
 * The substring begins at index 'start' and is of maximum size 'len'.
 * */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = start;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len && s[j] != '\0')
	{
		result[i] = s[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char *result = ft_substr("abcdefghij", 2, 5);
    printf("%s\n", result);
    free(result);
    return (0);
}*/
