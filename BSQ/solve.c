/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:58:25 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/03 17:54:52 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	set_dp(t_map *m, int ***dp)
{
	*dp = alloc_dp(m);
	if (!*dp)
		return (0);
	m->max_size = 0;
	fill_dp(m, *dp);
	return (1);
}

static void	print_solution(t_map *m, int **dp)
{
	fill_square(m, m->top_row, m->top_col);
	print_map(m);
	free_dp(dp, m->lines);
}

void	solve_bsq(t_map *m)
{
	int	**dp;

	m->max_size = 0;
	m->top_row = 0;
	m->top_col = 0;
	if (!set_dp(m, &dp))
		return ;
	print_solution(m, dp);
}
