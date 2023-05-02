/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:02:18 by saryu             #+#    #+#             */
/*   Updated: 2023/05/02 11:49:04 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	return (0);
}*/