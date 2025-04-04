/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:58:43 by yumiyaha          #+#    #+#             */
/*   Updated: 2025/03/31 22:26:08 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}					t_dict;

t_dict				*parse_dict(char *path);

// convert.c
char				**whiling(char *number, char **dd, int size, int *last);
char				*put_numbers(char *src, int size, int now, int *last);
char				**split_number(char *number, int size, int *last);
int					convert_number(char *number, t_dict *dict);

// dict_parser.c
t_dict				*create_node(char *key, char *value);
char				*split_dict_line(char *line);
t_dict				*add_dict_entry(t_dict *dict, char *line);
t_dict				*parse_dict(char *path);

// dict_utils.c
void				free_dict(t_dict *dict);
void				free_split(char **split);
void				free_all(t_dict *dict, char **lines);
char				*get_value_from_dict(t_dict *dict, char *key);
char				*get_index_key(int index);

// ft_split.c
int					count_words(char *str, char sep);
char				*word_dup(char *str, char sep);
char				**ft_split(char *str, char sep);

// print.c
void				print_hundreds(char *num, t_dict *dict, int is_last);
void				print_tens(char *num, t_dict *dict);
void				print_ones(char *num, t_dict *dict);
void				print_tens_and_ones(char *num, t_dict *dict);
int					print_block(char *num, t_dict *dict, int index, int last);

// read_file.c
char				*read_file(char *filename);

// utils.c
void				ft_putstr(char *str);
int					ft_strlen(char *str);
int					ft_strcmp(char *s1, char *s2);
int					is_valid_numeric(char *str);
int					is_numeric(char c);

// utils2.c
char				*ft_strtrim(char *str, int state);
char				*clean_entry(char *str);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_like_atoi(char *str, int state);

#endif
