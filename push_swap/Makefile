# COLOR MAKEFILE
COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;36m
COLOUR_YELLOW = \033[0;93m
COLOUR_MAGENTA = \033[0;95m
END_COLOR=\033[0m

# VAR
EXEC = push_swap
ORIGIN = main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./include/

DIR_UTILS = utils/
SRCS_UTILS =	$(DIR_UTILS)for_dev.c\
				$(DIR_UTILS)fn_utils.c

DIR_PARS = parsing/
SRCS_PARS =	$(DIR_PARS)has_valid_arg.c\
			$(DIR_PARS)ft_split_atoi.c\
			$(DIR_PARS)check_arg.c\

DIR_INSTRUC= instruction/
SRCS_INSTRUC=	$(DIR_INSTRUC)ft_push.c \
				$(DIR_INSTRUC)ft_pop.c \
				$(DIR_INSTRUC)ft_swap.c \
				$(DIR_INSTRUC)ft_rotate.c \
				$(DIR_INSTRUC)ft_reverse_rotate.c

DIR_SORT= sort/
SRCS_SORT=	$(DIR_SORT)sort_three.c \
			$(DIR_SORT)sort_four.c \
			$(DIR_SORT)sort_five.c \

SRCS = $(SRCS_UTILS) $(SRCS_PARS) $(SRCS_INSTRUC) execute_instruction.c $(SRCS_SORT) $(ORIGIN)
OBJS = $(SRCS:.c=.o)

# RULES
# all: $(EXEC) //TODO during dev
all: run

libft:
	@make -C ./include/libft

$(EXEC): $(OBJS) libft
	@$(CC) -I ./include $(OBJS) ./include/libft/libft.a $(CFLAGS) -o $(EXEC)
	@echo "$(COLOUR_GREEN)objs & exec generate 🍀$(END_COLOR)"

run: libft
	@$(CC) -I ./include $(SRCS) ./include/libft/libft.a $(CFLAGS) -o $(EXEC)
	@echo "$(COLOUR_GREEN)exec generate 🍀$(END_COLOR)"

leaks:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(EXEC)

norme:
	norminette $(SRCS) ./include/libft/*.c ./include/libft/*.h

clean:
	@cd ./include/libft; make clean
	@rm -rf $(OBJS)
	@echo "$(COLOUR_BLUE) clean 🐟$(END_COLOR)"

fclean : clean
	@cd ./include/libft && make fclean
	@rm -rf $(NAME) $(EXEC)
	@echo "$(COLOUR_BLUE) fclean 🐳$(END_COLOR)"

re:fclean all
	@echo "$(COLOUR_MAGENTA)make re OK 🌸$(END_COLOR)"

.PHONY: all clean fclean re run leaks
