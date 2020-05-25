/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 04:06:22 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:37:24 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

char	*ft_tab_to_pretab_x_u_xu_o(t_frt *mustakrakish, char **tab)
{
	char			*new_tab;
	char			*tmp;
	long long int	n_zero;

	tmp = *tab;
	if ((*mustakrakish).precision <= ft_strlen(*tab))
		return (tmp);
	new_tab = (char*)malloc(sizeof(char) * ((*mustakrakish).precision + 2));
	if (!new_tab)
		return (NULL);
	ft_bzero(new_tab, (*mustakrakish).precision + 2);
	n_zero = (*mustakrakish).precision - (long long)ft_strlen(*tab);
	while (n_zero-- > 0)
		ft_strcat(new_tab, "0");
	ft_strcat(new_tab, *tab);
	ft_strdel(&tmp);
	return (new_tab);
}

void	ft_putfrt_x_minus(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	if ((*mustakrakish).precision == -1)
		(*mustakrakish).precision = 0;
	*tab = ft_tab_to_pretab_x_u_xu_o(mustakrakish, tab);
	n = (*mustakrakish).width - (long long)ft_strlen(*tab);
	if (ft_strchr((*mustakrakish).flags, '#'))
	{
		ft_frt_putstr("0x", mustakrakish);
		n -= 2;
	}
	ft_frt_putstr(*tab, mustakrakish);
	ft_frt_putnchar(n, ' ', mustakrakish);
}

void	ft_putfrt_x_zero(t_frt *mustakrakish, char **tab)
{
	long long int	n;

	n = (*mustakrakish).width - (long long)ft_strlen(*tab);
	if (ft_strchr((*mustakrakish).flags, '#'))
	{
		ft_frt_putstr("0x", mustakrakish);
		n -= 2;
	}
	ft_frt_putnchar(n, '0', mustakrakish);
	if (*tab)
		ft_frt_putstr(*tab, mustakrakish);
}

void	ft_putfrt_x_width(t_frt *mustakrakish, char **tab)
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
			ft_frt_putstr("0x", mustakrakish);
		ft_frt_putstr(*tab, mustakrakish);
	}
}

void	ft_putfrt_x(t_frt *m, size_t nbr)
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
	tab = ft_itoa_base(nbr, 16, 1);
	if (tab)
	{
		if (nbr == 0)
			ft_putfrt_x_u_xu_nbr_zero(m);
		else if (ft_strchr((*m).flags, '-'))
			ft_putfrt_x_minus(m, &tab);
		else if (ft_strchr((*m).flags, '0') && (*m).precision == -1)
			ft_putfrt_x_zero(m, &tab);
		else
			ft_putfrt_x_width(m, &tab);
		ft_strdel(&tab);
	}
}
