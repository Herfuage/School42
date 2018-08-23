# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grgauthi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 18:11:49 by grgauthi          #+#    #+#              #
#    Updated: 2018/08/22 18:25:48 by grgauthi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/main.c					\
		srcs/ft_strcat.c			\
		srcs/ft_strcpy.c			\
		srcs/ft_strlen.c			\
		srcs/ft_str_is_numeric.c	\
		srcs/ft_is_auth.c			\
		srcs/ft_atoi.c 				\
		srcs/ft_build_grid.c		\
		srcs/ft_get_metadata.c		\
		srcs/ft_is_empty_cell.c		\
		srcs/ft_merge_square.c		\
		srcs/ft_print_map.c			\
		srcs/ft_read_first_line.c	\
		srcs/ft_read_map.c			\
		srcs/ft_solve_map.c			\
		srcs/ft_max_square.c		\


OBJ = $(SRC:.c=.o)

CC = gcc

NAME = bsq

.H_DIR = ./includes

CFLAGS = -Werror -Wextra -Wall -I$(.H_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
