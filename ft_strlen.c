/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:50:35 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:50:37 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strlen() function calculates the length of the string pointed to 
 * bytes, excluding the terminating null byte ('\0').
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

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