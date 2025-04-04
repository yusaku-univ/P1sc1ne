# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/28 15:49:35 by yutakumi          #+#    #+#              #
#    Updated: 2025/03/28 16:26:17 by yutakumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_cat.c ft_cat_utils.c
OBJS	= $(SRCS:.c=.o)
HEADERS	= ft_cat.h

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean