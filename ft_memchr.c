/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:36:45 by saryu             #+#    #+#             */
/*   Updated: 2023/05/26 17:36:47 by saryu            ###   ########.fr       */
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
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (((char *)s)[i] == (char)c)
            return (char *) s + i;
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
    char s[] = "Hello World";
    char *result;

    result = ft_memchr(s, 'W', 11);
    if (result != NULL)
    {
        printf("%c\n", *result);
    } else
        printf("NULL");

    return (0);
}*/