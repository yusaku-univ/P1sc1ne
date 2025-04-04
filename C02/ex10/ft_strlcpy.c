/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:21:03 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:21:16 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
		dest[0] = '\0';
	return (x);
}

// #include<stdio.h>

// int main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dest[20];
// 	char small_dest[5];
// 	unsigned int len;

// 	len = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied string: \"%s\"\n", dest);
// 	printf("Original length: %u\n", len);

// 	len = ft_strlcpy(small_dest, src, sizeof(small_dest));
// 	printf("Copied string (small buffer): \"%s\"\n", small_dest);
// 	printf("Original length: %u\n", len);

// 	len = ft_strlcpy(dest, src, 0);
// 	printf("Copied string (size = 0): \"%s\"\n", dest);
// 	printf("Original length: %u\n", len);

// 	return (0);
// }
