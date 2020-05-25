/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_d_i_nbr_zero.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:32:30 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/20 00:54:49 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_putfrt_d_i_nbr_zero_minus(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	if (ft_strchr((*mustakrakish).flags, '+'))
		ft_frt_putchar('+', mustakrakish);
	else if (ft_strchr((*mustakrakish).flags, ' '))
		ft_frt_putchar(' ', mustakrakish);
	if ((*mustakrakish).precision == -1)
		(*mustakrakish).precision = 1;
	ft_frt_putnchar((*mustakrakish).precision, '0', mustakrakish);
	n = (*mustakrakish).width - (*mustakrakish).len_txt;
	ft_frt_putnchar(n, ' ', mustakrakish);
	ft_strdel(tab);
}

void	ft_putfrt_d_i_nbr_zero_width(t_frt *m, char **tab)
{
	int c;

	c = 0;
	if (ft_strchr((*m).flags, '+') || ft_strchr((*m).flags, ' '))
		c++;
	if ((*m).precision == -2 || (*m).precision == 0)
	{
		ft_frt_putnchar((*m).width - c, ' ', m);
		if (ft_strchr((*m).flags, '+'))
			ft_frt_putchar('+', m);
		else if (ft_strchr((*m).flags, ' '))
			ft_frt_putchar(' ', m);
	}
	else
	{
		if ((*m).precision == -1)
			(*m).precision = 1;
		ft_frt_putnchar((*m).width - c - (*m).precision, ' ', m);
		if (ft_strchr((*m).flags, '+'))
			ft_frt_putchar('+', m);
		else if (ft_strchr((*m).flags, ' '))
			ft_frt_putchar(' ', m);
		ft_frt_putnchar((*m).precision, '0', m);
	}
	ft_strdel(tab);
}

void	ft_putfrt_d_i_nbr_zero(t_frt *mustakrakish, char **tab)
{
	if (ft_strchr((*mustakrakish).flags, '-'))
		ft_putfrt_d_i_nbr_zero_minus(mustakrakish, tab);
	else if (ft_strchr((*mustakrakish).flags, '0') &&
			(*mustakrakish).precision == -1)
		ft_putfrt_d_i_zero(mustakrakish, tab);
	else
		ft_putfrt_d_i_nbr_zero_width(mustakrakish, tab);
}
