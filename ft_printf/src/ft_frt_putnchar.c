/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:16:12 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/14 21:16:17 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../include/ft_printf.h"

void	ft_frt_putnchar(long long int n, char c, t_frt *mustakrakish)
{
	if (n > 0)
		while (n--)
		{
			write(1, &c, 1);
			(*mustakrakish).len_txt++;
		}
}
