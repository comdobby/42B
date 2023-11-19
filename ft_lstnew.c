/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobby <dobby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:09:30 by saeraryu          #+#    #+#             */
/*   Updated: 2023/11/19 12:25:57 by dobby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int mian()
{
	t_list	*this;
	t_list	*first;
	int		i;

	i = 0;
	while (i < 10)
	{
		this = ft_lstnew((void *)&i);
		if (i == 0)
			first = this;
		ft_lstadd_back(&first, this);
		i++;
	}
	
}*/