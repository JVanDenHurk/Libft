# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvan-den <jvan-den@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 20:48:35 by justin            #+#    #+#              #
#    Updated: 2022/06/27 14:26:35 by jvan-den         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
CC 			=	gcc
CFLAGS = -Wall -Wextra -Werror -c

SRCS		= 	ft_memset.c
OBJS		=	$(SRCS:.c=.o)

all:
	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
