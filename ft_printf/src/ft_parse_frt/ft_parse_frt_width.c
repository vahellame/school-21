/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_frt_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:50:28 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/14 19:50:30 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

void	ft_parse_frt_width(const char *f, t_frt *mustakrakish)
{
	int		i;
	char	width[21];

	ft_bzero(width, 21);
	while (*f && (*f == '#' || *f == '+' || *f == '-' || *f == ' ' || *f == 'h'
	|| *f == 'l' || *f == 'L' || *f == '0')
	&& (*f != 's' && *f != 'c' && *f != 'p' && *f != 'd' && *f != 'i' &&
	*f != 'o' && *f != 'u' && *f != 'x' && *f != 'X' && *f != 'f' &&
	*f != '.' && !(*f >= '1' && *f <= '9') && *f != '%'
	&& *f != 'b' && *f != 'B' && *f != 'V' && *f != 'q' && *f != 't'
	&& *f != 'T'))
		f++;
	if (*f >= '0' && *f <= '9')
	{
		i = 0;
		while (*f && *f >= '0' && *f <= '9')
		{
			width[i] = (*f);
			i++;
			f++;
		}
		(*mustakrakish).width = ft_atoll(width);
	}
}
