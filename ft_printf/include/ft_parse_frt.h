/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_frt.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:09:20 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/24 14:51:37 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_FRT_H
# define FT_PARSE_FRT_H
# include "ft_printf.h"

void	ft_parse_frt_flags(const char *format, t_frt *mustakrakish);
void	ft_parse_frt_type(const char *format, t_frt *mustakrakish);
void	ft_parse_frt_precision(const char *format, t_frt *mustakrakish);
void	ft_parse_frt_width(const char *format, t_frt *mustakrakish);

#endif
