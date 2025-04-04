/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:19:52 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:19:59 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *test1 = "HELLO";
// 	char *test2 = "Hello";
// 	char *test3 = "WORLD123";
// 	char *test4 = "";
// 	char *test5 = "UPPERCASE";

// 	printf("Test 1: %s -> %d\n", test1, ft_str_is_uppercase(test1)); // 1
// 	printf("Test 2: %s -> %d\n", test2, ft_str_is_uppercase(test2)); // 0
// 	printf("Test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3)); // 0
// 	printf("Test 4: %s -> %d\n", test4, ft_str_is_uppercase(test4)); // 1
// 	printf("Test 5: %s -> %d\n", test5, ft_str_is_uppercase(test5)); // 1

// 	return (0);
// }
