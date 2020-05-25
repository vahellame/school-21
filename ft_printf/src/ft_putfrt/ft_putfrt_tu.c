/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfrt_tu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:53:03 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 17:27:04 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../include/ft_printf.h"
#include "../../libft/libft.h"

void	ft_putfrt_tu(t_frt *m, char *s)
{
	char	buf[9];
	size_t	len;
	size_t	i;
	size_t	j;

	buf[8] = '\0';
	if (s == NULL)
		len = 0;
	else
		len = ft_strlen(s) / 8;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < 8)
		{
			buf[j] = s[(i * 8) + j];
			j++;
		}
		ft_frt_putchar((char)ft_atoll_base(buf, 2), m);
		i++;
	}
}
