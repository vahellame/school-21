/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_record.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:17:06 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/24 14:17:55 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/fillit.h"

t_etri	*continue_malloc(t_etri *create, int figure, int j)
{
	if (figure == 11)
		ft_ugol4(create, j);
	else if (figure == 10)
		ft_ugol5(create, j);
	else if (figure == 9)
		ft_ugol6(create, j);
	else if (figure == 8)
		ft_ugol7(create, j);
	else if (figure == 7)
		ft_ugol8(create, j);
	else if (figure == 6)
		ft_tishka1(create, j);
	else if (figure == 5)
		ft_tishka2(create, j);
	else if (figure == 4)
		ft_tishka3(create, j);
	else if (figure == 3)
		ft_tishka4(create, j);
	else if (figure == 2)
		ft_palka2(create, j);
	else if (figure == 1)
		ft_palka1(create, j);
	return (create);
}

t_etri	*ft_create_node(int figure, int j)
{
	t_etri	*create;

	create = (t_etri*)malloc(sizeof(t_etri));
	if (figure == 19)
		ft_square(create, j);
	else if (figure == 18)
		ft_duck1(create, j);
	else if (figure == 17)
		ft_duck2(create, j);
	else if (figure == 16)
		ft_duck3(create, j);
	else if (figure == 15)
		ft_duck4(create, j);
	else if (figure == 14)
		ft_ugol1(create, j);
	else if (figure == 13)
		ft_ugol2(create, j);
	else if (figure == 12)
		ft_ugol3(create, j);
	else
		create = continue_malloc(create, figure, j);
	return (create);
}

t_etri	*ft_record(int *figures)
{
	int		i;
	int		j;
	t_etri	*start;
	t_etri	*tmp;

	j = 0;
	i = 0;
	while (figures[i] != 0)
		i++;
	start = ft_create_node(figures[j], j);
	g_first_figure = start;
	start->next = NULL;
	i--;
	j++;
	tmp = start;
	while (i)
	{
		start->next = ft_create_node(figures[j], j);
		start = start->next;
		i--;
		j++;
	}
	start->next = NULL;
	return (tmp);
}

void	ft_del_figures(void)
{
	t_etri *tmp;

	while (g_first_figure != NULL)
	{
		tmp = g_first_figure->next;
		free(g_first_figure);
		g_first_figure = NULL;
		g_first_figure = tmp;
	}
}
