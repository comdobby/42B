/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:49:46 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:49:47 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If c is an uppercase letter, tolower() returns its lowercase 
 * equivalent, if a lowercase representation exists in the current locale.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('B'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('-'));
	return (0);
}*/