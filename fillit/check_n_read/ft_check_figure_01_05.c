/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_figure_01-05.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:38:14 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/25 17:33:10 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_figure_01(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 1)
		{
			if (str[(i) * 5 + (j)] == '#')
				if (str[(i) * 5 + (j + 1)] == '#')
					if (str[(i) * 5 + (j + 2)] == '#')
						if (str[(i) * 5 + (j + 3)] == '#')
							return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_02(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 1)
	{
		j = 0;
		while (j < 4)
		{
			if (str[(i) * 5 + (j)] == '#')
				if (str[(i + 1) * 5 + (j)] == '#')
					if (str[(i + 2) * 5 + (j)] == '#')
						if (str[(i + 3) * 5 + (j)] == '#')
							return (2);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_03(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 2)
		{
			if (str[i * 5 + j] == '#')
				if (str[i * 5 + j + 1] == '#')
					if (str[(i * 5) + j + 2] == '#')
						if (str[(i + 1) * 5 + j + 1] == '#')
							return (3);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_04(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			if (str[(i) * 5 + (j + 1)] == '#')
				if (str[(i + 1) * 5 + (j)] == '#')
					if (str[(i + 1) * 5 + (j + 1)] == '#')
						if (str[(i + 2) * 5 + (j + 1)] == '#')
							return (4);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_05(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 2)
		{
			if (str[(i) * 5 + (j + 1)] == '#')
				if (str[(i + 1) * 5 + (j)] == '#')
					if (str[(i + 1) * 5 + (j + 1)] == '#')
						if (str[(i + 1) * 5 + (j + 2)] == '#')
							return (5);
			j++;
		}
		i++;
	}
	return (0);
}
