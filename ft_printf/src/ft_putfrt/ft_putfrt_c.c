/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:21:04 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/14 21:21:27 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"

void	ft_putfrt_c(t_frt *m, int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (ft_strchr((*m).flags, '-'))
	{
		ft_frt_putchar((char)uc, m);
		ft_frt_putnchar((*m).width - 1, ' ', m);
	}
	else
	{
		ft_frt_putnchar((*m).width - 1, ' ', m);
		ft_frt_putchar((char)uc, m);
	}
}
