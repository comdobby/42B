/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:52:37 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:52:38 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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