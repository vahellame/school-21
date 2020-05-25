/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 05:03:55 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/14 13:33:40 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str_b, const char *str_a)
{
	int i;
	int k;

	i = 0;
	if (str_a[0] == '\0' && str_b[0] == '\0')
		return (char*)(str_b);
	while (str_b[i] != '\0')
	{
		k = 0;
		while (str_b[i + k] == str_a[k] && str_a[k] != '\0')
			k++;
		if (str_a[k] == '\0')
			return (char*)(str_b + i);
		i++;
	}
	return (NULL);
}
