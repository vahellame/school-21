/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:16:23 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/24 14:16:26 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_ugol1(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 2;
	create->x[3] = 2;
	create->y[0] = 1;
	create->y[1] = 1;
	create->y[2] = 1;
	create->y[3] = 0;
	create->letter = 'A' + j;
}

void	ft_ugol2(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 0;
	create->x[3] = 1;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 2;
	create->y[3] = 2;
	create->letter = 'A' + j;
}

void	ft_ugol3(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 1;
	create->x[3] = 2;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 0;
	create->y[3] = 0;
	create->letter = 'A' + j;
}

void	ft_ugol4(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 1;
	create->x[3] = 1;
	create->y[0] = 0;
	create->y[1] = 0;
	create->y[2] = 1;
	create->y[3] = 2;
	create->letter = 'A' + j;
}

void	ft_ugol5(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 2;
	create->x[3] = 2;
	create->y[0] = 0;
	create->y[1] = 0;
	create->y[2] = 0;
	create->y[3] = 1;
	create->letter = 'A' + j;
}
