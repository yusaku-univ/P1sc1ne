/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:19:41 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:19:48 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *test1 = "hello";
// 	char *test2 = "Hello";
// 	char *test3 = "world";
// 	char *test4 = "world123";
// 	char *test5 = "";

// 	printf("Test 1: %d\n", ft_str_is_lowercase(test1));
// 	printf("Test 2: %d\n", ft_str_is_lowercase(test2));
// 	printf("Test 3: %d\n", ft_str_is_lowercase(test3));
// 	printf("Test 4: %d\n", ft_str_is_lowercase(test4));
// 	printf("Test 5: %d\n", ft_str_is_lowercase(test5));

// 	return 0;
// }
