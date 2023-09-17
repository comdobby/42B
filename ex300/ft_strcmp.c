/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:40:51 by saryu             #+#    #+#             */
/*   Updated: 2023/03/31 20:00:02 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] > s2[j])
			return (1);
		else if (s1[i] < s2[j])
			return (-1);
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "aaa";
	char	*s2 = "aaa";
	char	*s3 = "aab";
	char	*s4 = "aac";
	
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s3, s4));
	return (0);
}*/
