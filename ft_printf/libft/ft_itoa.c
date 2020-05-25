/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:51:07 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/17 19:53:20 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static	int		ft_len(long long int nb)
{
	int		i;

	if (nb < 0)
		nb *= -1;
	i = 1;
	while (nb - 10 >= 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static	char	*ft_itoa_pos(long long int nb)
{
	char	*str;
	int		i;
	int		len;

	len = ft_len(nb);
	str = NULL;
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	while (i >= 0)
	{
		str[i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
	return (str);
}

static	char	*ft_itoa_neg(long long int nb)
{
	char	*str;
	int		i;
	int		len;

	len = ft_len(nb);
	nb *= -1;
	str = NULL;
	str = (char *)malloc((len + 2) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	str[len + 1] = '\0';
	i = len;
	while (i >= 1)
	{
		str[i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
	return (str);
}

static	char	*ft_int_min(void)
{
	char *str;

	str = ft_itoa_neg(-LONG_LONG_MAX + 2);
	str[19] = '8';
	return (str);
}

char			*ft_itoa(long long int nb)
{
	if (nb == LONG_LONG_MIN)
		return (ft_int_min());
	if (nb >= 0)
		return (ft_itoa_pos(nb));
	else
		return (ft_itoa_neg(nb));
}
