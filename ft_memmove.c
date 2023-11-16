/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:15:03 by saryu             #+#    #+#             */
/*   Updated: 2023/11/17 00:22:32 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 *  The  memmove()  function  copies n bytes from 
 * memory area src to memory area dest. 
 * The memory areas may overlap: 
 * copying takes place as though the bytes in src are
 * first copied into a temporary array that does not overlap src or dest,
 * and the bytes are then copied from  the  temporary array to dest.
 * */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = (unsigned char *)dest;
	sp = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dp > sp)
	{
		while (n-- > 0)
			dp[n] = sp[n];
		return (dp);
	}
	else
		return (ft_memcpy(dp, sp, n));
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