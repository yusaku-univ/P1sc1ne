/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:14:25 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:14:32 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dest[50];

// 	ft_strcpy(dest, src);
// 	printf("Copied string: %s\n", dest);
// 	return (0);
// }
