/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:42:34 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 20:43:09 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_convert_and_check_nb(char c, int base)
{
	int		result;

	if (c >= '0' && c <= '9')
		result = c - 48;
	else if (c >= 'a' && c <= 'z')
		result = c - 87;
	else if (c >= 'A' && c <= 'Z')
		result = c - 55;
	else
		result = -1;
	if (result < base && result != -1)
		return (result);
	else
		return (-1);
}

static int		length_number(char *str, int base)
{
	int		length;

	length = 0;
	while (str[length])
	{
		if (ft_convert_and_check_nb(str[length], base) == -1)
			break ;
		length++;
	}
	return (length);
}

long long int	ft_atoll_base(char *nb, int base)
{
	long long int	result;
	int				length;

	if (nb == NULL)
		return (0);
	if (base == 10)
		return (ft_atoll(nb));
	while (*nb == ' ' || *nb == '\t' || *nb == '\n'
		|| *nb == '\v' || *nb == '\r' || *nb == '\f')
		nb++;
	result = 0;
	length = length_number(nb, base) - 1;
	while (*nb && length >= 0 && ft_convert_and_check_nb(*nb, base) != -1)
	{
		result += ft_convert_and_check_nb(*nb, base) * ft_power(base, length);
		nb++;
		length--;
	}
	return (result);
}
