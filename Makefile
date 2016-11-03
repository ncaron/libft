# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 19:51:00 by Niko              #+#    #+#              #
#    Updated: 2016/11/02 21:33:37 by Niko             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_isupper.c \
	   srcs/ft_islower.c \
	   srcs/ft_isalpha.c \
	   srcs/ft_isdigit.c \
	   srcs/ft_isalnum.c \
	   srcs/ft_isascii.c

BIN = ft_putchar.o \
	  ft_putstr.o \
	  ft_isupper.o \
	  ft_islower.o \
	  ft_isalpha.o \
	  ft_isdigit.o \
	  ft_isalnum.o \
	  ft_isascii.o

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
