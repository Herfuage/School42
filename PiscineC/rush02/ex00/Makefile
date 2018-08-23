# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uhombour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 11:41:14 by uhombour          #+#    #+#              #
#    Updated: 2018/08/19 18:09:12 by jhervieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

CFILE = main.c read.c rush.c display.c

OBJ = main.o read.o rush.o display.o

all:
	gcc -Wall -Wextra -Werror -c $(CFILE)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
