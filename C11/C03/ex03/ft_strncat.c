/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:24:35 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:24:41 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include<stdio.h>

// int main(void)
// {
// 	char	dest[50] = "Hello, ";
// 	char	src[] = "World!";
// 	unsigned int	nb = 3;

// 	printf("Before: %s\n", dest);
// 	ft_strncat(dest, src, nb);
// 	printf("After: %s\n", dest);

// 	return 0;
// }
