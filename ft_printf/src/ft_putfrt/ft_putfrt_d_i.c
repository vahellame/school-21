/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_d_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:34:54 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:36:10 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

char	*ft_tab_to_pretab_d_i(t_frt *m, char **tab, long long int n_zero)
{
	char	*new_tab;
	char	*tmp;

	tmp = *tab;
	new_tab = NULL;
	if (tmp)
	{
		if ((*tab)[0] == '-')
			(*tab)++;
		if ((*m).precision <= ft_strlen(*tab))
			return (tmp);
		new_tab = (char *)malloc(sizeof(char) * ((*m).precision + 2));
		if (!new_tab)
			return (NULL);
		ft_bzero(new_tab, (*m).precision + 2);
		if (tmp[0] == '-')
			new_tab[0] = '-';
		n_zero = (*m).precision - (long long)ft_strlen(*tab);
		while (n_zero-- > 0)
			ft_strcat(new_tab, "0");
		ft_strcat(new_tab, *tab);
		ft_strdel(&tmp);
	}
	return (new_tab);
}

void	ft_putfrt_d_i_minus(t_frt *m, char **tab)
{
	long long int	n;
	char			c;
	char			*tmp;

	if ((*m).precision == -1)
		(*m).precision = 0;
	*tab = ft_tab_to_pretab_d_i(m, tab, 0);
	tmp = (*tab);
	c = 0;
	if ((*tab)[0] == '-')
	{
		(*tab)++;
		c = 1;
		ft_frt_putchar('-', m);
	}
	if (c == 0 && ft_strchr((*m).flags, '+'))
		ft_frt_putchar('+', m);
	else if (c == 0 && ft_strchr((*m).flags, ' '))
		ft_frt_putchar(' ', m);
	ft_frt_putstr(*tab, m);
	n = (*m).width - (long long)ft_strlen(*tab);
	if (c == 1 || ft_strchr((*m).flags, '+') || ft_strchr((*m).flags, ' '))
		n -= 1;
	ft_frt_putnchar(n, ' ', m);
	ft_strdel(&tmp);
}

void	ft_putfrt_d_i_zero(t_frt *mustakrakish, char **tab)
{
	long long int	n;
	char			c;
	char			*tmp;

	tmp = (*tab);
	c = 0;
	if ((*tab)[0] == '-')
	{
		(*tab)++;
		c = 1;
		ft_frt_putchar('-', mustakrakish);
	}
	if (c == 0 && ft_strchr((*mustakrakish).flags, '+'))
		ft_frt_putchar('+', mustakrakish);
	else if (c == 0 && ft_strchr((*mustakrakish).flags, ' '))
		ft_frt_putchar(' ', mustakrakish);
	n = (*mustakrakish).width - (long long)ft_strlen(*tab);
	if (c == 1 || ft_strchr((*mustakrakish).flags, '+') ||
			ft_strchr((*mustakrakish).flags, ' '))
		n -= 1;
	ft_frt_putnchar(n, '0', mustakrakish);
	ft_frt_putstr(*tab, mustakrakish);
	ft_strdel(&tmp);
}

void	ft_putfrt_d_i_width(t_frt *mustakrakish, char **tab)
{
	long long int	n;
	char			*tmp;

	if ((*mustakrakish).precision == -1)
		(*mustakrakish).precision = 0;
	*tab = ft_tab_to_pretab_d_i(mustakrakish, tab, 0);
	tmp = (*tab);
	if (*tab)
	{
		n = (*mustakrakish).width - (long long)ft_strlen(*tab);
		if ((ft_strchr((*mustakrakish).flags, '+') ||
		ft_strchr((*mustakrakish).flags, ' ')) && (*tab)[0] != '-')
			n -= 1;
		ft_frt_putnchar(n, ' ', mustakrakish);
		if ((*tab)[0] != '-' && ft_strchr((*mustakrakish).flags, '+'))
			ft_frt_putchar('+', mustakrakish);
		else if ((*tab)[0] != '-' && ft_strchr((*mustakrakish).flags, ' '))
			ft_frt_putchar(' ', mustakrakish);
		ft_frt_putstr(*tab, mustakrakish);
	}
	ft_strdel(&tmp);
}

void	ft_putfrt_d_i(t_frt *mustakrakish, long long int nbr)
{
	char	*tab;

	if (ft_strchr((*mustakrakish).flags, 'o'))
		nbr = nbr;
	else if (ft_strchr((*mustakrakish).flags, 'l'))
		nbr = (long int)nbr;
	else if (ft_strchr((*mustakrakish).flags, 'h'))
		nbr = (short int)nbr;
	else if (ft_strchr((*mustakrakish).flags, 'y'))
		nbr = (char)nbr;
	else
		nbr = (int)nbr;
	tab = ft_itoa(nbr);
	if (tab)
	{
		if (nbr == 0)
			ft_putfrt_d_i_nbr_zero(mustakrakish, &tab);
		else if (ft_strchr((*mustakrakish).flags, '-'))
			ft_putfrt_d_i_minus(mustakrakish, &tab);
		else if (ft_strchr((*mustakrakish).flags, '0') &&
				(*mustakrakish).precision == -1)
			ft_putfrt_d_i_zero(mustakrakish, &tab);
		else
			ft_putfrt_d_i_width(mustakrakish, &tab);
	}
}
