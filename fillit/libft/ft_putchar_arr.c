/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:58:37 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/18 20:58:38 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_arr(char **arr)
{
	int i;

	if (arr)
	{
		i = 0;
		while (arr[i])
		{
			ft_putendl(arr[i]);
			i++;
		}
	}
}
