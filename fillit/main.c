/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:37:37 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/25 17:49:46 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"
#include "include/check_n_read.h"
#include "include/fillit.h"
#include <stdlib.h>

void	ft_solve(int *figures_in_time_order)
{
	t_etri		*figures;
	t_etri		*tmp;
	int			i;

	i = 1;
	figures = ft_record(figures_in_time_order);
	tmp = figures;
	while (figures->next)
	{
		figures = figures->next;
		i++;
	}
	fillit(tmp, i);
}

int		ft_bad_usage(void)
{
	write(1, "usage: ./fillit file_with_tetriminos\n", 37);
	return (1);
}

int		ft_bad_file(void)
{
	write(1, "error\n", 6);
	return (1);
}

int		main(int ac, char **av)
{
	char	*file;
	int		*t_o_figures;

	if (ac != 2)
		return (ft_bad_usage());
	file = ft_check_n_read(av[1]);
	if (!file)
		return (ft_bad_file());
	t_o_figures = ft_num_of_figures_in_time_order(file, &t_o_figures);
	ft_solve(t_o_figures);
	free(file);
	free(t_o_figures);
	ft_del_figures();
	return (0);
}
