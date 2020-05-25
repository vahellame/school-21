/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frt_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:29:49 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/20 00:29:57 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../include/ft_printf.h"

void	ft_frt_putstr(char *s, t_frt *mustakrakish)
{
	if (s)
		while (*s)
		{
			write(1, s, 1);
			(*mustakrakish).len_txt += 1;
			s++;
		}
}
