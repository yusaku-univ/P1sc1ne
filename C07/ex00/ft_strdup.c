/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:13:26 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/19 18:24:38 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
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
// 	char	*src = "Hello World!";
// 	char	*dest = ft_strdup(src);

// 	if (!dest)
// 		return (1);
// 	printf("Copied string: %s\n", dest);
// 	free(dest);
// 	return (0);
// }
