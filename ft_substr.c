/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:07:13 by saryu             #+#    #+#             */
/*   Updated: 2023/05/30 17:26:49 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a substring from the string 's'.
 * The substring begins at index 'start' and is of maximum size 'len'.
 * */

char    *ft_substr(char const *s, unsigned int start, size_t len) {
    size_t  i;
    size_t  j;
    char    *result;

    i = 0;
    j = start;
    result = (char *) malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    while (i < len && s[j] != '\0')
    {
        result[i] = s[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char *result = ft_substr("abcdefghij", 2, 5);
    printf("%s\n", result);
    free(result);
    return (0);
}*/
