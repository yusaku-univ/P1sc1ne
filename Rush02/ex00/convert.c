/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 19:08:52 by thirata           #+#    #+#             */
/*   Updated: 2025/03/31 22:18:39 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*put_numbers(char *src, int size, int now, int *last)
{
	char	*nnn;
	int		i;
	int		index;

	nnn = malloc(sizeof(char) * 4);
	if (nnn == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < 3)
	{
		if (size + i < 3)
			nnn[i++] = '0';
		else
			nnn[i++] = src[index++];
	}
	nnn[i] = '\0';
	if (ft_strcmp(nnn, "000") != 0)
		*last = now;
	return (nnn);
}

char	**whiling(char *number, char **dd, int size, int *last)
{
	int	i;
	int	rem;
	int	dd_size;
	int	offset;

	i = 0;
	rem = size % 3;
	dd_size = size / 3 + (rem > 0);
	i = 0;
	offset = 0;
	if (rem > 0)
	{
		dd[i] = put_numbers(number, rem, dd_size - 1 - i, last);
		offset = rem;
		i++;
	}
	while (i < dd_size)
	{
		dd[i] = put_numbers(number + offset, 3, dd_size - 1 - i, last);
		offset += 3;
		i++;
	}
	dd[i] = NULL;
	return (dd);
}

char	**split_number(char *number, int size, int *last)
{
	char	**dd;
	int		dd_size;
	int		rem;

	rem = size % 3;
	dd_size = size / 3 + (rem > 0);
	dd = malloc(sizeof(char *) * (dd_size + 1));
	if (dd == NULL)
		return (NULL);
	dd = whiling(number, dd, size, last);
	if (*last == -1)
		return (NULL);
	return (dd);
}

int	convert_number(char *number, t_dict *dict)
{
	int		size;
	char	**dd;
	int		i;
	int		dd_length;
	int		last;

	last = -1;
	size = ft_strlen(number);
	dd = split_number(number, size, &last);
	if (last == -1)
		return (write(1, "zero\n", 5), 0);
	if (dd == NULL)
		return (1);
	dd_length = 0;
	while (dd[dd_length])
		dd_length++;
	i = 0;
	while (i < dd_length)
	{
		if (print_block(dd[i], dict, dd_length - 1 - i, last))
			return (2);
		free(dd[i++]);
	}
	write(1, "\n", 1);
	return (free(dd), 0);
}
