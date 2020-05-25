/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:00:06 by enine             #+#    #+#             */
/*   Updated: 2019/10/17 19:01:19 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"
#include "../libft/libft.h"

int		ft_clear(char **matrix, char letter)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (matrix[i])
	{
		while (matrix[i][j])
		{
			if (matrix[i][j] == letter)
				matrix[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		print_map(char **map)
{
	int i;

	i = 0;
	while (map[i])
	{
		ft_putendl(map[i]);
		i++;
	}
	free_map(&map);
	return (0);
}

int		ft_decode(t_etri *figures, char **map, int i, int j)
{
	int p;
	int count;

	p = 4;
	count = 0;
	while (i < g_size)
	{
		while (p--)
			if (figures->x[p] + i < g_size && figures->y[p] + j < g_size
			&& map[figures->x[p] + i][figures->y[p] + j] == '.' && ++count)
				map[figures->x[p] + i][figures->y[p] + j] = figures->letter;
		p = 4;
		j++;
		if (j == g_size && ++i)
			j = 0;
		if (count == 4 && figures->next)
			if (!ft_decode(figures->next, map, 0, 0))
				return (0);
		if (!(figures->next) && count == 4)
			return (print_map(map));
		count = ft_clear(map, figures->letter);
	}
	return (1);
}
