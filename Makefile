# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 15:03:35 by oavelar           #+#    #+#              #
#    Updated: 2021/05/29 17:44:20 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLI		= client
NAME_SER		= server

GREEN					:= \033[1;32m
RED						:= \033[1;31m
YELLOW				    := \033[1;33m
COLOR_OFF			    := \033[0

CC 			= gcc

RM 			= rm -f

SRC_CLI 		= srcs/client.c \
       		 	  srcs/utils.c \
			  	  srcs/utils_2.c 
       		  
SRC_SER			= srcs/server.c 

OBJ1 		= $(SRC_CLI:.c=.o)

OBJ2		= $(SRC_SER:.c=.o)

all: $(NAME)

$(NAME_CLI): $(OBJ1) $(NAME_CLI)	
	$(CC) $(OBJ1) -o $(NAME_CLI)
	@echo "$(GREEN)Client already...$(COLOR_OFF)"

$(NAME_SER): $(OBJ2) $(NAME_SER)
	$(CC) $(OBJ2) -o $(NAME_SER)
	@echo "$(GREEN)Server already...$(COLOR_OFF)"

clean:
	$(RM) $(OBJ1) $(OBJ2)
	@echo "$(YELLOW)Objects removed$(COLOR_OFF)"

fclean: clean
	$(RM) $(OBJ1) $(OBJ2) $(NAME)
	@echo "$(RED)All cleared$(COLOR_OFF)"

re: fclean all

.PHONY: all clean fclean re
