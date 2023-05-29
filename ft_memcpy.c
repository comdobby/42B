/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:49:37 by saryu             #+#    #+#             */
/*   Updated: 2023/05/26 16:49:39 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The memcpy() function copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap. Use memmove(3) if the memory areas do overlap.
 * */

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (!n || dest == src)
            return (dest);
        while (i < n)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            i++;
        }
    }
    return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char src[] = "Hello World!";
    char dest[20];

    ft_memcpy(dest, src, 20);
    printf("%s\n", dest);
    return (0);
}*/