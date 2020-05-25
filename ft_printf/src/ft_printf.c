/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:14:51 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 05:11:53 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "../include/ft_printf.h"
#include "../include/ft_parse_frt.h"
#include "../include/ft_putfrt.h"
#include "../libft/libft.h"

void			ft_put_ap_f(t_frt *mustakrakish, va_list ap)
{
	if (ft_strchr((*mustakrakish).flags, 'L'))
		ft_putfrt_f(mustakrakish, va_arg(ap, long double));
	else
		ft_putfrt_f(mustakrakish, va_arg(ap, double));
}

int				ft_putfrt_bonus(t_frt *mustakrakish, va_list ap)
{
	if ((*mustakrakish).type == 'b')
		ft_putfrt_b(mustakrakish, va_arg(ap, size_t));
	else if ((*mustakrakish).type == 'B')
		ft_putfrt_bu(mustakrakish, va_arg(ap, char*));
	else if ((*mustakrakish).type == 'q')
		ft_putfrt_q(mustakrakish, va_arg(ap, char*));
	else if ((*mustakrakish).type == 'V')
		ft_putfrt_vu(mustakrakish, va_arg(ap, char*));
	else if ((*mustakrakish).type == 't')
		ft_putfrt_t(mustakrakish, va_arg(ap, char*));
	else if ((*mustakrakish).type == 'T')
		ft_putfrt_tu(mustakrakish, va_arg(ap, char*));
	else
		return (0);
	return (1);
}

void			ft_putfrt(t_frt *mustakrakish, va_list ap)
{
	if ((*mustakrakish).type == 's')
		ft_putfrt_s(mustakrakish, va_arg(ap, char*));
	else if ((*mustakrakish).type == 'c')
		ft_putfrt_c(mustakrakish, va_arg(ap, int));
	else if ((*mustakrakish).type == 'p')
		ft_putfrt_p(mustakrakish, va_arg(ap, void*));
	else if ((*mustakrakish).type == 'd')
		ft_putfrt_d_i(mustakrakish, va_arg(ap, long long int));
	else if ((*mustakrakish).type == 'u')
		ft_putfrt_u(mustakrakish, va_arg(ap, size_t));
	else if ((*mustakrakish).type == 'x')
		ft_putfrt_x(mustakrakish, va_arg(ap, long long int));
	else if ((*mustakrakish).type == 'X')
		ft_putfrt_xu(mustakrakish, va_arg(ap, long long int));
	else if ((*mustakrakish).type == 'o')
		ft_putfrt_o(mustakrakish, va_arg(ap, long long int));
	else if ((*mustakrakish).type == 'f')
		ft_put_ap_f(mustakrakish, ap);
	else if ((*mustakrakish).type == '%')
		ft_putfrt_percent(mustakrakish);
	else if (ft_putfrt_bonus(mustakrakish, ap) == 0)
		(*mustakrakish).len_frt = 1;
}

t_frt			ft_parse_frt(const char *format)
{
	t_frt	mustakrakish;

	format++;
	mustakrakish = ft_mustakrakish_new();
	ft_parse_frt_type(format, &mustakrakish);
	ft_parse_frt_flags(format, &mustakrakish);
	ft_parse_frt_precision(format, &mustakrakish);
	ft_parse_frt_width(format, &mustakrakish);
	ft_set_mustakrakish_len_frt(format, &mustakrakish);
	return (mustakrakish);
}

int				ft_printf(const char *format, ...)
{
	va_list	ap;
	t_frt	mustakrakish;
	int		len;

	va_start(ap, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			mustakrakish = ft_parse_frt(format);
			ft_putfrt(&mustakrakish, ap);
			format += mustakrakish.len_frt;
			len += (int)mustakrakish.len_txt;
		}
		else
		{
			write(1, format, 1);
			len++;
			format++;
		}
	}
	va_end(ap);
	return (len);
}
