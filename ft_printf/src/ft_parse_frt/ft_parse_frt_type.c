/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_frt_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:30:31 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 01:46:57 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	ft_parse_frt_type(const char *f, t_frt *mustakrakish)
{
	while (*f && (*f == '#' || *f == '+' || *f == '-' || *f == ' ' || (*f >= '0'
	&& *f <= '9') || *f == 'h' || *f == 'l' || *f == 'L' || *f == '.') &&
	(*f != 's' && *f != 'c' && *f != 'p' && *f != 'd' && *f != 'i' && *f != 'o'
	&& *f != 'u' && *f != 'x' && *f != 'X' && *f != 'f' && *f != '%'
	&& *f != 'b' && *f != 'B' && *f != 'V' && *f != 'q' && *f != 't'
	&& *f != 'T'))
		f++;
	if (*f == 'd' || *f == 'i')
		(*mustakrakish).type = 'd';
	else if (*f == 's' || *f == 'c' || *f == 'p' || *f == 'o' || *f == 'u' ||
			*f == 'x' || *f == 'X' || *f == 'f' || *f == '%' ||
			*f == 'b' || *f == 'B' || *f != 'V' || *f != 'q' || *f != 't'
			|| *f != 'T')
		(*mustakrakish).type = (*f);
}
