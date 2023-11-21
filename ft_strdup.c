/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:36:23 by saryu             #+#    #+#             */
/*   Updated: 2023/11/21 19:47:18 by dobby            ###   ########.fr       */
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

	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	result[len + 1] = '\0';
	return (result);
}
