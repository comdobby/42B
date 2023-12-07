/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:54:00 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:54:01 by saeryu           ###   ########.fr       */
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

	if ((size && count) && (count * size < size || count * size < count))
		return (NULL);
	result = malloc(count * size);
	if (!result)
		return (NULL);
	ft_bzero(result, (count * size));
	return (result);
}
