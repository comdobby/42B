/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:36:23 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 14:31:31 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The strdup() function allocates sufficient memory for 
 * a copy of the string s1, does the copy, and returns a pointer to it.
 * The pointer may subsequently be used as an argument to the function free(3).
 * */

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len;

	len = ft_strlen(s1);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	result[len + 1] = '\0';
	return (result);
}
