/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:32:12 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 13:15:58 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strrchr() function returns a pointer to the last occurrence of the 
 * character c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[20] = "abbbbbbbb";

	printf("%s\n", ft_strrchr(s, 'a'));
	printf("%s\n", strrchr(s, 'a'));
	return (0);
}