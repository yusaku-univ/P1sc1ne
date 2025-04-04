/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:35:13 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/28 15:35:43 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	err;

	if (argc < 2)
		err = 1;
	else if (argc > 2)
		err = 2;
	else
		err = ft_display_file(argv[1]);
	if (err == 1)
		ft_putstr_fd("File name missing.\n", 2);
	else if (err == 2)
		ft_putstr_fd("Too many arguments.\n", 2);
	else if (err == -1)
		ft_putstr_fd("Cannot read file.\n", 2);
	return (err != 0);
}
