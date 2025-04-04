/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 23:01:47 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/02 23:10:46 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	len;

	len = ft_strlen(str);
	n = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9' && i <= len - 4)
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

static int	whether_error(char *str, int max)
{
	int	i;

	i = 0;
	while (i <= max)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	read_first_line(int fd, t_map *m)
{
	char	buf[256];
	int		i;
	int		ret;

	i = 0;
	while (i < 255)
	{
		ret = read(fd, &buf[i], 1);
		if (ret < 1 || buf[i] == '\n')
			break ;
		i++;
	}
	buf[i] = '\0';
	if (i < 4)
		return (1);
	m->empty = buf[i - 3];
	m->obst = buf[i - 2];
	m->full = buf[i - 1];
	if (whether_error(buf, i - 4))
		return (1);
	m->lines = ft_atoi(buf);
	return (0);
}

int	alloc_map(t_map *m)
{
	int	i;

	m->map = (char **)malloc(sizeof(char *) * (m->lines + 1));
	if (!m->map)
		return (1);
	i = 0;
	while (i < m->lines)
	{
		m->map[i] = NULL;
		i++;
	}
	m->map[m->lines] = 0;
	return (0);
}
