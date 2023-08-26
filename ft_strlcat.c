/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:00:13 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 14:32:30 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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