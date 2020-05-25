/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:28:53 by enine             #+#    #+#             */
/*   Updated: 2019/10/16 17:30:41 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/fillit.h"

int		square_side(int count)
{
	int	i;

	i = 2;
	while (i * i < count * 4)
		i++;
	return (i);
}

char	**new_map(void)
{
	int		index;
	int		jndex;
	char	**map;

	index = 0;
	jndex = 0;
	if (!(map = (char**)malloc(sizeof(char**) * g_size + 1)))
		return (NULL);
	while (index < g_size)
	{
		if (!(map[index] = (char*)malloc(sizeof(char*) * (g_size + 1))))
			return (NULL);
		while (jndex < g_size)
		{
			map[index][jndex] = '.';
			jndex++;
		}
		map[index][jndex] = '\0';
		jndex = 0;
		index++;
	}
	map[index] = NULL;
	return (map);
}

int		free_map(char ***map)
{
	int i;

	i = 0;
	while ((*map)[i])
	{
		free((*map)[i]);
		(*map)[i] = NULL;
		i++;
	}
	free(*map);
	(*map) = NULL;
	return (0);
}

int		fillit(t_etri *figures, int count)
{
	char	**map;
	int		c;

	c = 0;
	g_size = square_side(count);
	map = new_map();
	while ((c = ft_decode(figures, map, 0, 0)))
	{
		g_size++;
		free_map(&map);
		map = new_map();
	}
	return (0);
}
