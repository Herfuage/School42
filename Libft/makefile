# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhervieu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 16:43:00 by jhervieu          #+#    #+#              #
#    Updated: 2018/11/24 17:57:24 by jhervieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_itoa.c ft_memcpy.c ft_strcmp.c ft_strnstr.c ft_lstadd.c ft_memdel.c \
	  ft_strcpy.c ft_strrchr.c ft_lstapp.c ft_memmove.c ft_strdel.c \
	  ft_strrev.c ft_abs.c ft_lstdel.c ft_memset.c ft_strdup.c ft_strsplit.c \
	  ft_amax.c ft_lstdelone.c  ft_min.c ft_strequ.c ft_strstr.c ft_amin.c \
	  ft_putchar.c ft_striter.c ft_strsub.c ft_atoi.c \
	  ft_putchar_fd.c ft_striteri.c ft_strtrim.c ft_bzero.c \
	  ft_lstiter.c ft_putendl.c ft_strjoin.c ft_tolower.c \
	  ft_lstmap.c ft_putendl_fd.c ft_strlcat.c ft_toupper.c ft_isalnum.c \
	  ft_lstnew.c ft_putnbr.c ft_strlen.c ft_isalpha.c \
	  ft_putnbr_fd.c ft_strmap.c ft_isascii.c ft_putstr.c \
	  ft_strmapi.c ft_isdigit.c ft_max.c ft_putstr_fd.c ft_strncat.c \
	  ft_islower.c ft_memalloc.c ft_sign.c ft_strncmp.c ft_isprint.c \
	  ft_memccpy.c ft_strcat.c ft_strncpy.c ft_isspace.c ft_memchr.c \
	  ft_strchr.c ft_strnequ.c ft_isupper.c ft_memcmp.c ft_strclr.c \
	  ft_strnew.c ft_strfjoin.c ft_lstatsize.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc libft.a $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
