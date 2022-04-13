# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 03:41:48 by mandress          #+#    #+#              #
#    Updated: 2022/04/12 04:04:09 by mandress         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	ft_printf
CFLAGS=	gcc -Wall -Wextra -Werror
SRCS=	ft_printf.c \
		print_char.c \
		print_decimal.c \
		print_hex.c \
		print_hexa.c \
		print_int.c  \
		print_string.c \
		print_unsigned.c \
		utils.c
OBJ = $(SRCS:.c=.o)
