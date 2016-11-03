# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 19:51:00 by Niko              #+#    #+#              #
#    Updated: 2016/11/02 20:43:19 by Niko             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c

BIN = ft_putchar.o

INCLUDES = libft.h

all: $(NAME) clean

$(NAME):
	gcc -c $(FLAGS) $(SRCS) $(INCLUDES)
	ar rc $(NAME) $(BIN)

clean:
	rm -f $(BIN)
	rm -f libft.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
