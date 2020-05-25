/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 04:29:34 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/18 04:32:37 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *node_1;
	t_list *node_2;

	if (!lst)
		return (NULL);
	node_1 = f(lst);
	list = ft_lstnew(node_1->content, node_1->content_size);
	node_2 = list;
	lst = lst->next;
	while (lst != NULL)
	{
		node_1 = f(lst);
		if (!(node_2->next = ft_lstnew(node_1->content, node_1->content_size)))
			return (NULL);
		node_2 = node_2->next;
		lst = lst->next;
	}
	return (list);
}
