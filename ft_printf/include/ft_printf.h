/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:47:02 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/24 18:45:04 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_frt
{
	char			flags[11];
	long long int	width;
	long long int	precision;
	char			type;
	long long int	len_frt;
	long long int	len_txt;
}					t_frt;

int					ft_printf(const char *format, ...);
t_frt				ft_parse_frt(const char *format);
void				ft_putfrt(t_frt *mustakrakish, va_list ap);
t_frt				ft_mustakrakish_new(void);
void				ft_set_mustakrakish_len_frt(const char *format, t_frt *m);
void				ft_put_ap_f(t_frt *mustakrakish, va_list ap);

#endif
