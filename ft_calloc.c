/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:36:20 by saryu             #+#    #+#             */
/*   Updated: 2023/11/17 12:21:41 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The calloc() function contiguously allocates enough space for 
 * count objects that are size bytes of memory each and returns a pointer 
 * to the allocated memory.
 * The allocated memory is filled with bytes of value zero.
 * */

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	total_size;

	total_size = count * size;
	if (total_size / size != count)
		return (NULL);
	result = malloc(total_size);
	if (!result)
		return (NULL);
	ft_bzero(result, (count * size));
	return ((void *)result);
}
