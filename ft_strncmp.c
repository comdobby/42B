/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:50:13 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:50:14 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strncmp() function compares only the first (at most) 
 * n bytes of s1 and s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	i = 0;
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (i < n && (s1p[i] || s2p[i]))
	{
		if (s1p[i] == s2p[i])
		{
			i++;
			continue ;
		}
		else if ((s1p[i] > s2p[i]) || (s1p[i] < s2p[i]))
			return (s1p[i] - s2p[i]);
	}
	if (i == n || (s1p[i] == '\0' && s2p[i] == '\0'))
		return (0);
	else
		return (s1p[i] - s2p[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1 = "aac";
	char	*s2 = "aaa";
	char	*s3 = "sadf";
	char	*s4 = "sdsd";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s3, s4, 2));
	printf("%d\n", strncmp(s3, s4, 2));
	return (0);
}*/