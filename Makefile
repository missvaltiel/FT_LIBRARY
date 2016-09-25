# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karvin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 10:00:36 by karvin            #+#    #+#              #
#    Updated: 2016/09/24 21:38:22 by karvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SRC = *.c
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
