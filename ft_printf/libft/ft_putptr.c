/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:11:33 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/14 21:13:45 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putptr(void *ptr)
{
	size_t div;
	size_t temp;
	size_t n;

	n = (size_t)ptr;
	div = 16;
	write(1, "0x", 2);
	while (n / div >= 16)
		div *= 16;
	while (div > 0)
	{
		temp = '0' + n / div;
		if (temp > '9')
		{
			temp += 39;
			write(1, &temp, 1);
		}
		else
			write(1, &temp, 1);
		n %= div;
		div /= 16;
	}
}
