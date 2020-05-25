/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:38:11 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 05:11:10 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_putfrt_b_minus(t_frt *m, char *tab)
{
	if ((*m).precision == -2 || (*m).precision == -1)
		(*m).precision = 0;
	ft_frt_putnchar((*m).precision - (long long)ft_strlen(tab), '0', m);
	ft_frt_putstr(tab, m);
	ft_frt_putnchar((*m).width - (*m).len_txt, ' ', m);
}

void	ft_putfrt_b_zero(t_frt *m, char *tab)
{
	ft_frt_putnchar((*m).width - (long long)ft_strlen(tab), '0', m);
	ft_frt_putstr(tab, m);
}

void	ft_putfrt_b_width(t_frt *m, char *tab)
{
	if ((*m).precision == -2 || (*m).precision == -1)
		(*m).precision = 0;
	if (ft_strlen(tab) > (*m).precision)
		ft_frt_putnchar((*m).width - (long long)ft_strlen(tab), ' ', m);
	else
		ft_frt_putnchar((*m).width - (*m).precision, ' ', m);
	ft_frt_putnchar((*m).precision - (long long)ft_strlen(tab), '0', m);
	ft_frt_putstr(tab, m);
}

void	ft_putfrt_b(t_frt *m, size_t nbr)
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
	tab = ft_itoa_base(nbr, 2, 0);
	if (tab)
	{
		if (ft_strchr((*m).flags, '-'))
			ft_putfrt_b_minus(m, tab);
		else if (ft_strchr((*m).flags, '0') && (*m).precision == -1)
			ft_putfrt_b_zero(m, tab);
		else
			ft_putfrt_b_width(m, tab);
		ft_strdel(&tab);
	}
}
