/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:51:37 by saryu             #+#    #+#             */
/*   Updated: 2023/05/24 16:00:14 by saryu            ###   ########.fr       */
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
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "aaa";
	char	*s2 = "aac";
	char	*s3 = "adb";
	char	*s4 = "abb";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s3, s4, 2));
	return (0);
}*/