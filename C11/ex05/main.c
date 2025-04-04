/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:33:48 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 15:06:16 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	else if (ft_strlen(argv[2]) == 1 && argv[2][0] == '+')
		do_op(argv[1], argv[3], ft_add);
	else if (ft_strlen(argv[2]) == 1 && argv[2][0] == '-')
		do_op(argv[1], argv[3], ft_sub);
	else if (ft_strlen(argv[2]) == 1 && argv[2][0] == '/')
		do_op(argv[1], argv[3], ft_div);
	else if (ft_strlen(argv[2]) == 1 && argv[2][0] == '*')
		do_op(argv[1], argv[3], ft_mul);
	else if (ft_strlen(argv[2]) == 1 && argv[2][0] == '%')
		do_op(argv[1], argv[3], ft_mod);
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}
