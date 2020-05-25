/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_frt_flags.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:49:38 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/20 23:45:32 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../include/ft_printf.h"
#include "../../libft/libft.h"

static int	ft_parse_zero_flag(const char *f, t_frt *m)
{
	while (*f && *f != '%' && *f != '0' && (*f == '#' || *f == '+' || *f == '-'
	|| *f == ' ' || *f == 'l' || *f == 'h' || *f == 'L'))
		f++;
	if (*f == '0')
	{
		((*m).flags)[0] = '0';
		return (1);
	}
	return (0);
}

void		ft_parse_frt_flags(const char *f, t_frt *m)
{
	int		i;

	i = ft_parse_zero_flag(f, m);
	while (*f == '#' || *f == '+' || *f == '-' || *f == ' ' || *f == 'l' ||
	*f == 'h' || *f == 'L' || *f == '.' || (*f >= '0' && *f <= '9'))
	{
		if (ft_strchr((*m).flags, *f) == NULL && !(*f >= '0' && *f <= '9') &&
		*f != '.')
		{
			if (*f == 'h' && f[1] == *f && !(ft_strchr((*m).flags, 'y')))
			{
				((*m).flags)[i] = 'y';
				f++;
			}
			else if (*f == 'l' && f[1] == *f && !(ft_strchr((*m).flags, 'o')))
			{
				((*m).flags)[i] = 'o';
				f++;
			}
			else
				((*m).flags)[i] = (*f);
			i++;
		}
		f++;
	}
}
