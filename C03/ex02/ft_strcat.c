/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:24:26 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:24:31 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include<stdio.h>

// int main()
// {
// 	char dest[50] = "Hello, ";
// 	char src[] = "World!";

// 	printf("Before strcat: %s\n", dest);
// 	ft_strcat(dest, src);
// 	printf("After strcat: %s\n", dest);

// 	return 0;
// }
