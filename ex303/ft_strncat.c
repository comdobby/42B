/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:24:45 by saryu             #+#    #+#             */
/*   Updated: 2023/04/03 18:46:51 by saryu            ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	len_of_dest;

	i = 0;
	len_of_dest = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
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

	ft_strncat(dest, src, 1);
	printf("%s", dest);
	return (0);
}*/
