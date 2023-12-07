/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:50:41 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:50:42 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strlcpy() function copies up to size - 1 characters from the 
 * NULL-terminated string src to dst, NULL-terminating the result.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (i < len && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	char s1[20];
	char s2[5] = "bbb";

	i = ft_strlcpy(s1, s2, 0);
	printf("%d\n", i);
	printf("%s\n", s1);
	return (0);
}*/