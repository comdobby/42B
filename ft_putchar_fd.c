/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:43:40 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 13:14:07 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
#include <stdio.h>
int main(void)
{
    int fd = 1;
    ft_putchar_fd('a', fd);
    return (0);
}*/