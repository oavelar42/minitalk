# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 15:03:35 by oavelar           #+#    #+#              #
#    Updated: 2021/05/28 22:39:24 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN					:= \033[1;32m
RED						:= \033[1;31m
YELLOW				    := \033[1;33m
COLOR_OFF			    := \033[0

CC 			= gcc

RM 			= rm -f

SRC 		= ./srcs/client.c \
       		  ./srcs/utils.c \
			  ./srcs/utils_2.c \
       		  ./srcs/server.c 

NAME		= ./srcs

OBJ 		= $(SRC:.c=.o)

$(NAME): $(OBJ) $(NAME)	
	$(CC) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Lets talk...$(COLOR_OFF)"
	
all: $(NAME)

clean:
	$(RM) $(OBJ)
	@echo "$(YELLOW)Objects removed$(COLOR_OFF)"

fclean: clean
	$(RM) $(OBJ) $(NAME)
	@echo "$(RED)All cleared$(COLOR_OFF)"

re: fclean all

.PHONY: all clean fclean re
