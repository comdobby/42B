/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:15:03 by saryu             #+#    #+#             */
/*   Updated: 2023/08/16 21:28:20 by saeraryu         ###   ########.fr       */
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
	unsigned char *dp;
	const unsigned char *sp;

	dp = (unsigned char *)dest;
	sp = (const unsigned char *)src;
	if (dp > sp)
	{
		while (n > 0)
		{
			dp[n - 1] = sp[n - 1];
			n--;
		}
	}
	else
		return (ft_memcpy(dp, sp, n));
	return (dp);
}
/*
#include <stdio.h>
int main(void)
{
    char src[] = "Hello World!";
    char dest[20];

    ft_memmove(dest, src, 20);
    printf("%s\n", dest);

    return (0);
}*/