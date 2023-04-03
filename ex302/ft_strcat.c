/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:57:19 by saryu             #+#    #+#             */
/*   Updated: 2023/04/03 18:24:24 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_of_dest;

	i = 0;
	len_of_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len_of_dest + i] = src[i];
		i++;
	}
	dest[len_of_dest + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	char	dest[10] = "aaa";
	char	src[] = "bbb";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/