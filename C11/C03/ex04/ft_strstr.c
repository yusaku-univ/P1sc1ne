/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:24:44 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:24:49 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello, this is a simple test.";
// 	char	to_find1[] = "simple";
// 	char	to_find2[] = "test";
// 	char	to_find3[] = "notfound";
// 	char	to_find4[] = "";
// 	char	*result;

// 	result = ft_strstr(str, to_find1);
// 	printf("Searching for '%s' in '%s':\n%s\n", to_find1, str, result);
// 	result = ft_strstr(str, to_find2);
// 	printf("Searching for '%s' in '%s':\n%s\n", to_find2, str, result);
// 	result = ft_strstr(str, to_find3);
// 	printf("Searching for '%s' in '%s':\n%s\n", to_find3, str, result);
// 	result = ft_strstr(str, to_find4);
// 	printf("Searching for '%s' in '%s':\n%s\n", to_find4, str, result);
// 	return (0);
// }
