/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 04:02:54 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:37:02 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"

void	ft_make_tab_ptr(void *ptr, char **tab, size_t i)
{
	size_t div;
	size_t tmp;
	size_t n;

	n = (size_t)ptr;
	div = 16;
	while (n / div >= 16)
		div *= 16;
	while (div > 0)
	{
		tmp = '0' + n / div;
		if (tmp > '9')
		{
			tmp += 39;
			(*tab)[i] = (char)tmp;
			i++;
		}
		else
		{
			(*tab)[i] = (char)tmp;
			i++;
		}
		n %= div;
		div /= 16;
	}
}

void	ft_putfrt_p_precision(t_frt *m, char **tab)
{
	long long int n;

	if (ft_strchr((*m).flags, '-'))
	{
		ft_frt_putstr("0x", m);
		ft_frt_putnchar((*m).precision - (int)ft_strlen(*tab), '0', m);
		ft_frt_putstr((*tab), m);
		ft_frt_putnchar(((*m).width - (*m).len_txt), ' ', m);
	}
	else
	{
		if ((*m).precision > (int)ft_strlen(*tab))
			n = (*m).precision + 2;
		else
			n = (int)ft_strlen(*tab) + 2;
		ft_frt_putnchar(((*m).width - n), ' ', m);
		ft_frt_putstr("0x", m);
		ft_frt_putnchar((*m).precision - (long long)ft_strlen(*tab), '0', m);
		ft_frt_putstr((*tab), m);
	}
}

void	ft_putfrt_p_zero(t_frt *m)
{
	if ((*m).precision == -1)
		(*m).precision = 1;
	else if ((*m).precision == -2 || (*m).precision == 0)
		(*m).precision = 0;
	if (ft_strchr((*m).flags, '-'))
	{
		ft_frt_putstr("0x", m);
		ft_frt_putnchar((*m).precision, '0', m);
		ft_frt_putnchar(((*m).width - (*m).len_txt), ' ', m);
	}
	else
	{
		ft_frt_putnchar(((*m).width - 2) - (*m).precision, ' ', m);
		ft_frt_putstr("0x", m);
		ft_frt_putnchar((*m).precision, '0', m);
	}
}

void	ft_putfrt_p(t_frt *m, void *ptr)
{
	char	*tab;

	tab = (char*)malloc(sizeof(char) * 20);
	if (tab)
	{
		ft_bzero(tab, 20);
		ft_make_tab_ptr(ptr, &tab, 0);
		if (ft_strequ(tab, "00"))
		{
			ft_putfrt_p_zero(m);
		}
		else
			ft_putfrt_p_precision(m, &tab);
		ft_strdel(&tab);
	}
}
