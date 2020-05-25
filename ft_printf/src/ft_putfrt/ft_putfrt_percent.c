/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 23:48:56 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/20 23:48:58 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../include/ft_printf.h"
#include "../../libft/libft.h"

void	ft_putfrt_percent(t_frt *m)
{
	if (ft_strchr((*m).flags, '-'))
	{
		ft_frt_putchar('%', m);
		ft_frt_putnchar((*m).width - 1, ' ', m);
	}
	else if (ft_strchr((*m).flags, '0'))
	{
		ft_frt_putnchar((*m).width - 1, '0', m);
		ft_frt_putchar('%', m);
	}
	else
	{
		ft_frt_putnchar((*m).width - 1, ' ', m);
		ft_frt_putchar('%', m);
	}
}
