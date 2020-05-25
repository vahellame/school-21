/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_bu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:38:03 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 17:43:02 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_putfrt_bu(t_frt *m, char *s)
{
	char			*tab;
	long long int	nbr;

	nbr = ft_atoll_base(s, 2);
	if (ft_strchr((*m).flags, 'o'))
		nbr = nbr;
	else if (ft_strchr((*m).flags, 'l'))
		nbr = (long int)nbr;
	else if (ft_strchr((*m).flags, 'h'))
		nbr = (short int)nbr;
	else if (ft_strchr((*m).flags, 'y'))
		nbr = (char)nbr;
	else
		nbr = (int)nbr;
	tab = ft_itoa(ft_atoll_base(s, 2));
	if (tab && nbr == 0)
		ft_putfrt_d_i_nbr_zero(m, &tab);
	else if (tab && ft_strchr((*m).flags, '-'))
		ft_putfrt_d_i_minus(m, &tab);
	else if (tab && ft_strchr((*m).flags, '0') && (*m).precision == -1)
		ft_putfrt_d_i_zero(m, &tab);
	else if (tab)
		ft_putfrt_d_i_width(m, &tab);
}
