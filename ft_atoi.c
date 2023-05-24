/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:37:24 by saryu             #+#    #+#             */
/*   Updated: 2023/05/24 16:01:21 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The atoi() function converts the initial portion of the string pointed to by nptr to int.
*/

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result *= 10;
        result += nptr[i] - 48;
		i++;
	}
	result = result * sign;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[30] = " ---+--+1234ab567";
	char	str1[30] = "avb";
	char	str2[30] = "";
	char	str3[30] = "0";
	char	str4[30] = "67523";
	char	str5[30] = "+--30";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
	return (0);
}*/