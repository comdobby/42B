/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:37:24 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 14:20:55 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The atoi() function converts the initial portion of the string 
 * pointed to by nptr to int.
*/

int	ft_check(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	number;
	long	sign;
	size_t	i;

	number = 0;
	sign = 1;
	i = 0;
	while ((str[i] != '\0') && ft_check(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && (str[i] != '\0'))
	{
		number = (number * 10) + (str[i] - 48);
		if (number > 2147483647 && sign == 1)
			return (0);
		if (number > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return ((int)number * sign);
}
/*
#include <stdio.h>
int    main(void)
{
   char   str[30] = " ---+--+1234ab567";
   char   str1[30] = "avb";
   char   str2[30] = "";
   char   str3[30] = " 1";
   char   str4[30] = "67523";
   char   str5[30] = "30abc";

   printf("ft_atoi : %d\n", ft_atoi(str));
   printf("atoi: %d\n", atoi(str));
   printf("ft_atoi : %d\n", ft_atoi(str1));
   printf("atoi: %d\n", atoi(str1));
   printf("ft_atoi : %d\n", ft_atoi(str2));
   printf("atoi: %d\n", atoi(str2));
   printf("ft_atoi : %d\n", ft_atoi(str3));
   printf("atoi: %d\n", atoi(str3));
   printf("ft_atoi : %d\n", ft_atoi(str4));
   printf("atoi: %d\n", atoi(str4));
   printf("ft_atoi : %d\n", ft_atoi(str5));
   printf("atoi: %d\n", atoi(str5));
   return (0);
}*/