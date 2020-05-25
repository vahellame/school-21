/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_figure_11_15.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:59:39 by drosetta          #+#    #+#             */
/*   Updated: 2019/10/22 08:59:42 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_figure_11(char *str)
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
				if (str[(i + 1) * 5 + (j)] == '#')
					if (str[(i + 1) * 5 + (j + 1)] == '#')
						if (str[(i + 1) * 5 + (j + 2)] == '#')
							return (11);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_12(char *str)
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
					if (str[(i + 1) * 5 + (j)] == '#')
						if (str[(i + 2) * 5 + (j)] == '#')
							return (12);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_13(char *str)
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
						if (str[(i + 1) * 5 + (j + 2)] == '#')
							return (13);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_14(char *str)
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
				if (str[(i + 1) * 5 + (j + 1)] == '#')
					if (str[(i + 2) * 5 + (j)] == '#')
						if (str[(i + 2) * 5 + (j + 1)] == '#')
							return (14);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_figure_15(char *str)
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
					if (str[(i + 1) * 5 + (j + 1)] == '#')
						if (str[(i + 1) * 5 + (j + 2)] == '#')
							return (15);
			j++;
		}
		i++;
	}
	return (0);
}
