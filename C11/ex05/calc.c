/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:33:46 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 15:08:39 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(a / b);
		ft_putchar('\n');
	}
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(a % b);
		ft_putchar('\n');
	}
}
