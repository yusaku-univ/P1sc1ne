/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:38:47 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:38:54 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	values[] = {2147483647, 2147483646, -1, 0, 256, 23};
// 	int	size;
// 	int	i;
// 	int	result;

// 	size = sizeof(values) / sizeof(values[0]);
// 	i = 0;
// 	while (i < size)
// 	{
// 		result = ft_find_next_prime(values[i]);
// 		printf("Next prime after %d: %d\n", values[i], result);
// 		i++;
// 	}
// 	return (0);
// }
