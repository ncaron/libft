# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 19:51:00 by Niko              #+#    #+#              #
#    Updated: 2016/11/04 20:35:55 by Niko             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putchar_fd.c \
	   srcs/ft_putstr.c \
	   srcs/ft_putstr_fd.c \
	   srcs/ft_putendl.c \
	   srcs/ft_putendl_fd.c \
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
	   srcs/ft_strncat.c \
	   srcs/ft_strcpy.c \
	   srcs/ft_strncpy.c \
	   srcs/ft_stralloc.c \
	   srcs/ft_memset.c \
	   srcs/ft_bzero.c \
	   srcs/ft_memcpy.c \
	   srcs/ft_memccpy.c \
	   srcs/ft_isspace.c \
	   srcs/ft_atoi.c \
	   srcs/ft_memchr.c \
	   srcs/ft_strclr.c \
	   srcs/ft_striter.c \
	   srcs/ft_striteri.c

BIN = ft_putchar.o \
	  ft_putchar_fd.o \
	  ft_putstr.o \
	  ft_putstr_fd.o \
	  ft_putendl.o \
	  ft_putendl_fd.o \
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
	  ft_strncat.o \
	  ft_strcpy.o \
	  ft_strncpy.o \
	  ft_stralloc.o \
	  ft_memset.o \
	  ft_bzero.o \
	  ft_memcpy.o \
	  ft_memccpy.o \
	  ft_isspace.o \
	  ft_atoi.o \
	  ft_memchr.o \
	  ft_strclr.o \
	  ft_striter.o \
	  ft_striteri.o

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
