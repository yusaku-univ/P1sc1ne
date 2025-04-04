/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:19:29 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:19:37 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *test1 = "123456";
// 	char *test2 = "42Tokyo";
// 	char *test3 = "";
// 	char *test4 = "000001";
// 	char *test5 = "123 456";

// 	printf("Test 1: \"%s\" → %d\n", test1, ft_str_is_numeric(test1));
// 	printf("Test 2: \"%s\" → %d\n", test2, ft_str_is_numeric(test2));
// 	printf("Test 3: \"%s\" → %d\n", test3, ft_str_is_numeric(test3));
// 	printf("Test 4: \"%s\" → %d\n", test4, ft_str_is_numeric(test4));
// 	printf("Test 5: \"%s\" → %d\n", test5, ft_str_is_numeric(test5));

// 	return (0);
// }
