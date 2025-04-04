/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:39:06 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:39:10 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_solution(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_safe(int *board, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || (col - i) == (row - board[i])
			|| (col - i) == (board[i] - row))
			return (0);
		i++;
	}
	return (1);
}

void	ft_backtrack(int *board, int col, int *count)
{
	int	row;

	if (col == 10)
	{
		ft_print_solution(board);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(board, col, row))
		{
			board[col] = row;
			ft_backtrack(board, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;
	int	i;

	i = 0;
	while (i < 10)
		board[i++] = -1;
	count = 0;
	ft_backtrack(board, 0, &count);
	return (count);
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	solutions;

// 	solutions = ft_ten_queens_puzzle();
// 	printf("%d\n", solutions);
// 	return (0);
// }
