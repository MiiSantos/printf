# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 15:21:03 by mandress          #+#    #+#              #
#    Updated: 2021/11/23 19:32:17 by mandress         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_tolower.c

BONUS	= ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

NAME	= libft.a

OBJS	= $(SRCS:.c=.o)

BONUS_OBJS	= $(BONUS:.c=.o)

FLAGS	= -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
	clang $(FLAGS) -c $(SRCS)

bonus:	$(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS)

$(BONUS_OBJS):	$(BONUS)
	clang $(FLAGS) -c $(BONUS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re
