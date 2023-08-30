/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeraryu <saeraryu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:59:39 by saeraryu          #+#    #+#             */
/*   Updated: 2023/08/30 12:02:40 by saeraryu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	if (!f || !del)
		return (NULL);
	new_node = NULL;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_node, new_list);
		lst = lst->next;
	}
	return (new_node);
}
