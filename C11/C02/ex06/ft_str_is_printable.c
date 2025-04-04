/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:20:02 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:09 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char *test1 = "Hello, World!";
// 	char *test2 = "Hello\nWorld";
// 	char *test3 = "";
// 	char *test4 = "Printable123!@#";
// 	char *test5 = "Non-printable:\t";

// 	printf("Test1: %d (Expected: 1)\n", ft_str_is_printable(test1));
// 	printf("Test2: %d (Expected: 0)\n", ft_str_is_printable(test2));
// 	printf("Test3: %d (Expected: 1)\n", ft_str_is_printable(test3));
// 	printf("Test4: %d (Expected: 1)\n", ft_str_is_printable(test4));
// 	printf("Test5: %d (Expected: 0)\n", ft_str_is_printable(test5));

// 	return (0);
// }
