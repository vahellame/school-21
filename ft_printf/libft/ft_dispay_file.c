/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispay_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 22:12:16 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/11 22:12:19 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_dispay_file(char *filename)
{
	char	buf[64];
	int		fd;
	int		ret;

	fd = open(filename, O_RDONLY);
	if (fd >= 0)
	{
		while ((ret = read(fd, buf, 64)) > 0)
			write(1, &buf, ret);
	}
	close(fd);
}
