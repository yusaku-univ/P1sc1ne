/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:37:32 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 14:37:37 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	increment(int *arr, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0 && arr[i] == 9 - (n - 1 - i))
		i--;
	if (i < 0)
	{
		arr[0] = -1;
		return ;
	}
	arr[i]++;
	j = i + 1;
	while (j < n)
	{
		arr[j] = arr[j - 1] + 1;
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (arr[0] != -1)
	{
		print_number(arr, n);
		increment(arr, n);
	}
}

// int	main(void)
// {
// 	ft_print_combn(1);
// 	return (0);
// }