/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:46:22 by drosetta          #+#    #+#             */
/*   Updated: 2019/09/13 23:41:35 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*cur;

	cur = (unsigned char *)destination;
	while (n--)
	{
		*cur = (unsigned char)c;
		if (n)
			cur++;
	}
	return (destination);
}
