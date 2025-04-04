# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/28 12:49:41 by yutakumi          #+#    #+#              #
#    Updated: 2025/03/28 15:43:33 by yutakumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= main.c ft_display_file.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

main.o: main.c ft_display_file.h
ft_display_file.o: ft_display_file.c ft_display_file.h

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean