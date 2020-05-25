/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_mustakrakish_len_frt.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:16:26 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/14 21:16:31 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_set_mustakrakish_len_frt(const char *f, t_frt *m)
{
	while (*f && (*f == '#' || *f == '+' || *f == '-' || *f == ' ' || (*f >= '0'
	&& *f <= '9') || *f == 'h' || *f == 'l' || *f == 'L' || *f == '.') &&
	(*f != 's' && *f != 'c' && *f != 'p' && *f != 'd' && *f != 'i' &&
	*f != 'o' && *f != 'u' && *f != 'x' && *f != 'X' && *f != 'f' && *f != '%'))
	{
		(*m).len_frt++;
		f++;
	}
	(*m).len_frt += 2;
}