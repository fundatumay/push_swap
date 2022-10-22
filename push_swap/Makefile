CC = gcc
NAME = push_swap
SRCS = $(wildcard srcs/*.c libft/*.c)
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

norminette:
	norminette *.c

re: fclean all

.PHONY: all clean fclean norminette re