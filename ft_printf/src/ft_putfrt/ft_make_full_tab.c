/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_full_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 19:14:28 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:30:24 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"

char	*ft_make_part_a_p_tab(long double nbr)
{
	char	*a_p_tab;
	int		i;

	nbr -= (size_t)(nbr);
	i = 0;
	a_p_tab = (char*)malloc(sizeof(char) * 56);
	if (a_p_tab)
	{
		while (i < 55)
		{
			nbr *= 10;
			a_p_tab[i] = (char)((char)nbr + 48);
			nbr -= (int)nbr;
			i++;
		}
		a_p_tab[55] = '\0';
	}
	return (a_p_tab);
}

int		ft_round_precision_tab(char *tab, long long int pre)
{
	if (tab[pre] > '4')
		tab[pre - 1] += 1;
	tab[pre] = '\0';
	pre--;
	while (pre >= 0)
	{
		if (tab[pre] == 58)
		{
			if (pre == 0)
			{
				tab[0] = '\0';
				return (1);
			}
			tab[pre] = '\0';
			tab[pre - 1] += 1;
		}
		else
			break ;
		pre--;
	}
	return (0);
}

void	ft_fill_until_pre(char **full, char *a_p, t_frt *m)
{
	long long n;
	long long pre;

	pre = (*m).precision;
	if (pre == -1)
		pre = 6;
	else if (pre == -2)
		pre = 0;
	if (ft_strlen(a_p) < pre && pre <= 54)
	{
		n = pre - (long long)ft_strlen(a_p);
		while (n-- > 0)
			ft_strcat((*full), "0");
	}
}

char	*ft_make_part_full_tab_1(long double nbr, t_frt *m)
{
	char			*full_tab;
	char			*u_p_tab;
	char			*a_p_tab;
	long long int	i;

	a_p_tab = ft_make_part_a_p_tab(nbr);
	if ((*m).precision == -2 || (*m).precision == 0)
	{
		i = ft_round_precision_tab_one(a_p_tab);
		ft_strdel(&a_p_tab);
		a_p_tab = ft_strnew(1);
	}
	else if ((*m).precision == -1)
		i = ft_round_precision_tab(a_p_tab, 6);
	else if ((*m).precision > 54)
		i = ft_round_precision_tab(a_p_tab, 54);
	else
		i = ft_round_precision_tab(a_p_tab, (*m).precision);
	nbr += i;
	u_p_tab = ft_utoa((size_t)nbr);
	full_tab = ft_make_part_full_tab_2(u_p_tab, a_p_tab, m, &full_tab);
	return (full_tab);
}

char	*ft_make_part_full_tab_2(char *u_p, char *a_p, t_frt *m, char **full)
{
	if (u_p != NULL && a_p != NULL)
	{
		(*full) = (char*)malloc(sizeof(char) * 75);
		if (*full != NULL)
		{
			ft_strcpy((*full), u_p);
			if (ft_strchr((*m).flags, '#') ||
					((*m).precision != 0 && (*m).precision != -2))
			{
				ft_strcat((*full), ".");
				ft_strcat((*full), a_p);
				ft_fill_until_pre(full, a_p, m);
				ft_strdel(&u_p);
				ft_strdel(&a_p);
			}
		}
		return (*full);
	}
	if (u_p != NULL)
		ft_strdel(&u_p);
	if (a_p != NULL)
		ft_strdel(&a_p);
	return (NULL);
}
