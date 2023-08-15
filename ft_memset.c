/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:33:41 by saryu             #+#    #+#             */
/*   Updated: 2023/08/16 00:30:10 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The  memset()  function  fills  the  first  n  bytes of the memory area
 * pointed to by s with the constant byte c.
 * */

void    *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	while(i < n)
		p[i++] = c;
	return (p);
}
/*
#include <stdio.h>
int    main(void)
{
    char    a[10];
    int     i = 0;

    ft_memset(a, '0', 10);
    while (i < sizeof(a))
    {
        printf("%c", a[i]);
        i++;
    }
    return (0);
}*/