/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:42:56 by saryu             #+#    #+#             */
/*   Updated: 2023/03/30 23:56:30 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	temp;

	i = 0;
	temp = size;
	while (!dest || !src)
		return (0);
	while (i < temp && i + 1 < size)
	{ 
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_strlcpy("aaa", "bbb", 2);
	printf("%d", i);
}*/