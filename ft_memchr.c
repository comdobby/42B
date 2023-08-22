/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:36:45 by saryu             #+#    #+#             */
/*   Updated: 2023/08/21 17:32:37 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The memchr() function scans the initial n bytes of the memory area
 * pointed to by s for the first instance of c. Both c and the bytes of
 * the memory area pointed to by s are interpreted as unsigned char.
 * */

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *sp;

	i = 0;
	sp = (const unsigned char *)s;
	while (i < n && sp[i])
	{
		if (sp[i] == c)
			return ((void *)&sp[i]);
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