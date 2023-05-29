/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:15:03 by saryu             #+#    #+#             */
/*   Updated: 2023/05/26 17:15:04 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 *  The  memmove()  function  copies n bytes from memory area src to memory area dest.
 *  The memory areas may overlap: copying takes place as though the bytes in src are
 *  first copied into a temporary array that does not overlap src or dest,
 *  and the bytes are then copied from  the  temporary array to dest.
 * */

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;

    if (dest < src)
    {
        i = 0;
        while (i < n)
        {
            ((char *)dest)[i] = ((char *)src)[i];
        }
    }
    else
    {
        i = n;
        while (i)
        {
            ((char *)dest)[i - 1] = ((char *)src)[i - 1];
            i--;
        }
    }
    return (dest);
}

#include <stdio.h>
int main(void)
{
    char src[] = "Hello World!";
    char dest[20];

    ft_memmove(dest, src, 20);
    printf("%s\n", dest);

    return (0);
}