/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:50:21 by saryu             #+#    #+#             */
/*   Updated: 2023/06/01 18:50:25 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Outputs the string 's' to the given file descriptor.
 * */

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
/*
#include <stdio.h>
int main(void)
{
    char str[5] = "aaaa";
    ft_putstr_fd(str, 1);
    return (0);
}*/