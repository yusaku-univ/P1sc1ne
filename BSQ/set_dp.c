/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_dp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:37:21 by maiida            #+#    #+#             */
/*   Updated: 2025/04/03 17:50:54 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	min_val(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

static void	calculate_dp(t_map *m, int **dp, int r, int c)
{
	int	val;

	if (m->map[r][c] == m->obst)
		dp[r][c] = 0;
	else if (r == 0 || c == 0)
		dp[r][c] = 1;
	else
	{
		val = min_val(dp[r - 1][c], dp[r][c - 1], dp[r - 1][c - 1]);
		dp[r][c] = val + 1;
	}
}

static void	find_max_square(t_map *m, int **dp, int r, int c)
{
	if (dp[r][c] > m->max_size
		|| (dp[r][c] == m->max_size && r < m->top_row)
		|| (dp[r][c] == m->max_size && r == m->top_row && c < m->top_col))
	{
		m->max_size = dp[r][c];
		m->top_row = r;
		m->top_col = c;
	}
}

void	fill_square(t_map *m, int row, int col)
{
	int	rr;
	int	cc;
	int	r;
	int	c;

	rr = row - (m->max_size - 1);
	cc = col - (m->max_size - 1);
	r = rr;
	while (r <= row)
	{
		c = cc;
		while (c <= col)
		{
			m->map[r][c] = m->full;
			c++;
		}
		r++;
	}
}

void	fill_dp(t_map *m, int **dp)
{
	int	r;
	int	c;

	r = 0;
	while (r < m->lines)
	{
		c = 0;
		while (c < m->cols)
		{
			calculate_dp(m, dp, r, c);
			find_max_square(m, dp, r, c);
			c++;
		}
		r++;
	}
}
