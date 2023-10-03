# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msumon <msumon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 09:03:46 by msumon            #+#    #+#              #
#    Updated: 2023/10/03 12:30:51 by msumon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_printf.c ft_print_c.c ft_print_s.c ft_print_d.c main.c \
		ft_putchar.c ft_putnbr.c ft_print_p.c ft_print_i.c \
		ft_print_u.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

TARGET = printf

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re