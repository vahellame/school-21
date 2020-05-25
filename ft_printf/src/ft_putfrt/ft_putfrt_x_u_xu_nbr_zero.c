/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_x_nbr_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 01:00:43 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/20 23:49:15 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_putfrt_x_u_xu_nbr_zero(t_frt *m)
{
	if (ft_strchr((*m).flags, '-'))
	{
		if ((*m).precision == -2)
			(*m).precision = 0;
		else if ((*m).precision == -1)
			(*m).precision = 1;
		ft_frt_putnchar((*m).precision, '0', m);
		ft_frt_putnchar((*m).width - (*m).precision, ' ', m);
	}
	else if (ft_strchr((*m).flags, '0') && (*m).precision == -1)
	{
		ft_frt_putchar('0', m);
		ft_frt_putnchar((*m).width - 1, '0', m);
	}
	else
	{
		if ((*m).precision == -2)
			(*m).precision = 0;
		else if ((*m).precision == -1)
			(*m).precision = 1;
		ft_frt_putnchar((*m).width - (*m).precision, ' ', m);
		ft_frt_putnchar((*m).precision, '0', m);
	}
}
