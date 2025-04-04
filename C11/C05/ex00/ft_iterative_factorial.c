/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:37:19 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:37:25 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// #include<stdio.h>

// int	main(void)
// {
// 	int test_cases[] = {5, 0, 1, -3, 10};
// 	int i;
// 	int result;

// 	for (i = 0; i < 5; i++)
// 	{
// 		result = ft_iterative_factorial(test_cases[i]);
// 		printf("Factorial of %d is %d\n", test_cases[i], result);
// 	}
// 	return (0);
// }
