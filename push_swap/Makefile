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
CFLAGS = -Wall -Wextra -Werror

DIR_UTILS = utils/
SRCS_UTILS =	$(DIR_UTILS)for_dev.c\
				$(DIR_UTILS)ft_libft_utils.c \
				$(DIR_UTILS)fn_utils.c

DIR_INSTRUC= instruction/
SRCS_INSTRUC=	$(DIR_INSTRUC)ft_push.c \
				$(DIR_INSTRUC)ft_pop.c \
				$(DIR_INSTRUC)/ft_swap.c \
				# $(DIR_INSTRUC)/ft_rotate.c \
				# $(DIR_INSTRUC)/ft_reverse_rotate.c
SRCS = $(SRCS_UTILS) $(SRCS_INSTRUC)
OBJS = $(SRCS:.c=.o)

# RULES
all: $(EXEC)

$(EXEC): $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@echo "$(COLOUR_GREEN).o generate 🍀$(END_COLOR)"
	@$(CC) $(CFLAGS) $(ORIGIN) $(OBJS) -o $(EXEC)
	@echo "$(COLOUR_GREEN)exec generate 🍀$(END_COLOR)"

run:
	@$(CC) $(CFLAGS) -Iinclude $(ORIGIN) $(SRCS) -o $(EXEC)
	@echo "$(COLOUR_RED)🚀 run$(END_COLOR)"
	@./$(EXEC)

leaks:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(EXEC)

clean:
	@rm -rf *.o
	@echo "$(COLOUR_BLUE)ft_printf clean 🐟$(END_COLOR)"

fclean : clean
	@rm -rf $(NAME) $(EXEC)
	@echo "$(COLOUR_BLUE)ft_printf fclean 🐳$(END_COLOR)"

re:fclean all
	@echo "$(COLOUR_YELLOW)ft_printf re 🍋$(END_COLOR)"

.PHONY: all clean fclean re run leaks
