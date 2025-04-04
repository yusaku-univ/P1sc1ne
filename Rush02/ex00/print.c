/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:28:35 by thirata           #+#    #+#             */
/*   Updated: 2025/03/31 21:56:41 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_hundreds(char *num, t_dict *dict, int is_last)
{
	char	key[2];
	char	*str;

	if (num[0] != '0')
	{
		key[0] = num[0];
		key[1] = '\0';
		str = get_value_from_dict(dict, key);
		write(1, str, ft_strlen(str));
		write(1, " ", 1);
		str = get_value_from_dict(dict, "100");
		write(1, str, ft_strlen(str));
		if (is_last != 0 || (num[1] != '0' || num[2] != '0'))
			write(1, " ", 1);
	}
}

void	print_tens(char *num, t_dict *dict)
{
	char	key[3];

	if (num[1] != '0')
	{
		key[0] = num[1];
		key[1] = '0';
		key[2] = '\0';
		write(1, get_value_from_dict(dict, key),
			ft_strlen(get_value_from_dict(dict, key)));
	}
}

void	print_ones(char *num, t_dict *dict)
{
	char	key[2];

	if (num[2] != '0')
	{
		key[0] = num[2];
		key[1] = '\0';
		write(1, get_value_from_dict(dict, key),
			ft_strlen(get_value_from_dict(dict, key)));
	}
}

void	print_tens_and_ones(char *num, t_dict *dict)
{
	char	key[3];

	if (num[1] == '1')
	{
		key[0] = num[1];
		key[1] = num[2];
		key[2] = '\0';
		write(1, get_value_from_dict(dict, key),
			ft_strlen(get_value_from_dict(dict, key)));
	}
	else
	{
		print_tens(num, dict);
		if (num[1] != '0' && num[2] != '0')
			write(1, " ", 1);
		print_ones(num, dict);
	}
}

int	print_block(char *num, t_dict *dict, int index, int last)
{
	char	*index_value;
	char	*key;

	if (ft_strcmp(num, "000") == 0)
		return (0);
	key = get_index_key(index);
	index_value = get_value_from_dict(dict, key);
	if (key[0] && key != NULL)
		free(key);
	if (index > 0 && (!index_value || !*index_value))
		return (1);
	print_hundreds(num, dict, index - last);
	print_tens_and_ones(num, dict);
	{
		if (index_value && *index_value)
		{
			write(1, " ", 1);
			write(1, index_value, ft_strlen(index_value));
			if (last != index)
				write(1, " ", 1);
		}
	}
	return (0);
}
