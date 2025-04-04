/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:13:42 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/19 18:25:46 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tmp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (-1);
	i = 0;
	while (i < size)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (size);
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	*array;
// 	int	size;
// 	int	i;
// 	int	min;
// 	int	max;

// 	min = 5;
// 	max = 10;
// 	size = ft_ultimate_range(&array, min, max);
// 	if (size == -1)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Size: %d\n", size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(array);
// 	return (0);
// }
