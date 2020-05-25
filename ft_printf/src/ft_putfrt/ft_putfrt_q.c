/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_q.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 16:59:55 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 05:21:54 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../libft/libft.h"

void	ft_putfrt_q(t_frt *m, char *s)
{
	if (ft_strequ("none", s))
		ft_putstr("\033[0m");
	else if (ft_strequ("black", s))
		ft_putstr("\033[0;30m");
	else if (ft_strequ("red", s))
		ft_putstr("\033[0;31m");
	else if (ft_strequ("green", s))
		ft_putstr("\033[0;32m");
	else if (ft_strequ("orange", s))
		ft_putstr("\033[0;33m");
	else if (ft_strequ("blue", s))
		ft_putstr("\033[0;34m");
	else if (ft_strequ("purple", s))
		ft_putstr("\033[0;35m");
	else if (ft_strequ("cyan", s))
		ft_putstr("\033[0;36m");
	else if (ft_strequ("yellow", s))
		ft_putstr("\033[1;33m");
	else if (ft_strequ("while", s))
		ft_putstr("\033[1;37m");
}
