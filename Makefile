# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 09:03:46 by msumon            #+#    #+#              #
#    Updated: 2023/10/05 05:39:39 by msumon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_print_char.c ft_print_digit.c ft_print_digit_cap.c \
		ft_print_str.c ft_print_pointer.c ft_printf.c ft_strlen.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

COLOR_GREEN = '\033[0;32m'
COLOR_RED = '\033[0;31m'
COLOR_BLUE = '\033[0;34m'
END_COLOR = '\033[0m'

all: $(NAME)

$(NAME): $(OBJ)
#$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo $(COLOR_GREEN)"👑 🥳 🥳 👑 Compiled Successfully !👑 🥳 🥳 👑"$(END_COLOR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo $(COLOR_GREEN)"✅OK✅OK✅OK✅OK✅"$(END_COLOR)
clean:
	rm -f $(OBJ)
	@echo $(COLOR_RED)" 🗑️ 🗑️  Clean all object files 🗑️ 🗑️ "$(END_COLOR)

fclean: clean
	rm -f $(NAME)
	@echo $(COLOR_RED)"🔥 🔥 Clean All 🔥 🔥"$(END_COLOR)

re: fclean all

.PHONY: all clean fclean re