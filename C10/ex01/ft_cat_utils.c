/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:26:34 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/28 16:27:40 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void	ft_puterr(char *prog, char *filename)
{
	char	*base;

	base = basename(filename);
	write(2, prog, ft_strlen(prog));
	write(2, ": ", 2);
	write(2, base, ft_strlen(base));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

int	read_and_write(int fd)
{
	int		bytes;
	char	buf[BUF_SIZE];

	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buf, BUF_SIZE);
		if (bytes < 0)
			return (1);
		if (bytes == 0)
			break ;
		write(1, buf, bytes);
	}
	return (0);
}
