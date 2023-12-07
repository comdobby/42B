/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:51:21 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:51:22 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strchr() function returns a pointer to the first occurrence of the
 * character c in the string s.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == '\0' && (char)c != '\0')
		return (NULL);
	return ((char *)s);
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