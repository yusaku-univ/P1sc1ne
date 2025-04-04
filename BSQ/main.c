/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:57:40 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/03 14:10:03 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	process_map(char *file)
{
	t_map	m;
	int		status;

	status = parse_map(&m, file);
	if (status == 0)
	{
		solve_bsq(&m);
		free_map(&m);
	}
	else
	{
		ft_putstr_err("map error\n");
	}
}

static void	process_stdin_input(void)
{
	t_map	m;
	int		status;

	status = parse_stdin(&m);
	if (status == 0)
	{
		solve_bsq(&m);
		free_map(&m);
	}
	else
	{
		ft_putstr_err("map error\n");
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		process_stdin_input();
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			process_map(argv[i]);
			if (i < argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
