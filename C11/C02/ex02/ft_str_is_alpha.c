/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:19:15 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:19:21 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int main()
// {
// 	char *test_cases[] = {
// 		"HelloWorld",
// 		"1234",
// 		"Hello123",
// 		"",
// 		"OnlyLetters",
// 		"With Space",
// 		"Symbols@!"
// 	};

// 	for (int i = 0; i < 7; i++)
// 	{
// 		printf("Test \"%s\": %d\n", test_cases[i], ft_str_is_alpha(test_cases[i]));
// 	}
// 	return (0);
// }
