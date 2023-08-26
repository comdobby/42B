/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:51:37 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 13:15:35 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strncmp() function compares only the first (at most) n bytes of s1 and s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
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