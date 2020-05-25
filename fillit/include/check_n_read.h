/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_n_read.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:36:48 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/22 12:36:50 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_N_READ_H
# define CHECK_N_READ_H

int		ft_check_figure_01(char *str);
int		ft_check_figure_02(char *str);
int		ft_check_figure_03(char *str);
int		ft_check_figure_04(char *str);
int		ft_check_figure_05(char *str);
int		ft_check_figure_06(char *str);
int		ft_check_figure_07(char *str);
int		ft_check_figure_08(char *str);
int		ft_check_figure_09(char *str);
int		ft_check_figure_10(char *str);
int		ft_check_figure_11(char *str);
int		ft_check_figure_12(char *str);
int		ft_check_figure_13(char *str);
int		ft_check_figure_14(char *str);
int		ft_check_figure_15(char *str);
int		ft_check_figure_16(char *str);
int		ft_check_figure_17(char *str);
int		ft_check_figure_18(char *str);
int		ft_check_figure_19(char *str);
int		ft_check_figure_all_1(char *str);
int		ft_check_figure_all_2(char *str);
int		ft_num_of_figure(char *str);
int		ft_check_sqr(char *str);
int		ft_check_sqrs(char *str, int n);
char	*ft_read_file(char **file, int fd);
int		ft_check_file(char *str);
int		*ft_num_of_figures_in_time_order(char *str, int **time_order_figures);
char	*ft_check_n_read(char *filename);

#endif
