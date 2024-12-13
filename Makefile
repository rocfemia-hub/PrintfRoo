# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 21:12:34 by roo               #+#    #+#              #
#    Updated: 2024/12/13 01:30:54 by rocfemia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_printf.c ft_printf_utils.c ft_libft_utils.c\
		
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
# AR para compilar una libreria con los objetos que le has pasado
# RCS son flaggs
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all