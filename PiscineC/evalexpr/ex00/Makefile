# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 20:03:38 by jhervieu          #+#    #+#              #
#    Updated: 2018/08/19 22:05:32 by jhervieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

CFILE = main.c link.c toolbox.c

OBJ = main.o link.o toolbox.o

all:
	gcc -Wall -Wextra -Werror -c $(CFILE)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
