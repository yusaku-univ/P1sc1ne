/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:37:37 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:37:55 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("2^3 = %d\n", ft_iterative_power(2, 3));
// 	printf("5^0 = %d\n", ft_iterative_power(5, 0));
// 	printf("3^4 = %d\n", ft_iterative_power(3, 4));
// 	printf("2^-2 = %d\n", ft_iterative_power(2, -2));
// 	printf("-2^3 = %d\n", ft_iterative_power(-2, 3));
// 	printf("0^0 = %d\n", ft_iterative_power(0, 0));
// 	return (0);
// }
