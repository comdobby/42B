/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:00:15 by saryu             #+#    #+#             */
/*   Updated: 2023/04/03 18:45:10 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i] == '\0' && s1[i] == '\0')
		return (0);
	else if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "aaa";
	char	*s2 = "aac";
	char	*s3 = "abb";
	char	*s4 = "adb";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s3, s4, 1));
	return (0);
}*/
