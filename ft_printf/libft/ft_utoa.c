/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 03:52:12 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 17:59:42 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(size_t n)
{
	char	*p;
	int		size;
	size_t	x;

	x = n;
	size = 0;
	while (x >= 10)
	{
		x /= 10;
		size++;
	}
	if (size + 1 == 0 || !(p = (char*)malloc(sizeof(p) * (size + 1))))
		return (NULL);
	p[size + 1] = '\0';
	while (size >= 0)
	{
		x = n % 10;
		p[size] = 48 + x;
		n = n / 10;
		size--;
	}
	return (p);
}
