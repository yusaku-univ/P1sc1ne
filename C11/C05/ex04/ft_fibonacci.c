/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:38:14 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:38:20 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// #include<stdio.h>

// int	main(void)
// {
// 	int i;

// 	for (i = -1; i <= 10; i++)
// 		printf("ft_fibonacci(%d) = %d\n", i, ft_fibonacci(i));
// 	return (0);
// }
