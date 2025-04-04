/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:40:28 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 14:40:35 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 20;

// 	printf ("Before swap: x = %d, y = %d\n", x, y);
// 	ft_swap (&x, &y);
// 	printf ("After swap:  x = %d, y = %d\n", x, y);
// }
