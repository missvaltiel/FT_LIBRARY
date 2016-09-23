# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karvin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 10:00:36 by karvin            #+#    #+#              #
#    Updated: 2016/09/22 22:27:04 by karvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SRC = *.c
#ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
#ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c \
#ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
#ft_memset.c ft_putnbr.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c \
#ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c
OBJ := ${SRC:.c=.o}

WTF = *.gch

HEADER = libft.h

all: $(NAME)

$(NAME):
		$(GCC) $(CFLAGS) $(SRC) $(HEADER)
		ar rc $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(WTF)

re: fclean all

.PHONY: all clean fclean re
