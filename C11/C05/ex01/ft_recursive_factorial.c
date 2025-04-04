/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:37:29 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:37:35 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	values[] = {-1, 0, 1, 5, 10};
// 	int	i;
// 	int	result;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		result = ft_recursive_factorial(values[i]);
// 		printf("Factorial of %d: %d\n", values[i], result);
// 		i++;
// 	}
// 	return (0);
// }
