/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:24:02 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 18:42:23 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	res = (int *)malloc(sizeof(int) * length);
	if (!res)
		return (0);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

// #include <stdio.h>

// int double_value(int n)
// {
// 	return (n * 2);
// }

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5};
// 	int	length = 5;
// 	int	*result;
// 	int	i;

// 	result = ft_map(tab, length, double_value);
// 	if (!result)
// 	{
// 		printf("malloc failed\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < length)
// 	{
// 		printf("%d ", result[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(result);
// 	return (0);
// }
