/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:44:51 by saryu             #+#    #+#             */
/*   Updated: 2023/08/26 14:28:44 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a copy of 's1' with 
 * the characters specified in 'set' removed from the beginning 
 * and the end of the string.
 * */

int	check_set(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	while (check_set(set, s1[start]) == 1 && start < end)
		start++;
	while (check_set(set, s1[end - 1]) == 1 && end > start)
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}
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
    free(p);

    return 0;
}*/