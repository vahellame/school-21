/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:25:56 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/21 17:33:16 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long int	ft_power(long long int n, int p)
{
	long long int	res;

	res = 1;
	if (p < 0)
		return (0);
	while (p > 0)
	{
		res *= n;
		p--;
	}
	return (res);
}
