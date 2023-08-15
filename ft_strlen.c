/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:03:12 by saryu             #+#    #+#             */
/*   Updated: 2023/08/16 00:12:51 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strlen() function calculates the length of the string pointed to 
 * bytes, excluding the terminating null byte ('\0').
*/

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%zu\n", ft_strlen("aaaaa"));
	printf("%zu\n", ft_strlen("d"));
	printf("%zu\n", ft_strlen(""));
	return (0);
}*/