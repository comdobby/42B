/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:15:03 by saryu             #+#    #+#             */
/*   Updated: 2023/11/17 00:38:11 by dobby            ###   ########.fr       */
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

	if (dest == src)
		return (dest);
	dp = (unsigned char *)dest;
	sp = (const unsigned char *)src;
	if (dp < sp)
		return (ft_memcpy(dp, sp, n));
	while (n-- > 0)
		dp[n] = sp[n];
	return (dp);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[] = "Hello World!";
	char src2[] = "";
	char src3[] = "-fjkfjslk";
    char dest[5];
	char dest2[5];

    // ft_memmove(dest, src, 20);
    // printf("%s\n", dest);
	// memmove(dest2, src, 20);
	// printf("%s\n", dest2);

	// ft_memmove(dest, src2, 20);
	// printf("%s\n", dest);
	// memmove(dest2, src2, 20);
	// printf("%s\n", dest2);

	ft_memmove(dest, src3, 5);
	printf("%s\n", dest);
	memmove(dest2, src3, 5);
	printf("%s\n", dest2);
    return (0);
}*/