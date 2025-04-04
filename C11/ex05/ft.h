/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:28:06 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 13:33:41 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include<unistd.h>

int		main(int argc, char *argv[]);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_add(int a, int b);
void	ft_sub(int a, int b);
void	ft_div(int a, int b);
void	ft_mul(int a, int b);
void	ft_mod(int a, int b);
void	do_op(char *value1, char *value2, void (*f)(int, int));
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
#endif