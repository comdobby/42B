/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:33:41 by saryu             #+#    #+#             */
/*   Updated: 2023/05/26 16:34:22 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * The  memset()  function  fills  the  first  n  bytes of the memory area
 * pointed to by s with the constant byte c.
 * */

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    char    *result;

    result = (char *)s;
    i = 0;
    while (i < n)
        result[i++] = c;
    return (result);
}
/*
#include <stdio.h>
int    main(void)
{
    char    a[20];
    int     i = 0;

    ft_memset(a, '0', 10);
    while (i < sizeof(a))
    {
        printf("%c\n", a[i]);
        i++;
    }
}*/