/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:18:04 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 14:19:05 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Allcates(with malloc(3)) and returns a string representing the integer 
 * received as an argument. Negative numbers must be handled.
 * */

int	check_len(int n)
{
	int	i;

	i = 0;
	if (n >= 0 && n <= 9)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	i = check_len(n);
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	result[i] = '\0';
	while (n > 9)
	{
		result[--i] = (n % 10) + '0';
		n /= 10;
	}
	result[--i] = n + '0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char *c;

    c = ft_itoa(4839);
    printf("%s", c);
}*/