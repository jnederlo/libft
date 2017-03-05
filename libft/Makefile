# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/02 13:41:01 by jnederlo          #+#    #+#              #
#    Updated: 2017/03/04 20:09:39 by jnederlo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC			= 	gcc
FLAGS		=	-c -Wall -Werror -Wextra
HEADER		=	libft.h
FILES		=	ft_atoi.c ft_strcat.c ft_strncat.c ft_strcmp.c ft_strncmp.c \
			   	ft_strcpy.c ft_strncpy.c ft_strlen.c ft_strstr.c ft_strchr.c \
			   	ft_strrchr.c	
OBJECTS		=	$(FILES:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(FILES)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
