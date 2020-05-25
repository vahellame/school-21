/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 03:59:56 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 04:04:31 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_atoll(const char *str)
{
	long long int	nb;
	int				sign;

	sign = 1;
	nb = 0;
	if (str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
						*str == '\v' || *str == '\f' || *str == '\r'))
			str++;
		if (*str == '-')
			sign = -1;
		if (*str == '-' || *str == '+')
			str++;
		while (*str && *str >= '0' && *str <= '9')
		{
			if (nb < 0 && sign == 1)
				return (-1);
			else if (nb < 0 && sign == -1)
				return (0);
			nb = nb * 10 + (*str - 48);
			str++;
		}
	}
	return (nb * sign);
}
