# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 14:26:47 by mandress          #+#    #+#              #
#    Updated: 2022/05/05 14:36:54 by mandress         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strlen.c \
	ft_itoa.c \
	ft_putstr_fd.c \
	ft_putnbr_base.c \
	ft_putchar_fd_count.c

NAME	= utils.a

OBJS	= $(SRCS:.c=.o)

FLAGS	= -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
	clang $(FLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
