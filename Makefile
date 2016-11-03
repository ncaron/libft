# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 19:51:00 by Niko              #+#    #+#              #
#    Updated: 2016/11/03 00:37:24 by Niko             ###   ########.fr        #
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
	   srcs/ft_isascii.c \
	   srcs/ft_isprint.c \
	   srcs/ft_toupper.c \
	   srcs/ft_tolower.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strncmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_strcat.c \
	   srcs/ft_strncat.c

BIN = ft_putchar.o \
	  ft_putstr.o \
	  ft_isupper.o \
	  ft_islower.o \
	  ft_isalpha.o \
	  ft_isdigit.o \
	  ft_isalnum.o \
	  ft_isascii.o \
	  ft_isprint.o \
	  ft_toupper.o \
	  ft_tolower.o \
	  ft_strcmp.o \
	  ft_strncmp.o \
	  ft_strlen.o \
	  ft_strcat.o \
	  ft_strncat.o

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
