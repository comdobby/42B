/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:53:42 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:53:43 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * checks whether c is a 7-bit unsigned char value that fits into
 * the ASCII character set.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii('4'));
	printf("%d\n", ft_isascii('*'));
	return (0);
}*/