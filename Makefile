# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karvin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 10:00:36 by karvin            #+#    #+#              #
#    Updated: 2016/09/27 13:14:18 by karvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_memchr.c ft_memcpy.c ft_putchar.c ft_putstr.c \
	  ft_strcat.c ft_strchr.c ft_strcpy.c ft_strlen.c ft_strnstr.c \
	  ft_strrchr.c ft_strstr.c

OBJ = ${SRC:.c=.o}

GCC = gcc -c -Wall -Werror -Wextra -Includes
HEAD = libft.h

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME).a

re: fclean all

$(NAME):	$(OBJ)
	ar -rc $(NAME).a $(OBJ)
	ranlib $(NAME).a
