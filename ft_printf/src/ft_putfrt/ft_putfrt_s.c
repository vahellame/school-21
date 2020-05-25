/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:22:14 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/20 00:36:06 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../include/ft_printf.h"
#include "../../libft/libft.h"

void	ft_putfrt_s_not_null(t_frt *m, char *tmp)
{
	if (tmp)
	{
		if ((*m).precision == -2)
			(*m).precision = 0;
		if ((*m).precision < ft_strlen(tmp))
			tmp[(*m).precision] = '\0';
		if (ft_strchr((*m).flags, '-'))
		{
			ft_frt_putstr(tmp, m);
			ft_frt_putnchar((long long)((*m).width - ft_strlen(tmp)), ' ', m);
		}
		else
		{
			ft_frt_putnchar((long long)((*m).width - ft_strlen(tmp)), ' ', m);
			ft_frt_putstr(tmp, m);
		}
	}
}

void	ft_putfrt_s(t_frt *m, char *s)
{
	char *tmp;

	if (s != NULL)
		tmp = ft_strdup(s);
	else
		tmp = ft_strdup("(null)");
	ft_putfrt_s_not_null(m, tmp);
	if (tmp)
		ft_strdel(&tmp);
}
