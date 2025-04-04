/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:54:52 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/28 15:33:03 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <fcntl.h>
#include <unistd.h>

int	ft_open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	return (fd);
}

ssize_t	ft_read_file(int fd, char *buf, size_t size)
{
	ssize_t	ret;

	ret = read(fd, buf, size);
	return (ret);
}

int	ft_write_stdout(char *buf, ssize_t size)
{
	ssize_t	wrote;

	wrote = write(1, buf, size);
	if (wrote < 0)
		return (-1);
	return (0);
}

int	ft_display_file(char *filename)
{
	int		fd;
	ssize_t	ret;
	char	buf[1024];
	int		status;

	fd = ft_open_file(filename);
	if (fd < 0)
		return (-1);
	ret = ft_read_file(fd, buf, 1024);
	while (ret > 0)
	{
		status = ft_write_stdout(buf, ret);
		if (status < 0)
		{
			close(fd);
			return (-1);
		}
		ret = ft_read_file(fd, buf, 1024);
	}
	if (ret < 0 || close(fd) < 0)
		return (-1);
	return (0);
}
