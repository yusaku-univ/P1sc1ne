/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:14:49 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:14:57 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include<stdio.h>

// int main(void)
// {
// 	char dest1[20];
// 	char dest2[20];
// 	char dest3[20];

// 	char src[] = "Hello, World!";

// 	ft_strncpy(dest1, src, 5);
// 	printf("Case 1 (n < strlen(src)): %s\n", dest1);

// 	ft_strncpy(dest2, src, 13);
// 	printf("Case 2 (n == strlen(src)): %s\n", dest2);

// 	ft_strncpy(dest3, src, 15);
// 	printf("Case 3 (n > strlen(src)): %s\n", dest3);

// 	return (0);
// }
