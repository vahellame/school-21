/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:40:12 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/17 19:40:14 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_l_wrd(const char *str, char c, int i)
{
	int d;

	d = 0;
	while (str[i] != c && str[i++] != '\0')
		d++;
	return (d);
}

static int	ft_n_wrd(const char *str, char c)
{
	int num;
	int i;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			i = i + ft_l_wrd(str, c, i) - 1;
			num++;
		}
		i++;
	}
	return (num);
}

static char	**ft_buidar(char const *s, char c, char **ar)
{
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	while (k < ft_n_wrd(s, c))
	{
		j = 0;
		if (s[i] != c)
		{
			if (!(ar[k] = (char*)malloc(sizeof(char) * ft_l_wrd(s, c, i) + 1)))
			{
				ft_free_arr(ar);
				return (NULL);
			}
			while (ft_l_wrd(s, c, i) > 0)
				ar[k][j++] = s[i++];
			ar[k][j++] = '\0';
			k++;
		}
		i++;
	}
	ar[k] = NULL;
	return (ar);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ar;

	if (!s)
		return (NULL);
	ar = (char**)malloc(sizeof(char*) * ft_n_wrd(s, c) + 1);
	if (ar == NULL)
		return (NULL);
	ft_bzero(ar, sizeof(char*) * ft_n_wrd(s, c) + 1);
	ar = ft_buidar(s, c, ar);
	return (ar);
}
