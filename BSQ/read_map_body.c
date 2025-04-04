/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_body.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:34:09 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/03 21:43:34 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	read_loop(int fd, t_map *m, int i, int *col)
{
	int		ret;
	char	c;

	while (1)
	{
		ret = read(fd, &c, 1);
		if (ret == 0 || ret < 0)
			return (1);
		if (c == '\n')
			break ;
		if (c != m->empty && c != m->obst)
			return (1);
		m->map[i][(*col)++] = c;
	}
	m->map[i][*col] = '\0';
	if (*col == 0)
		return (1);
	return (0);
}

static int	read_map_line(int fd, t_map *m, int i)
{
	int	col;

	col = 0;
	m->map[i] = (char *)malloc(sizeof(char) * 8192);
	if (!m->map[i])
		return (1);
	if (read_loop(fd, m, i, &col))
		return (1);
	if (i == 0)
		m->cols = col;
	else if (col != m->cols)
		return (1);
	return (0);
}

int	read_map_body(int fd, t_map *m)
{
	int		i;
	char	c;

	i = 0;
	m->cols = 0;
	while (i < m->lines)
	{
		if (read_map_line(fd, m, i) != 0)
			return (1);
		i++;
	}
	if (fd != 0 && read(fd, &c, 1) > 0)
		return (1);
	return (0);
}
