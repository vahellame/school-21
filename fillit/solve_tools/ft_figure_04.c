/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:16:37 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/24 14:16:39 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_tishka3(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 1;
	create->x[3] = 2;
	create->y[0] = 1;
	create->y[1] = 0;
	create->y[2] = 1;
	create->y[3] = 1;
	create->letter = 'A' + j;
}

void	ft_tishka4(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 0;
	create->x[3] = 1;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 2;
	create->y[3] = 1;
	create->letter = 'A' + j;
}

void	ft_palka2(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 1;
	create->x[2] = 2;
	create->x[3] = 3;
	create->y[0] = 0;
	create->y[1] = 0;
	create->y[2] = 0;
	create->y[3] = 0;
	create->letter = 'A' + j;
}

void	ft_palka1(t_etri *create, int j)
{
	create->x[0] = 0;
	create->x[1] = 0;
	create->x[2] = 0;
	create->x[3] = 0;
	create->y[0] = 0;
	create->y[1] = 1;
	create->y[2] = 2;
	create->y[3] = 3;
	create->letter = 'A' + j;
}
