/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:36:20 by saryu             #+#    #+#             */
/*   Updated: 2023/05/29 13:46:32 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The calloc() function contiguously allocates enough space for count objects
 * that are size bytes of memory each and returns a pointer to the allocated memory.
 * The allocated memory is filled with bytes of value zero.
 * */

void    *ft_calloc(size_t count, size_t size)
{
    void    *result;
    size_t  total_size;

    total_size = count * size;
    //check overflow, if count * size > max of size_t, return NULL
    if (total_size / size != count)
        return (NULL);
    result = malloc(total_size);
    if (!result)
        return (NULL);
    ft_bzero(result, (count * size));
    return (result);
}
/*
#include <stdio.h>
int main(void)
{
    return (0);
}*/