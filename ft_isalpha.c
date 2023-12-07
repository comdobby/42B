/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:53:50 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:53:51 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * checks for an alphabetic character; in the standard "C" locale,
 * it is equivalent to (isupper(c) ||  islower(c)). In some lo‐
 * cales, there may be additional characters for which isalpha() is
 * true—letters which are neither uppercase nor lowercase.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha(2));
	printf("%d\n", ft_isalpha('!'));
	return (0);
}*/