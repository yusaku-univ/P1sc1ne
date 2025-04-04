/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:16:51 by yumiyaha          #+#    #+#             */
/*   Updated: 2025/03/31 23:13:30 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strtrim(char *str, int state)
{
	int		start;
	int		end;
	int		i;
	char	*trimmed;

	str = ft_like_atoi(str, state);
	if (!str || !str[0])
		return (NULL);
	start = 0;
	end = ft_strlen(str);
	if (state == 1)
	{
		while (str[start] == ' ' || str[start] == '\t')
			start++;
		while (end > start && (str[end - 1] == ' ' || str[end - 1] == '\t'))
			end--;
	}
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = str[start++];
	return (trimmed[i] = '\0', trimmed);
}

char	*clean_entry(char *str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	res = malloc(ft_strlen(str) + 1);
	if (!res)
		return (NULL);
	while (str[i] && str[i] != '\n')
	{
		if (!(str[i] == ' ' && str[i + 1] == ' '))
			res[j++] = str[i];
		i++;
	}
	res[j] = '\0';
	return (res);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		len1;
	int		len2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (++i < len1)
		res[i] = s1[i];
	i = -1;
	while (++i < len2)
		res[len1 + i] = s2[i];
	res[len1 + len2] = '\0';
	return (res);
}

char	*ft_like_atoi(char *str, int state)
{
	int		i;
	char	*start;
	int		sign;

	if (!str)
		return (NULL);
	i = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (state == 0 && (str[i] == '+'))
	{
		sign = 1;
		i++;
	}
	while (state == 0 && str[i] == '0' && str[i + 1] && is_numeric(str[i + 1]))
		i++;
	start = str + i;
	if (state == 0)
	{
		while (str[i] && is_numeric(str[i]))
			i++;
		str[i] = '\0';
	}
	return (start);
}
