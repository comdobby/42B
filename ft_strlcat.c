/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:50:46 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:50:47 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strlcat() function appends the NULL-terminated string 
 * src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, 
 * NUL-terminating the result.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char	dst[30] = "12345";
	char	src[30] = "456789";

	printf("%zu\n", ft_strlcat(dst, src, 8));
	printf("%s\n", dst);
	return (0);
}*/