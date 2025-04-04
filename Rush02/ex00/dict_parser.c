/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:00:17 by yumiyaha          #+#    #+#             */
/*   Updated: 2025/03/31 23:12:49 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*create_node(char *key, char *value)
{
	t_dict	*node;

	node = malloc(sizeof(t_dict));
	if (!node)
		return (NULL);
	node->key = ft_strtrim(key, 0);
	if (node->key == NULL)
		return (NULL);
	node->value = ft_strtrim(value, 1);
	if (node->value == NULL)
		return (NULL);
	node->next = NULL;
	return (node);
}

char	*split_dict_line(char *line)
{
	char	*colon;

	colon = line;
	while (*colon && *colon != ':')
		colon++;
	if (!*colon)
		return (NULL);
	*colon = '\0';
	return (colon + 1);
}

t_dict	*add_dict_entry(t_dict *dict, char *line)
{
	char	*val;
	t_dict	*node;

	val = split_dict_line(line);
	if (!val)
		return (NULL);
	node = create_node(line, val);
	if (!node)
		return (NULL);
	node->next = dict;
	return (node);
}

t_dict	*parse_dict(char *path)
{
	t_dict	*dict;
	char	*content;
	char	**lines;
	int		i;

	content = read_file(path);
	if (!content)
		return (NULL);
	lines = ft_split(content, '\n');
	free(content);
	if (!lines)
		return (NULL);
	dict = NULL;
	i = 0;
	while (lines[i])
	{
		if (lines[i][0])
		{
			dict = add_dict_entry(dict, lines[i++]);
			if (dict == NULL)
				return (free_all(dict, lines), NULL);
		}
	}
	free_split(lines);
	return (dict);
}
