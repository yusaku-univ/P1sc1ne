# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/21 16:14:07 by yutakumi          #+#    #+#              #
#    Updated: 2025/03/22 19:13:23 by yutakumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	= srcs
INC_DIR	= includes
SRCS	= \
		$(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strcmp.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_swap.c
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
AR		= ar rcs
RM		= rm -f
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re