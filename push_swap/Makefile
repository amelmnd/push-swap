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
SRCS = for_dev.c ft_libft_utils.c ft_push.c utils.c
OBJS = $(SRCS:.c=.o)

# RULES
all: $(EXEC)

$(EXEC): $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@echo "$(COLOUR_GREEN).o generate 🍀$(END_COLOR)"
	@$(CC) $(CFLAGS) $(ORIGIN) $(OBJS) -o $(EXEC)
	@echo "$(COLOUR_GREEN)exec generate 🍀$(END_COLOR)"

run:
	@$(CC) $(CFLAGS) $(ORIGIN) $(SRCS) -o $(EXEC)
	@echo "$(COLOUR_RED)🚀 run$(END_COLOR)"
	@./$(EXEC)

clean:
	@rm -rf *.o
	@echo "$(COLOUR_BLUE)ft_printf clean 🐟$(END_COLOR)"

fclean : clean
	@rm -rf $(NAME) $(EXEC)
	@echo "$(COLOUR_BLUE)ft_printf fclean 🐳$(END_COLOR)"

re:fclean all
	@echo "$(COLOUR_YELLOW)ft_printf re 🍋$(END_COLOR)"


.PHONY: all clean fclean re
