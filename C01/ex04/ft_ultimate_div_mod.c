/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:41:58 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 14:42:05 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b == 0)
		return ;
	else
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 42;
// 	y = 5;

// 	printf ("Before: x = %d, y = %d\n", x, y);
// 	ft_ultimate_div_mod (&x, &y);
// 	printf ("After: x (quotient) = %d, y (remainder) = %d\n", x, y);

// 	return (0);
// }
