/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:40:52 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:34:58 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_putfrt_o_minus(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	if ((*mustakrakish).precision == -1)
		(*mustakrakish).precision = 0;
	*tab = ft_tab_to_pretab_x_u_xu_o(mustakrakish, tab);
	n = (*mustakrakish).width - (int)ft_strlen(*tab);
	if (ft_strchr((*mustakrakish).flags, '#') && (*tab)[0] != '0')
	{
		ft_frt_putstr("0", mustakrakish);
		n -= 1;
	}
	ft_frt_putstr(*tab, mustakrakish);
	ft_frt_putnchar(n, ' ', mustakrakish);
}

void	ft_putfrt_o_zero(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	n = (*mustakrakish).width - (int)ft_strlen(*tab);
	if (ft_strchr((*mustakrakish).flags, '#') && (*tab)[0] != '0')
	{
		ft_frt_putstr("0", mustakrakish);
		n -= 1;
	}
	ft_frt_putnchar(n, '0', mustakrakish);
	ft_frt_putstr(*tab, mustakrakish);
}

void	ft_putfrt_o_width(t_frt *mustakrakish, char **tab)
{
	long long int n;

	if ((*mustakrakish).precision == -1)
		(*mustakrakish).precision = 0;
	*tab = ft_tab_to_pretab_x_u_xu_o(mustakrakish, tab);
	if (*tab)
	{
		n = (*mustakrakish).width - (int)ft_strlen(*tab);
		if (ft_strchr((*mustakrakish).flags, '#') && (*tab)[0] != '0')
			n -= 1;
		ft_frt_putnchar(n, ' ', mustakrakish);
		if (ft_strchr((*mustakrakish).flags, '#') && (*tab)[0] != '0')
			ft_frt_putstr("0", mustakrakish);
		ft_frt_putstr(*tab, mustakrakish);
	}
}

void	ft_putfrt_o(t_frt *m, size_t nbr)
{
	char	*tab;

	if (ft_strchr((*m).flags, 'o'))
		nbr = (unsigned long long int)nbr;
	else if (ft_strchr((*m).flags, 'l'))
		nbr = (unsigned long int)nbr;
	else if (ft_strchr((*m).flags, 'h'))
		nbr = (unsigned short int)nbr;
	else if (ft_strchr((*m).flags, 'y'))
		nbr = (unsigned char)nbr;
	else
		nbr = (unsigned int)nbr;
	tab = ft_itoa_base(nbr, 8, 0);
	if (tab)
	{
		if (nbr == 0)
			ft_putfrt_o_nbr_zero(m);
		else if (ft_strchr((*m).flags, '-'))
			ft_putfrt_o_minus(m, &tab);
		else if (ft_strchr((*m).flags, '0') && (*m).precision == -1)
			ft_putfrt_o_zero(m, &tab);
		else
			ft_putfrt_o_width(m, &tab);
		ft_strdel(&tab);
	}
}
