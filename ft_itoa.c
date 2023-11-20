/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:18:04 by saryu             #+#    #+#             */
/*   Updated: 2023/08/28 15:12:56 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allcates(with malloc(3)) and returns a string representing the integer 
 * received as an argument. Negative numbers must be handled.
 * */

int	check_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*result;

	nb = n;
	i = check_len(nb);
	result = malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	result[i] = '\0';
	while (nb > 9)
	{
		result[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	result[--i] = nb + '0';
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