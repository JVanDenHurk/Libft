# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: justin <justin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 20:48:35 by justin            #+#    #+#              #
#    Updated: 2022/07/03 18:31:40 by justin           ###   ########.fr        #
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
				ft_memcpy.c \
				ft_memmov.c \
				ft_memset.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_bzero.c \
				ft_strnstr.c \
				ft_strncmp.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strlcat.c \
				ft_ strlcpy.c
				
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