# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 03:41:48 by mandress          #+#    #+#              #
#    Updated: 2022/05/11 02:44:10 by mandress         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libftprintf.a
CFLAGS=	gcc -Wall -Wextra -Werror
UTILS= ./utils/utils.a
SRCS=	ft_printf.c \
		print_char.c \
		print_string.c \
		print_p.c \
		print_d.c \
		print_i.c \
		print_u.c \
		print_x.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(UTILS)
	cp utils/utils.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(UTILS):
	make -C ./utils

$(OBJS):
	$(CFLAGS) -I . -c $(SRCS)

clean:
	rm -f $(OBJS)
	make clean -C ./utils

fclean: clean
	make fclean -C ./utils
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

test:
	gcc -g3 main.c libftprintf.a
