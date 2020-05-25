/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:16:16 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/24 14:16:19 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_square(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 1;
	create->x[3] = 1;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 0;
	create->y[3] = 1;
	create->letter = 'A' + j;
}

void	ft_duck1(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 1;
	create->x[3] = 2;
	create->y[0] = 0;
	create->y[1] = 0;
	create->y[2] = 1;
	create->y[3] = 1;
	create->letter = 'A' + j;
}

void	ft_duck2(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 1;
	create->x[3] = 1;
	create->y[0] = 1;
	create->y[1] = 2;
	create->y[2] = 0;
	create->y[3] = 1;
	create->letter = 'A' + j;
}

void	ft_duck3(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 1;
	create->x[3] = 2;
	create->y[0] = 1;
	create->y[1] = 0;
	create->y[2] = 1;
	create->y[3] = 0;
	create->letter = 'A' + j;
}

void	ft_duck4(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 1;
	create->x[3] = 1;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 1;
	create->y[3] = 2;
	create->letter = 'A' + j;
}
