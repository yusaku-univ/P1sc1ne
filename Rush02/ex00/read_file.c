/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:51:21 by yumiyaha          #+#    #+#             */
/*   Updated: 2025/03/31 19:57:08 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*read_file(char *filename)
{
	int		fd;
	int		r;
	char	buf[1025];
	char	*content;
	char	*tmp;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	content = malloc(1);
	if (!content)
		return (NULL);
	content[0] = '\0';
	r = read(fd, buf, 1024);
	while (r > 0)
	{
		buf[r] = '\0';
		tmp = ft_strjoin(content, buf);
		free(content);
		if (!tmp)
			return (NULL);
		content = tmp;
		r = read(fd, buf, 1024);
	}
	return (close(fd), content);
}
