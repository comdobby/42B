/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:24:51 by saryu             #+#    #+#             */
/*   Updated: 2023/05/26 17:24:53 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The  bzero()  function  erases  the  data  in the n bytes of the memory starting at the location pointed to by s,
 * by writing zeros (bytes  containing '\0') to that area.
 * */

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    char    *result;

    i = 0;
    result = (char *)s;
    while (i < n)
        result[i++] = '\0';
}
/*
#include <stdio.h>
int main(void)
{
    char    a[10];
    int     i = 0;

    ft_bzero(a, 10);
    while (i < 10)
    {
        printf("%c\n", a[i]);
        i++;
    }

    return (0);
}*/