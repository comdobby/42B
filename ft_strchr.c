/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:23 by saryu             #+#    #+#             */
/*   Updated: 2023/05/16 13:57:58 by saryu            ###   ########.fr       */
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
	while (*s != (char)c && *s != '\0')
		s++;
	if (*s == '\0' && (char)c != '\0')
		return (NULL);
	return ((char *)s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[20] = "abcde";

	printf("%s", ft_strchr(s, 'c'));
	return (0);
}*/