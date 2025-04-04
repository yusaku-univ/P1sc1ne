/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:13:58 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/21 16:14:04 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_separator(str[i], charset))
			i++;
		if (str[i])
		count ++;
		while (str[i] && !check_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (0);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(&str[j], charset) + 1));
	if (!strings)
		return (0);
	while (str[j])
	{
		while (str[j] && check_separator(str[j], charset))
			j++;
		if (str[j])
		{
			strings[i] = ft_word(&str[j], charset);
			i++;
		}
		while (str[j] && !check_separator(str[j], charset))
			j++;
	}
	strings[i] = 0;
	return (strings);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello,,World!42--Tokyo";
// 	char charset[] = ",!-";
// 	char **result;
// 	int i;

// 	result = ft_split(str, charset);
// 	if (!result)
// 	{
// 		printf("ft_split failed to allocate memory.\n");
// 		return (1);
// 	}

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d] = %s\n", i, result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }