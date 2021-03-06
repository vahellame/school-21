/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:21:09 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/18 02:31:52 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(const char *str)
{
	if (str)
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
}
