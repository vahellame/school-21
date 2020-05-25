/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:39:16 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 17:05:26 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../include/ft_printf.h"
#include "../../libft/libft.h"

void	ft_putfrt_t(t_frt *m, char *s)
{
	size_t i;

	i = 0;
	(*m).precision = 8;
	if (s != NULL)
		while (s[i])
		{
			ft_putfrt_b(m, s[i]);
			i++;
		}
}
