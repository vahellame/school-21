/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:16:30 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/24 14:16:33 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_ugol6(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 1;
	create->x[3] = 1;
	create->y[0] = 2;
	create->y[1] = 0;
	create->y[2] = 1;
	create->y[3] = 2;
	create->letter = 'A' + j;
}

void	ft_ugol7(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 1;
	create->x[3] = 2;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 1;
	create->y[3] = 1;
	create->letter = 'A' + j;
}

void	ft_ugol8(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 0;
	create->x[3] = 1;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 2;
	create->y[3] = 0;
	create->letter = 'A' + j;
}

void	ft_tishka1(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 1;
	create->x[3] = 2;
	create->y[0] = 0;
	create->y[1] = 0;
	create->y[2] = 1;
	create->y[3] = 0;
	create->letter = 'A' + j;
}

void	ft_tishka2(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 1;
	create->x[3] = 1;
	create->y[0] = 1;
	create->y[1] = 0;
	create->y[2] = 1;
	create->y[3] = 2;
	create->letter = 'A' + j;
}
