/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:25:38 by saryu             #+#    #+#             */
/*   Updated: 2023/11/19 15:33:57 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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