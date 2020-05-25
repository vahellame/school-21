/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frt_putchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:29:14 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/20 00:29:34 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../include/ft_printf.h"

void	ft_frt_putchar(char c, t_frt *mustakrakish)
{
	write(1, &c, 1);
	(*mustakrakish).len_txt += 1;
}
