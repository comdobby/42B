/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:46:31 by saryu             #+#    #+#             */
/*   Updated: 2023/08/14 21:58:37 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * checks for a digit (0 through 9).
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit(128));
	printf("%d\n", ft_isdigit('C'));
	printf("%d\n", ft_isdigit(5));
	return (0);
}*/