/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_figure_06_10.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:42:11 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/22 08:42:14 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_figure_06(char *str)
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
						if (str[(i + 2) * 5 + (j)] == '#')
							return (6);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_07(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 2)
		{
			if (str[(i) * 5 + (j)] == '#')
				if (str[(i) * 5 + (j + 1)] == '#')
					if (str[(i) * 5 + (j + 2)] == '#')
						if (str[(i + 1) * 5 + (j)] == '#')
							return (7);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_08(char *str)
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
				if (str[(i) * 5 + (j + 1)] == '#')
					if (str[(i + 1) * 5 + (j + 1)] == '#')
						if (str[(i + 2) * 5 + (j + 1)] == '#')
							return (8);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_09(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 2)
		{
			if (str[(i) * 5 + (j + 2)] == '#')
				if (str[(i + 1) * 5 + (j)] == '#')
					if (str[(i + 1) * 5 + (j + 1)] == '#')
						if (str[(i + 1) * 5 + (j + 2)] == '#')
							return (9);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_10(char *str)
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
					if (str[(i + 2) * 5 + (j)] == '#')
						if (str[(i + 2) * 5 + (j + 1)] == '#')
							return (10);
			j++;
		}
		i++;
	}
	return (0);
}
