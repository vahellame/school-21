/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_tools_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:31:39 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/25 17:53:41 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/check_n_read.h"

int		ft_check_figure_all_1(char *str)
{
	int res;

	res = ft_check_figure_01(str);
	if (res)
		return (res);
	res = ft_check_figure_02(str);
	if (res)
		return (res);
	res = ft_check_figure_03(str);
	if (res)
		return (res);
	res = ft_check_figure_04(str);
	if (res)
		return (res);
	res = ft_check_figure_05(str);
	if (res)
		return (res);
	res = ft_check_figure_06(str);
	if (res)
		return (res);
	res = ft_check_figure_07(str);
	if (res)
		return (res);
	return (0);
}

int		ft_check_figure_all_2(char *str)
{
	int res;

	res = ft_check_figure_all_1(str);
	if (res)
		return (res);
	res = ft_check_figure_08(str);
	if (res)
		return (res);
	res = ft_check_figure_09(str);
	if (res)
		return (res);
	res = ft_check_figure_10(str);
	if (res)
		return (res);
	res = ft_check_figure_11(str);
	if (res)
		return (res);
	res = ft_check_figure_12(str);
	if (res)
		return (res);
	res = ft_check_figure_13(str);
	if (res)
		return (res);
	return (0);
}

int		ft_num_of_figure(char *str)
{
	int res;

	res = ft_check_figure_all_2(str);
	if (res)
		return (res);
	res = ft_check_figure_14(str);
	if (res)
		return (res);
	res = ft_check_figure_15(str);
	if (res)
		return (res);
	res = ft_check_figure_16(str);
	if (res)
		return (res);
	res = ft_check_figure_17(str);
	if (res)
		return (res);
	res = ft_check_figure_18(str);
	if (res)
		return (res);
	res = ft_check_figure_19(str);
	if (res)
		return (res);
	return (0);
}

int		ft_check_sqr(char *str)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
			k++;
		if (str[i] != '.' && str[i] != '\n' && str[i] != '#')
			return (0);
		i++;
		if ((i + 1) % 5 == 0 && str[i] != '\n')
			return (0);
	}
	if (k != 4)
		return (0);
	return (1);
}

int		ft_check_sqrs(char *str, int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (!(ft_check_sqr(str)) || !(ft_num_of_figure(str)))
			return (0);
		str += 21;
		i++;
	}
	return (1);
}
