/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_xu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:55:22 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 02:57:39 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"

void	ft_putfrt_xu_minus(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	if ((*mustakrakish).precision == -1)
		(*mustakrakish).precision = 0;
	*tab = ft_tab_to_pretab_x_u_xu_o(mustakrakish, tab);
	n = (*mustakrakish).width - (long long)ft_strlen(*tab);
	if (ft_strchr((*mustakrakish).flags, '#'))
	{
		ft_frt_putstr("0X", mustakrakish);
		n -= 2;
	}
	ft_frt_putstr(*tab, mustakrakish);
	ft_frt_putnchar(n, ' ', mustakrakish);
}

void	ft_putfrt_xu_zero(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	n = (*mustakrakish).width - (long long)ft_strlen(*tab);
	if (ft_strchr((*mustakrakish).flags, '#'))
	{
		ft_frt_putstr("0X", mustakrakish);
		n -= 2;
	}
	ft_frt_putnchar(n, '0', mustakrakish);
	ft_frt_putstr(*tab, mustakrakish);
}

void	ft_putfrt_xu_width(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	if ((*mustakrakish).precision == -1)
		(*mustakrakish).precision = 0;
	*tab = ft_tab_to_pretab_x_u_xu_o(mustakrakish, tab);
	if (*tab)
	{
		n = (*mustakrakish).width - (long long)ft_strlen(*tab);
		if (ft_strchr((*mustakrakish).flags, '#'))
			n -= 2;
		ft_frt_putnchar(n, ' ', mustakrakish);
		if (ft_strchr((*mustakrakish).flags, '#'))
			ft_frt_putstr("0X", mustakrakish);
		ft_frt_putstr(*tab, mustakrakish);
	}
}

void	ft_putfrt_xu(t_frt *m, size_t nbr)
{
	char	*tab;

	if (ft_strchr((*m).flags, 'o'))
		nbr = (size_t)nbr;
	else if (ft_strchr((*m).flags, 'l'))
		nbr = (unsigned long int)nbr;
	else if (ft_strchr((*m).flags, 'h'))
		nbr = (unsigned short int)nbr;
	else if (ft_strchr((*m).flags, 'y'))
		nbr = (unsigned char)nbr;
	else
		nbr = (unsigned int)nbr;
	tab = ft_itoa_base(nbr, 16, 0);
	if (tab)
	{
		if (nbr == 0)
			ft_putfrt_x_u_xu_nbr_zero(m);
		else if (ft_strchr((*m).flags, '-'))
			ft_putfrt_xu_minus(m, &tab);
		else if (ft_strchr((*m).flags, '0') && (*m).precision == -1)
			ft_putfrt_xu_zero(m, &tab);
		else
			ft_putfrt_xu_width(m, &tab);
		ft_strdel(&tab);
	}
}
