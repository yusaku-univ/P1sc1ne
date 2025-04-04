/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:58:43 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/01 16:23:26 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
}

void	print_map(t_map *m)
{
	int	i;
	int	j;

	i = 0;
	while (i < m->lines)
	{
		j = 0;
		while (m->map[i][j])
		{
			write(1, &m->map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	free_map(t_map *m)
{
	int	i;

	i = 0;
	while (i < m->lines)
	{
		if (m->map[i])
			free(m->map[i]);
		i++;
	}
	free(m->map);
}
