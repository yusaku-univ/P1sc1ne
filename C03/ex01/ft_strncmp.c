/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:24:16 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:24:22 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] && s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *str1 = "hello";
// 	char *str2 = "hellp";
// 	char *str3 = "hello";
// 	char *str4 = "hell";
// 	unsigned int n = 5;

// 	printf("Comparing \"%s\" and \"%s\" (n = %d):\n", str1, str2, n);
// 	printf("Result: %d\n", ft_strncmp(str1, str2, n));

// 	printf("Comparing \"%s\" and \"%s\" (n = %d):\n", str1, str3, n);
// 	printf("Result: %d\n", ft_strncmp(str1, str3, n));

// 	printf("Comparing \"%s\" and \"%s\" (n = %d):\n", str1, str4, n);
// 	printf("Result: %d\n", ft_strncmp(str1, str4, n));

// 	printf("Comparing \"%s\" and \"%s\" (n = %d):\n", str1, str2, 3);
// 	printf("Result: %d\n", ft_strncmp(str1, str2, 3));

// 	printf("Comparing \"%s\" and \"%s\" (n = %d):\n", str1, str2, 6);
// 	printf("Result: %d\n", ft_strncmp(str1, str2, 6));

// 	return (0);
// }
