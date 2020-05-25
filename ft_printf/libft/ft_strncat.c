/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 01:41:53 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/14 01:44:44 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t k;

	i = 0;
	while (str1[i])
		i++;
	k = 0;
	while (str2[k] && k < n)
	{
		str1[i] = str2[k];
		i++;
		k++;
	}
	str1[i] = '\0';
	return (str1);
}
