/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_frt_precision.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:32:08 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/14 15:32:10 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_parse_frt_precision(const char *f, t_frt *mustakrakish)
{
	int		i;
	char	precision[21];

	ft_bzero(precision, 21);
	while (*f && (*f == '#' || *f == '+' || *f == '-' || *f == ' ' ||
	(*f >= '0' && *f <= '9') || *f == 'h' || *f == 'l' || *f == 'L') &&
	(*f != 's' && *f != 'c' && *f != 'p' && *f != 'd' && *f != 'i' && *f != 'o'
	&& *f != 'u' && *f != 'x' && *f != 'X' && *f != 'f' && *f != '.'
	&& *f != '%' && *f != 'b' && *f != 'B' && *f != 'V' && *f != 'q'
	&& *f != 't' && *f != 'T'))
		f++;
	if (*f == '.')
	{
		f++;
		i = 0;
		while (*f && *f >= '0' && *f <= '9')
		{
			precision[i] = (*f);
			i++;
			f++;
		}
		(*mustakrakish).precision = ft_atoll(precision);
		if (precision[0] == 0)
			(*mustakrakish).precision = -2;
	}
}
