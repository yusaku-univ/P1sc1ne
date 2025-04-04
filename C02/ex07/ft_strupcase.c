/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:20:13 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:27 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

// #include<stdio.h>

// int main(void)
// {
// 	char str1[] = "hello, world!";
// 	char str2[] = "42Tokyo";
// 	char str3[] = "Already Upper";
// 	char str4[] = "";

// 	printf("Before: %s | ", str1);
// 	printf("After: %s\n", ft_strupcase(str1));

// 	printf("Before: %s | ", str2);
// 	printf("After: %s\n", ft_strupcase(str2));

// 	printf("Before: %s | ", str3);
// 	printf("After: %s\n", ft_strupcase(str3));

// 	printf("Before: \"%s\" | ", str4);
// 	printf("After: \"%s\"\n", ft_strupcase(str4));

// 	return (0);
// }
