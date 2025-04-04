/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:10:11 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/28 16:13:08 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include<unistd.h>
# include<fcntl.h>
# include<errno.h>
# include<string.h>
# include<libgen.h>

# define BUF_SIZE 30000

int		ft_strlen(char *str);
void	ft_puterr(char *prog, char *filename);
int		read_and_write(int fd);
void	handle_file(char *prog, char *filename);
void	handle_stdin(char *prog);

#endif