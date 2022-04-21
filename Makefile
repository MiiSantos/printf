# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 03:41:48 by mandress          #+#    #+#              #
#    Updated: 2022/04/22 00:31:02 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	ft_printf
CFLAGS=	gcc -Wall -Wextra -Werror
LIBFT= ./libft/libft.a
SRCS=	ft_printf.c \
		print_char.c \
		print_string.c \
		print_p.c \
		print_d.c \
		print_i.c \
		print_u.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) 
	make clean
	
$(NAME): $(OBJS) $(LIBFT)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)
	
$(LIBFT): 
	make -C ./libft
	
$(OBJS):
	$(CFLAGS) -I . -c $(SRCS)

clean: 
	rm -f $(OBJS) 
	make clean -C ./libft
	
fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all

test: re 
	gcc -g3 -I ./src main.c $(SRCS) -L ./libft -lft