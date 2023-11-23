/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:36:20 by saryu             #+#    #+#             */
/*   Updated: 2023/11/23 14:22:39 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The calloc() function contiguously allocates enough space for 
 * count objects that are size bytes of memory each and returns a pointer 
 * to the allocated memory.
 * The allocated memory is filled with bytes of value zero.
 * */

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count == 0 || size == 0 || SIZE_MAX / count < size)
		return (NULL);
	result = malloc(count * size);
	if (!result)
		return (NULL);
	ft_bzero(result, (count * size));
	return (result);
}
