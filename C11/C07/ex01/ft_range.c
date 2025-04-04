/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:13:39 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/19 18:25:21 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	min;
// 	int	max;
// 	int	i;

// 	min = 2;
// 	max = 7;
// 	range = ft_range(min, max);
// 	if (!range)
// 	{
// 		printf("NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < max - min)
// 		printf("%d ", range[i++]);
// 	printf("\n");
// 	free(range);
// 	return (0);
// }
