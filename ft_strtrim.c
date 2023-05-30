/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:44:51 by saryu             #+#    #+#             */
/*   Updated: 2023/05/30 17:44:55 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set'
 * removed from the beginning and the end of the string.
 * */

char	*ft_strtrim(char const *s1, char const *set)
{}
/*
#include <stdio.h>
int main()
{
    char str[] = "aaaaaaaaaassadffffsmarcelaaaaaaasd";
    char set[] = "asd";
    char *p;

    printf("%s\n", str);
    p = ft_strtrim(str, set);
    printf("%s\n", p);

    return 0;
}*/