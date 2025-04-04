/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:58:00 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/03 18:27:02 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_print(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

static int	is_invalid_symbols(t_map *m)
{
	if (!is_print(m->empty) || !is_print(m->full) || !is_print(m->obst))
		return (1);
	if (m->empty == m->full || m->full == m->obst || m->obst == m->empty)
		return (1);
	return (0);
}

int	parse_map(t_map *m, char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (1);
	if (read_first_line(fd, m) != 0 || m->lines <= 0)
		return (close(fd), 1);
	if (is_invalid_symbols(m))
		return (close(fd), 1);
	if (alloc_map(m) != 0)
		return (close(fd), 1);
	if (read_map_body(fd, m) != 0)
	{
		free_map(m);
		return (close(fd), 1);
	}
	return (close(fd), 0);
}

int	parse_stdin(t_map *m)
{
	int	fd;

	fd = 0;
	if (read_first_line(fd, m) != 0 || m->lines <= 0)
		return (1);
	if (is_invalid_symbols(m))
		return (1);
	if (alloc_map(m) != 0)
		return (1);
	if (read_map_body(fd, m) != 0)
	{
		free_map(m);
		return (1);
	}
	return (0);
}
