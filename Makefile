# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: justin <justin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 20:48:35 by justin            #+#    #+#              #
#    Updated: 2022/06/29 19:20:10 by justin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
CC 			=	gcc
CFLAGS = -Wall -Wextra -Werror -c

SRCS		= 	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memset.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c
				
OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re