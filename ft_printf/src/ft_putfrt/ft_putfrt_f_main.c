/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_f_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:33:39 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:40:22 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"

void	ft_putfrt_f_main_minus(char *full, int sign, t_frt *m)
{
	if (sign == -1)
		ft_frt_putchar('-', m);
	else if (ft_strchr((*m).flags, '+'))
		ft_frt_putchar('+', m);
	else if (ft_strchr((*m).flags, ' '))
		ft_frt_putchar(' ', m);
	ft_frt_putstr(full, m);
	ft_frt_putnchar((*m).precision - 54, '0', m);
	ft_frt_putnchar((*m).width - (*m).len_txt, ' ', m);
}

void	ft_putfrt_f_main_zero(char *full, int sign, t_frt *m)
{
	size_t	n;

	if (sign == -1)
		ft_frt_putchar('-', m);
	else if (ft_strchr((*m).flags, '+'))
		ft_frt_putchar('+', m);
	else if (ft_strchr((*m).flags, ' '))
		ft_frt_putchar(' ', m);
	n = (*m).width - (*m).len_txt - (long long)ft_strlen(full);
	if ((*m).precision > 54)
		n = n - (*m).precision + 54;
	ft_frt_putnchar(n, '0', m);
	ft_frt_putstr(full, m);
	ft_frt_putnchar((*m).precision - 54, '0', m);
}

void	ft_putfrt_f_main_width(char *full, int sign, t_frt *m)
{
	long long int	n;

	n = (*m).width - (long long)ft_strlen(full);
	if (sign == -1 || ft_strchr((*m).flags, '+') || ft_strchr((*m).flags, ' '))
		n -= 1;
	if ((*m).precision > 54)
		n = n - (*m).precision + 54;
	ft_frt_putnchar(n, ' ', m);
	if (sign == -1)
		ft_frt_putchar('-', m);
	else if (ft_strchr((*m).flags, '+'))
		ft_frt_putchar('+', m);
	else if (ft_strchr((*m).flags, ' '))
		ft_frt_putchar(' ', m);
	ft_frt_putstr(full, m);
	ft_frt_putnchar((*m).precision - 54, '0', m);
}

int		ft_round_precision_tab_one(const char *a_p)
{
	if (a_p)
		if (a_p[0] > '4')
			return (1);
	return (0);
}
