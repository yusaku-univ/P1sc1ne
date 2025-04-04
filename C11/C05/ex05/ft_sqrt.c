/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:38:24 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:38:30 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	left;
	long	right;
	long	mid;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	left = 2;
	right = nb / 2;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (mid * mid == (long)nb)
			return (mid);
		else if (mid * mid < (long)nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}

// #include<stdio.h>

// int	main(void)
// {
// 	int test_cases[] = {0, 1, 4, 9, 16, 25, 2147395600, 2147483647, -4, 15, 50};
// 	int i;
// 	int result;

// 	printf("Testing ft_sqrt function:\n");
// 	for (i = 0; i < 11; i++)
// 	{
// 		result = ft_sqrt(test_cases[i]);
// 		printf("ft_sqrt(%d) = %d\n", test_cases[i], result);
// 	}
// 	return (0);
// }
