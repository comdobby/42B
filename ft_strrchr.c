/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:50:00 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:50:02 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strrchr() function returns a pointer to the last occurrence of the 
 * character c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len != 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[20] = "abbbbbbbb";
	char	s2[20] = "ababababab";
	char	s3[20] = "a";
	char	s4[20] = "";

	printf("%s\n", ft_strrchr(s, 'a'));
	printf("%s\n", strrchr(s, 'a'));
	printf("%s\n", ft_strrchr(s2, 'a'));
	printf("%s\n", strrchr(s2, 'a'));
	printf("%s\n", ft_strrchr(s3, 'a'));
	printf("%s\n", strrchr(s3, 'a'));
	printf("%s\n", ft_strrchr(s4, 'a'));
	printf("%s\n", strrchr(s4, 'a'));
	return (0);
}*/