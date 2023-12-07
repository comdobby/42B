/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:51:11 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:51:13 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strdup() function allocates sufficient memory for 
 * a copy of the string s1, does the copy, and returns a pointer to it.
 * The pointer may subsequently be used as an argument to the function free(3).
 * */

char	*ft_strdup(const char *s1)
{
	char		*result;
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
