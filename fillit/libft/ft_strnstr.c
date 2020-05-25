/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:40:39 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/16 02:16:49 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str_b, const char *str_a, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	if (str_a[0] == '\0' && str_b[0] == '\0' && i <= len)
		return (char*)(str_b);
	while (str_b[i] != '\0')
	{
		k = 0;
		while (str_b[i + k] == str_a[k] && str_a[k] != '\0' && i + k < len)
			k++;
		if (str_a[k] == '\0')
			return (char*)(str_b + i);
		i++;
	}
	return (NULL);
}
