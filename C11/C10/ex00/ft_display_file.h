/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:17:19 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/28 15:42:16 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include<unistd.h>
# include<fcntl.h>

int		ft_display_file(char *filename);
int		ft_open_file(char *filename);
ssize_t	ft_read_file(int fd, char *buf, size_t size);
int		ft_write_stdout(char *buf, ssize_t size);
void	ft_putstr_fd(char *str, int fd);

#endif