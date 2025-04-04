/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:24:02 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:24:13 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *str1 = "hello";
// 	char *str2 = "hello";
// 	char *str3 = "hella";
// 	char *str4 = "hellz";
// 	char *str5 = "hello!";
// 	char *str6 = "hell";

// 	printf("ft_strcmp(\"%s\", \"%s\") = %d\n",
// 		str1, str2, ft_strcmp(str1, str2)); // 0
// 	printf("ft_strcmp(\"%s\", \"%s\") = %d\n",
// 		str1, str3, ft_strcmp(str1, str3)); // 'o' - 'a' = 14
// 	printf("ft_strcmp(\"%s\", \"%s\") = %d\n",
// 		str1, str4, ft_strcmp(str1, str4)); // 'o' - 'z' = -11
// 	printf("ft_strcmp(\"%s\", \"%s\") = %d\n",
// 		str1, str5, ft_strcmp(str1, str5)); // '\0' - '!' = -33
// 	printf("ft_strcmp(\"%s\", \"%s\") = %d\n",
// 		str1, str6, ft_strcmp(str1, str6)); // 'o' - '\0' = 111

// return (0);
// }
