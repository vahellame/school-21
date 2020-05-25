/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 03:29:52 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/18 03:34:28 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;
	t_list *n_alst;

	n_alst = *alst;
	while (n_alst != NULL)
	{
		node = n_alst->next;
		del(n_alst, n_alst->content_size);
		n_alst = node;
	}
	*alst = NULL;
}
