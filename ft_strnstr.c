/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:03:12 by saryu             #+#    #+#             */
/*   Updated: 2023/11/20 20:30:16 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strnstr() function locates the first occurrence of 
 * the null-terminated string little in the string big, 
 * where not more than len characters are searched. 
 * Characters that appear after a ‘\0’ character are not searched.
 * Since the strnstr() function is a FreeBSD specific API, 
 * it should only be used when portability is not a concern.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i + j] == little[j])
		{
			while (big[i + j] && little[j])
			{
				if (big[i + j] != little[j] || i + j >= len)
					break ;
				j++;
			}
			if (little[j] == '\0')
				return (((char *)&big[i]));
		}
		i++;
	}
	return (NULL);
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