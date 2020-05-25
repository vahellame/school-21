/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:10:28 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 05:09:51 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTFRT_H
# define FT_PUTFRT_H
# include "ft_printf.h"

void	ft_putfrt_d_i(t_frt *mustakrakish, long long int nbr);
char	*ft_tab_to_pretab_d_i(t_frt *m, char **tab, long long int n_zero);
void	ft_putfrt_d_i_minus(t_frt *mustakrakish, char **tab);
void	ft_putfrt_d_i_zero(t_frt *mustakrakish, char **tab);
void	ft_putfrt_d_i_width(t_frt *mustakrakish, char **tab);
void	ft_putfrt_d_i_nbr_zero(t_frt *mustakrakish, char **tab);
void	ft_putfrt_d_i_nbr_zero_minus(t_frt *mustakrakish, char **tab);
void	ft_putfrt_d_i_nbr_zero_width(t_frt *mustakrakish, char **tab);

void	ft_putfrt_c(t_frt *mustakrakish, int c);

void	ft_putfrt_p(t_frt *mustakrakish, void *ptr);
void	ft_make_tab_ptr(void *ptr, char **tab, size_t i);
void	ft_putfrt_p_precision(t_frt *m, char **tab);
void	ft_putfrt_p_zero(t_frt *m);

void	ft_putfrt_s(t_frt *mustakrakish, char *str);
void	ft_putfrt_s_not_null(t_frt *m, char *tmp);

void	ft_putfrt_x(t_frt *mustakrakish, size_t nbr);
char	*ft_tab_to_pretab_x_u_xu_o(t_frt *mustakrakish, char **tab);
void	ft_putfrt_x_minus(t_frt *mustakrakish, char **tab);
void	ft_putfrt_x_zero(t_frt *mustakrakish, char **tab);
void	ft_putfrt_x_width(t_frt *mustakrakish, char **tab);
void	ft_putfrt_x_u_xu_nbr_zero(t_frt *mustakrakish);

void	ft_putfrt_u(t_frt *mustakrakish, size_t nbr);
void	ft_putfrt_u_minus(t_frt *mustakrakish, char **tab);
void	ft_putfrt_u_zero(t_frt *mustakrakish, char **tab);
void	ft_putfrt_u_width(t_frt *mustakrakish, char **tab);

void	ft_putfrt_xu(t_frt *mustakrakish, size_t nbr);
void	ft_putfrt_xu_minus(t_frt *mustakrakish, char **tab);
void	ft_putfrt_xu_zero(t_frt *mustakrakish, char **tab);
void	ft_putfrt_xu_width(t_frt *mustakrakish, char **tab);

void	ft_putfrt_o(t_frt *mustakrakish, size_t nbr);
void	ft_putfrt_o_minus(t_frt *mustakrakish, char **tab);
void	ft_putfrt_o_zero(t_frt *mustakrakish, char **tab);
void	ft_putfrt_o_width(t_frt *mustakrakish, char **tab);
void	ft_putfrt_o_nbr_zero(t_frt *mustakrakish);
void	ft_putfrt_o_nbr_zero_width(t_frt *m);

void	ft_frt_putnchar(long long int n, char c, t_frt *mustakrakish);
void	ft_frt_putstr(char *s, t_frt *mustakrakish);
void	ft_frt_putchar(char c, t_frt *mustakrakish);

void	ft_putfrt_f(t_frt *mustakrakish, long double nbr);
void	ft_putfrt_f_main(char *full_tab, int sign, t_frt *m);
void	ft_putfrt_f_main_minus(char *full_tab, int sign, t_frt *m);
void	ft_putfrt_f_main_zero(char *full, int sign, t_frt *m);
void	ft_putfrt_f_main_width(char *full_tab, int sign, t_frt *m);
char	*ft_make_part_a_p_tab(long double nbr);
int		ft_round_precision_tab(char *tab, long long int pre);
char	*ft_make_part_full_tab_1(long double nbr, t_frt *m);
char	*ft_make_part_full_tab_2(char *u_p, char *a_p, t_frt *m, char **full);
void	ft_fill_until_pre(char **full, char *a_p, t_frt *m);
int		ft_round_precision_tab_one(const char *a_p);

void	ft_putfrt_b(t_frt *m, size_t nbr);
void	ft_putfrt_b_minus(t_frt *m, char *tab);
void	ft_putfrt_b_zero(t_frt *m, char *tab);
void	ft_putfrt_b_width(t_frt *m, char *tab);

void	ft_putfrt_bu(t_frt *m, char *s);

void	ft_putfrt_q(t_frt *m, char *s);

void	ft_putfrt_vu(t_frt *m, char *s);
char	***ft_make_letters(char ***letters);
void	ft_fill_letters_tab_1(char ***letters);
void	ft_fill_letters_tab_2(char ***letters);
void	ft_fill_letters_tab_3(char ***letters);
void	ft_fill_letters_tab_4(char ***letters);
void	ft_fill_letters_tab_5(char ***letters);

void	ft_putfrt_t(t_frt *m, char *s);
void	ft_putfrt_tu(t_frt *m, char *s);

void	ft_putfrt_percent(t_frt *mustakrakish);

#endif
