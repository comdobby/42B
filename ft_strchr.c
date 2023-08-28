/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:23 by saryu             #+#    #+#             */
/*   Updated: 2023/08/28 14:43:04 by saeraryu         ###   ########.fr       */
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
	char	*str;

	str = (char *)s;
	while (str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == '\0' && (char)c != '\0')
		return (NULL);
	return (str);
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