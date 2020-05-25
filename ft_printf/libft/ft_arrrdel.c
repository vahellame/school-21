/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 03:09:39 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 05:09:04 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_arrrdel(char ****arr)
{
	size_t	i;
	size_t	j;

	if (*arr)
	{
		i = 0;
		while ((*arr)[i])
		{
			j = 0;
			while ((*arr)[i][j])
			{
				free((*arr)[i][j]);
				j++;
			}
			free((*arr)[i]);
			i++;
		}
		free(*arr);
	}
	*arr = NULL;
}
