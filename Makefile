# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 15:03:35 by oavelar           #+#    #+#              #
#    Updated: 2021/05/27 15:06:40 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

CC = gcc

RM = rm -f

SRC = ./srcs/server.c \
       ./srcs/my_put_nbr.c \
			 ./srcs/client.c \
       ./srcs/my_put_nbr.c \
       ./srcs/my_getnbr.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(NAME)
	$(CC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
