/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:49:37 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 13:40:04 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The memcpy() function copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap. Use memmove(3) if the memory areas do overlap.
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