/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:38:31 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:38:43 by yutakumi         ###   ########.fr       */
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

// #include<stdio.h>

// int	main(void)
// {
// 	int	test_cases[] = { -1, 0, 1, 2, 3, 4, 5, 10, 13, 17, 19, 20 };
// 	int	i;

// 	i = 0;
// 	while (i < (int)(sizeof(test_cases) / sizeof(test_cases[0])))
// 	{
// 		printf("ft_is_prime(%d) = %d\n", test_cases[i],
// 			ft_is_prime(test_cases[i]));
// 		i++;
// 	}
// 	return (0);
// }
