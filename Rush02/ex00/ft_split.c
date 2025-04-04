/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:52:05 by yumiyaha          #+#    #+#             */
/*   Updated: 2025/03/31 14:20:13 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	count_words(char *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}

char	*word_dup(char *str, char sep)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		wc;
	char	**result;

	wc = count_words(str, sep);
	result = malloc(sizeof(char *) * (wc + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == sep)
			str++;
		if (*str)
		{
			result[i++] = word_dup(str, sep);
			while (*str && *str != sep)
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}
