/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:49:52 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:49:53 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If c is a lowercase letter, toupper() returns its uppercase equivalent,
 * if an uppercase representation exists in the current locale.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('B'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('-'));
	return (0);
}*/