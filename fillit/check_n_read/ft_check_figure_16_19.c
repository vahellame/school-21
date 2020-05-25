/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_figure_16_19.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:23:39 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/25 17:42:35 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_figure_16(char *str)
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
						if (str[(i + 2) * 5 + (j)] == '#')
							return (16);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_17(char *str)
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
				if (str[(i) * 5 + (j + 2)] == '#')
					if (str[(i + 1) * 5 + (j)] == '#')
						if (str[(i + 1) * 5 + (j + 1)] == '#')
							return (17);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_18(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			if (str[(i) * 5 + (j)] == '#')
				if (str[(i + 1) * 5 + (j)] == '#')
					if (str[(i + 1) * 5 + (j + 1)] == '#')
						if (str[(i + 2) * 5 + (j + 1)] == '#')
							return (18);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_19(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (str[(i) * 5 + (j)] == '#')
				if (str[(i) * 5 + (j + 1)] == '#')
					if (str[(i + 1) * 5 + (j)] == '#')
						if (str[(i + 1) * 5 + (j + 1)] == '#')
							return (19);
			j++;
		}
		i++;
	}
	return (0);
}
