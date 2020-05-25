/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_n_read_tools_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:04:11 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/25 17:49:23 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "../include/check_n_read.h"

char	*ft_read_file(char **file, int fd)
{
	char	buf[1];
	int		i;

	(*file) = malloc(sizeof(char) * 10240);
	if (read(fd, buf, 0) < 0 || !(*file))
		return (NULL);
	i = 0;
	while (read(fd, buf, 1) > 0)
	{
		(*file)[i] = *buf;
		i++;
	}
	(*file)[i] = '\0';
	return (*file);
}

int		ft_check_file(char *str)
{
	int		len;
	int		n;
	int		i;

	len = ft_strlen(str);
	if (len == 0 || (len + 1) % 21 != 0)
		return (0);
	n = (len + 1) / 21;
	if (n > 26 || n < 1)
		return (0);
	i = 0;
	while (i < n - 1)
	{
		if (str[20 + (i * 21)] != '\n')
			return (0);
		i++;
	}
	if (str[19 + (i * 21)] != '\n')
		return (0);
	return (ft_check_sqrs(str, n));
}

int		*ft_num_of_figures_in_time_order(char *str, int **time_order_figures)
{
	int		i;
	int		n;
	int		len;

	len = ft_strlen(str);
	n = (len + 1) / 21;
	(*time_order_figures) = (int*)malloc(sizeof(int) * 27);
	i = 0;
	while (i <= n)
	{
		(*time_order_figures)[i] = ft_num_of_figure(str);
		str += 21;
		i++;
	}
	while (i <= 27)
	{
		(*time_order_figures)[i] = 0;
		i++;
	}
	return (*time_order_figures);
}

char	*ft_check_n_read(char *filename)
{
	int		fd;
	char	*file;

	fd = open(filename, O_RDONLY);
	file = ft_read_file(&file, fd);
	if (ft_check_file(file))
		return (file);
	return (NULL);
}
