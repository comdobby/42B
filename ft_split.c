/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:11:51 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 12:27:29 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Allocates(with malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as delimiter.
 * The array must end with a NULL pointer.
 * */

// char    **ft_split(char const *s, char c)
// {}
/*
#include <stdio.h>
int main(void)
{
    char str[30] = "aaa aaa aaa";
    char **result = ft_split(str, ' ');
    while (**result)
    {
        printf("%s\n", *result);
        free(*result);
        result++;
    }
    return (0);
}*/