/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:20:32 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:39 by yutakumi         ###   ########.fr       */
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

// #include<stdio.h>

// int main(void)
// {
// 	char str1[] = "HELLO WORLD!";
// 	char str2[] = "MixedCASE123";
// 	char str3[] = "";

// 	printf("Before: %s | After: %s\n", "HELLO WORLD!", ft_strlowcase(str1));
// 	printf("Before: %s | After: %s\n", "MixedCASE123", ft_strlowcase(str2));
// 	printf("Before: %s | After: %s\n", "\"\"", ft_strlowcase(str3));

// 	return (0);
// }
