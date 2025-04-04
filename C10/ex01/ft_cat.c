/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:13:15 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/28 16:29:04 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	handle_file(char *prog, char *filename)
{
	int	fd;
	int	err;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_puterr(prog, filename);
		return ;
	}
	err = read_and_write(fd);
	close(fd);
	if (err)
		ft_puterr(prog, filename);
}

void	handle_stdin(char *prog)
{
	int	err;

	(void)prog;
	err = read_and_write(0);
	if (err)
	{
		errno = 0;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*prog;

	prog = basename(argv[0]);
	i = 1;
	if (argc < 2)
		handle_stdin(prog);
	while (i < argc)
	{
		handle_file(prog, argv[i]);
		i++;
	}
	return (0);
}
