/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_o_nbr_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 23:48:43 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 17:43:25 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_putfrt_o_nbr_zero_width(t_frt *m)
{
	long long int n;

	if ((*m).precision == -2)
		(*m).precision = 0;
	else if ((*m).precision == -1)
		(*m).precision = 1;
	n = (*m).precision;
	if (n <= 0 && ft_strchr((*m).flags, '#') != NULL)
		n = 1;
	ft_frt_putnchar((*m).width - n, ' ', m);
	ft_frt_putnchar(n, '0', m);
}

void	ft_putfrt_o_nbr_zero(t_frt *m)
{
	if (ft_strchr((*m).flags, '-'))
	{
		if ((*m).precision == -2)
			(*m).precision = 0;
		else if ((*m).precision == -1)
			(*m).precision = 1;
		if (ft_strchr((*m).flags, '#'))
			ft_frt_putchar('0', m);
		ft_frt_putnchar((*m).precision - (*m).len_txt, '0', m);
		ft_frt_putnchar(((*m).width - (*m).len_txt), ' ', m);
	}
	else if (ft_strchr((*m).flags, '0') && (*m).precision == -1)
	{
		if (ft_strchr((*m).flags, '#'))
			ft_frt_putchar('0', m);
		ft_frt_putnchar(((*m).width - (*m).len_txt), '0', m);
	}
	else
		ft_putfrt_o_nbr_zero_width(m);
}
