/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:20:42 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:59 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
			{
				str[i] -= 32;
				j = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char str1[] = "hello world! this is a test.";
// 	char str2[] = "42tokyo is a great place!";
// 	char str3[] = "HELLO WORLD! 123ABC.";

// 	printf("Before: %s\n", str1);
// 	printf("After : %s\n\n", ft_strcapitalize(str1));

// 	printf("Before: %s\n", str2);
// 	printf("After : %s\n\n", ft_strcapitalize(str2));

// 	printf("Before: %s\n", str3);
// 	printf("After : %s\n\n", ft_strcapitalize(str3));

// 	return (0);
// }
