/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:51:53 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:51:55 by saeryu           ###   ########.fr       */
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