/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:41:43 by saryu             #+#    #+#             */
/*   Updated: 2023/05/09 13:17:48 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strlcpy() function copies up to size - 1 characters from the 
 * NULL-terminated string src to dst, NUL-terminating the result.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	temp;
	
	i = 0;
	temp = ft_strlen(src);
	if (!dst || !src)
		return (0);
	while (i < size && i < temp)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	char s1[20] = "aaaaaaaaa";
	char s2[5] = "bbb";

	i = ft_strlcpy(s1, s2, 30);
	printf("%d\n", i);
	printf("%s\n", s1);
	return (0);
}*/