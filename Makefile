# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karvin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 10:00:36 by karvin            #+#    #+#              #
#    Updated: 2016/10/04 23:15:05 by karvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_islower.c ft_isprint.c ft_isupper.c ft_memccpy.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c \
	ft_putnbr.c ft_putstr.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c  \
	ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c \
	ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_tolower.c \
	ft_toupper.c

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
