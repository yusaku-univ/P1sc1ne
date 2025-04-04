# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiida <maiida@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 11:56:45 by yutakumi          #+#    #+#              #
#    Updated: 2025/04/02 20:42:36 by maiida           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq
SRCS	= main.c parse_map.c parse_utils.c read_map_body.c solve.c output.c solve_malloc.c set_dp.c
OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
