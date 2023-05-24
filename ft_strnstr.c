/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:03:12 by saryu             #+#    #+#             */
/*   Updated: 2023/05/24 16:15:50 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strnstr() function locates the first occurrence of the null-terminated string little in the string big, 
 * where not more than len characters are searched. Characters that appear after a ‘\0’ character are not searched.
 * Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bigp;
	char	*littlep;

	i = -1;
	bigp = (char *)big;
	littlep = (char *)little;
	if (*littlep == '\0')
		return (bigp);
	while (bigp[++i] != '\0' && i <= len)
	{
		j = 0;
		while (littlep[j] == bigp[i + j])
		{
			if (littlep[j + 1] == '\0')
				return (&bigp[i]);
			j++;
			if (bigp[i + j] == '\0')
				return (0);
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "trywabcgdhf";
	char	to_find[] = "abc";
	size_t	len = 7;
	char	*res;
	
	res = ft_strnstr(str, to_find, len);
	printf("%s", res);
	return (0);
}*/