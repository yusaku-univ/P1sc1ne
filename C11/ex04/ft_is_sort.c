/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:29:29 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 16:50:23 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	if (asc || desc)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	compare(int a, int b)
// {
// 	return (a - b);
// }

// int	ft_is_sort(int *tab, int length, int (*f)(int, int));

// int	main(void)
// {
// 	int	sorted_asc[] = {1, 2, 3, 4, 5};
// 	int	sorted_desc[] = {9, 7, 5, 3, 1};
// 	int	unsorted[] = {1, 3, 2, 4, 5};

// 	printf("sorted_asc: %d\n", ft_is_sort(sorted_asc, 5, compare));
// 	printf("sorted_desc: %d\n", ft_is_sort(sorted_desc, 5, compare));
// 	printf("unsorted: %d\n", ft_is_sort(unsorted, 5, compare));
// 	return (0);
// }
