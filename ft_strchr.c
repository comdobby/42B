/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:23 by saryu             #+#    #+#             */
/*   Updated: 2023/08/20 22:37:35 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strchr() function returns a pointer to the first occurrence of the
 * character c in the string s.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s[10] = "abcde";
	char	s2[10] = "aaaaa";

	printf("%s\n", strchr(s, 'c'));
	printf("%s\n", strchr(s2, 'c'));
	printf("%s\n", ft_strchr(s, 'c'));
	printf("%s", ft_strchr(s2, 'c'));
	return (0);
}*/