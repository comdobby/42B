/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:33:41 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 14:29:24 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The  memset()  function  fills  the  first  n  bytes of the memory area
 * pointed to by s with the constant byte c.
 * */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
		p[i++] = c;
	return (p);
}
/*
#include <stdio.h>
int    main(void)
{
    char    a[10];

    ft_memset(a, '0', 10);
    printf("%s", a);
    return (0);
}*/