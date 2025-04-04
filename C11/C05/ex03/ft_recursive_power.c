/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:38:01 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:38:10 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("2^3 = %d\n", ft_recursive_power(2, 3));
// 	printf("5^0 = %d\n", ft_recursive_power(5, 0));
// 	printf("3^4 = %d\n", ft_recursive_power(3, 4));
// 	printf("10^2 = %d\n", ft_recursive_power(10, 2));
// 	printf("-2^3 = %d\n", ft_recursive_power(-2, 3));
// 	printf("2^-3 = %d\n", ft_recursive_power(2, -3));
// 	return (0);
// }
