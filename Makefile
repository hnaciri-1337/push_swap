NAME = push_swap
CHECK = checker
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/pushswap.c srcs/swap.c srcs/push.c srcs/rotate.c srcs/reverserotate.c srcs/checkargs.c srcs/get_small_big.c srcs/hardcodesort.c srcs/helpers.c
BONUS = bonus/swap.c bonus/push.c bonus/rotate.c bonus/reverserotate.c bonus/checkargs.c bonus/checker.c
all: $(NAME)
$(NAME):
	cd libft && make && cp libft.a ../libft.a && make fclean && cd ..
	cc $(FLAGS) $(SRCS) libft.a -o $(NAME)
clean:
	rm -f libft.a
fclean: clean
	rm -f $(NAME) $(CHECK)
re: fclean all
bonus: $(CHECK)
$(CHECK):
	cc $(FLAGS) $(BONUS) libft.a -o $(CHECK)