/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:24:51 by saryu             #+#    #+#             */
/*   Updated: 2023/11/20 20:30:02 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The  bzero()  function  erases  the  data  in the n bytes of the memory 
 * starting at the location pointed to by s,
 * by writing zeros (bytes  containing '\0') to that area.
 * */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
		p[i++] = '\0';
}
/*
#include <stdio.h>
int main(void)
{
    char    a[10];

    ft_bzero(a, 10);
    printf("%s", a);
    return (0);
}*/