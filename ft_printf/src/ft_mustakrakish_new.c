/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mustakrakish_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:14:13 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/14 21:14:17 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

t_frt	ft_mustakrakish_new(void)
{
	t_frt mustakrakish;

	ft_bzero(mustakrakish.flags, 11);
	mustakrakish.width = 0;
	mustakrakish.precision = -1;
	mustakrakish.type = 0;
	mustakrakish.len_txt = 0;
	mustakrakish.len_frt = 0;
	return (mustakrakish);
}
