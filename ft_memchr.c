/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:52:21 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:52:22 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The memchr() function scans the initial n bytes of the memory area
 * pointed to by s for the first instance of c. Both c and the bytes of
 * the memory area pointed to by s are interpreted as unsigned char.
 * */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sp;

	i = 0;
	sp = (unsigned char *)s;
	while (i < n)
	{
		if (sp[i] == (unsigned char)c)
			return (&sp[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[] = "Hello World";
    char *result;
    char *result2;

    result = ft_memchr(s, 'W', 11);
    result2 = memchr(s, 'W', 11);
    printf("%s\n", result);
    printf("%s", result2);
    return (0);
}*/