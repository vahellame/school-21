/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:39:41 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/23 03:58:00 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

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
