/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:27:49 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 18:42:26 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] && i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>

// int	is_42(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] != '4' && str[i] != '2')
// 			return (0);
// 		i++;
// 	}
// 	return (str[0] != '\0');
// }

// int	main(void)
// {
// 	char *array[] = {"hello", "42", "42", "world", "test", NULL};
// 	int count;

// 	count = ft_count_if(array, 6, &is_42);
// 	printf("Matched count: %d\n", count);
// 	return (0);
// }
