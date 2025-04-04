/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:13:44 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/19 18:36:10 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*empty_str(void)
{
	char	*res;

	res = malloc(1);
	if (!res)
		return (0);
	*res = 0;
	return (res);
}

int	total_len(int size, char **strs, char *sep)
{
	int	tot;
	int	i;

	tot = 0;
	i = 0;
	while (i < size)
	{
		tot += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		tot += ft_strlen(sep) * (size - 1);
	return (tot);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		t;

	if (size <= 0)
		return (empty_str());
	t = total_len(size, strs, sep);
	ret = malloc(sizeof(char) * (t + 1));
	if (!ret)
		return (0);
	*ret = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(ret, strs[i++]);
		if (i < size)
			ft_strcat(ret, sep);
	}
	return (ret);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	*result;
// 	char	*test1[] = {"Hello", "world", "42"};
// 	char	*test2[] = {"apple", "banana", "cherry", "date"};
// 	char	*test3[] = {""};
// 	char	*test4[] = {"one"};

// 	result = ft_strjoin(3, test1, " ");
// 	printf("Test 1: %s\n", result);
// 	free(result);

// 	result = ft_strjoin(4, test2, ", ");
// 	printf("Test 2: %s\n", result);
// 	free(result);

// 	result = ft_strjoin(1, test3, ", ");
// 	printf("Test 3: \"%s\"\n", result);
// 	free(result);

// 	result = ft_strjoin(1, test4, ", ");
// 	printf("Test 4: %s\n", result);
// 	free(result);

// 	result = ft_strjoin(0, test1, ", ");
// 	printf("Test 5: \"%s\"\n", result);
// 	free(result);

// 	return (0);
// }
