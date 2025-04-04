/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:57:22 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/03 17:59:22 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map
{
	int		lines;
	int		cols;
	char	empty;
	char	obst;
	char	full;
	char	**map;
	int		max_size;
	int		top_row;
	int		top_col;
}	t_map;

int		ft_atoi(char *str);
int		read_first_line(int fd, t_map *m);
int		alloc_map(t_map *m);
int		read_map_body(int fd, t_map *m);
int		parse_map(t_map *m, char *filename);
int		parse_stdin(t_map *m);
void	solve_bsq(t_map *m);
void	print_map(t_map *m);
void	ft_putstr_err(char *str);
int		**alloc_dp(t_map *m);
void	free_dp(int **dp, int lines);
void	fill_dp(t_map *m, int **dp);
void	fill_square(t_map *m, int row, int col);
void	free_map(t_map *m);

#endif