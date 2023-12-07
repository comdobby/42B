/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:52:04 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:52:05 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The memcpy() function copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 * */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dp;
	const unsigned char	*sp;

	i = 0;
	dp = (unsigned char *)dest;
	sp = (const unsigned char *)src;
	if (dp == sp)
		return (dp);
	while (i < n)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dp);
}

/*
#include <stdio.h>
int main(void)
{
    char src[] = "Hello World!";
    char dest[20];
    char src2[] = "Hello";
    char dest2[] = "Hello";

    ft_memcpy(dest, src, 20);
    printf("%s\n", dest);
    ft_memcpy(dest2, src2, 10);
    printf("%s", dest2);
    return (0);
}*/