/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:32:33 by saryu             #+#    #+#             */
/*   Updated: 2023/08/16 22:46:32 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
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