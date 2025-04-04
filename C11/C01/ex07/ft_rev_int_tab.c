/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:43:34 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 14:43:47 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

// int	main(void)
// {
// 	int	arr[] = {1, 2, 3, 4, 5};
// 	int	size = 5;

// 	printf ("Before: ");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", arr[i], (i < size - 1) ? ", " : "\n");

// 	ft_rev_int_tab(arr, size);

// 	printf ("After:  ");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", arr[i], (i < size - 1) ? ", " : "\n");

// 	return (0);
// }
