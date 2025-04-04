/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:34:07 by maiida            #+#    #+#             */
/*   Updated: 2025/04/03 12:17:47 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**alloc_dp(t_map *m)
{
	int	**dp;
	int	i;
	int	j;

	dp = (int **)malloc(sizeof(int *) * m->lines);
	if (!dp)
		return (0);
	i = 0;
	while (i < m->lines)
	{
		dp[i] = (int *)malloc(sizeof(int) * m->cols);
		if (!dp[i])
			return (0);
		j = 0;
		while (j < m->cols)
		{
			dp[i][j] = 0;
			j++;
		}
		i++;
	}
	return (dp);
}

char	**dup_map(t_map *m)
{
	char	**copy;
	int		i;
	int		j;

	copy = malloc(sizeof(char *) * m->lines);
	if (!copy)
		return (0);
	i = 0;
	while (i < m->lines)
	{
		copy[i] = malloc(m->cols + 1);
		if (!copy[i])
			return (0);
		j = 0;
		while (m->map[i][j])
		{
			copy[i][j] = m->map[i][j];
			j++;
		}
		copy[i][j] = 0;
		i++;
	}
	return (copy);
}

void	free_dp(int **dp, int lines)
{
	int	i;

	i = 0;
	while (i < lines)
	{
		if (dp[i])
			free(dp[i]);
		i++;
	}
	free(dp);
}
