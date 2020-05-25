/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:53:05 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:40:01 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"

void	ft_putfrt_f_main(char *full_tab, int sign, t_frt *m)
{
	if (ft_strchr((*m).flags, '-'))
		ft_putfrt_f_main_minus(full_tab, sign, m);
	else if (ft_strchr((*m).flags, '0'))
		ft_putfrt_f_main_zero(full_tab, sign, m);
	else
		ft_putfrt_f_main_width(full_tab, sign, m);
}

void	ft_putfrt_f(t_frt *m, long double nbr)
{
	char	*full_tab;
	int		sign;

	if (ft_strchr((*m).flags, 'L'))
		nbr = nbr;
	else
		nbr = (double)nbr;
	sign = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		sign = -1;
	}
	full_tab = ft_make_part_full_tab_1(nbr, m);
	ft_putfrt_f_main(full_tab, sign, m);
	if (full_tab != NULL)
		ft_strdel(&full_tab);
}
