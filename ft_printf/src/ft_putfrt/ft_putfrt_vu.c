/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_vu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 17:00:42 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 05:23:18 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"
#include "../../include/ft_printf.h"

char	***ft_make_letters(char ***le)
{
	int		i;

	le = (char***)malloc(sizeof(char**) * 38);
	le[37] = NULL;
	i = 37;
	while (i--)
	{
		le[i] = (char**)malloc(sizeof(char*) * 4);
		le[i][3] = NULL;
	}
	ft_fill_letters_tab_1(le);
	return (le);
}

void	ft_putfrt_vu(t_frt *m, char *s)
{
	char	***letters;
	int		i;
	char	*f;

	letters = ft_make_letters(letters);
	i = -1;
	if (s != NULL)
		while (i++ < 3)
		{
			f = s;
			while (*f)
			{
				if (*f >= '0' && *f <= '9')
					ft_frt_putstr(letters[*f - 48][i], m);
				else if (*f >= 'A' && *f <= 'Z')
					ft_frt_putstr(letters[*f - 55][i], m);
				else if (*f >= 'a' && *f <= 'z')
					ft_frt_putstr(letters[*f - 87][i], m);
				else if (*f == ' ')
					ft_frt_putstr(letters[*f + 4][i], m);
				f++;
			}
			ft_frt_putchar('\n', m);
		}
	ft_arrrdel(&letters);
}
