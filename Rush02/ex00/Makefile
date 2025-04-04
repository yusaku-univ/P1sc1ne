SRCS	= convert.c dict_parser.c dict_utils.c ft_split.c main.c print.c read_file.c utils.c utils2.c
OBJS	= ${SRCS:.c=.o}
NAME	= rush-02
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Making $(NAME)"
	$(CC) $(CFLAGS) -o $(NAME) ${OBJS}

%.o: %.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files"
	rm -f $(OBJS)

fclean: clean
	@echo "Removing $(NAME)"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re