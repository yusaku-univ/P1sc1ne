/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:59:18 by yumiyaha          #+#    #+#             */
/*   Updated: 2025/03/31 21:55:49 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_dict(t_dict *dict)
{
	t_dict	*tmp;

	while (dict)
	{
		tmp = dict;
		dict = dict->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	free_all(t_dict *dict, char **lines)
{
	free_dict(dict);
	free_split(lines);
}

char	*get_value_from_dict(t_dict *dict, char *key)
{
	char	*s1;
	char	*s2;

	if (!key[0])
		return (NULL);
	while (dict)
	{
		s1 = dict->key;
		s2 = key;
		if (s1 && s2 && ft_strcmp(s1, s2) == 0)
			return (dict->value);
		dict = dict->next;
	}
	return (NULL);
}

char	*get_index_key(int index)
{
	char	*key;
	int		len;
	int		i;

	len = 3 * index + 1;
	if (index == 0)
		return ("");
	key = malloc(len + 1);
	if (!key)
		return (NULL);
	key[0] = '1';
	i = 0;
	while (i < index)
	{
		key[1 + (i * 3)] = '0';
		key[2 + (i * 3)] = '0';
		key[3 + (i * 3)] = '0';
		i++;
	}
	key[len] = '\0';
	return (key);
}
