/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:51:37 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 19:37:36 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strncmp() function compares only the first (at most) n bytes of s1 and s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	i = 0;
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while ((s1p[i] || s2p[i]) && i < n)
	{
		if (s1p[i] > s2p[i] || s1p[i] < s2p[i])
			return (s1p[i] - s2p[i]);
		i++;
	}
	if (i == n || (!s1p[i] && !s2p[i]))
		return (0);
	else if (s1p[i] > s2p[i] || s1p[i] < s2p[i])
		return (s1p[i] - s2p[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1 = "aaa";
	char	*s2 = "aac";
	char	*s3 = "adb";
	char	*s4 = "abb";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s3, s4, 2));
	printf("%d\n", strncmp(s3, s4, 2));
	return (0);
}*/