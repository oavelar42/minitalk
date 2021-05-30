# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 15:03:35 by oavelar           #+#    #+#              #
#    Updated: 2021/05/30 18:54:29 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

SERVER = server
SERVER_SRCS = srcs/server.c

CLIENT = client
CLIENT_SRCS = srcs/client.c \
			  srcs/utils.c \
			  srcs/utils_2.c 

all : $(SERVER) $(CLIENT)

$(CLIENT) : $(CLIENT_SRCS)
	@$(CC) $(CLIENT_SRCS) -o $(CLIENT)
	@printf "\e[32m$@ built🗣\e[0m\n"

$(SERVER) : $(SERVER_SRCS)
	@$(CC) $(SERVER_SRCS) -o $(SERVER)
	@printf "\e[32m$@ builti✔\e[0m\n"

%.o : %.c
	@$(CC) $(FLAGS) $< -c

clean :
	@rm -f 
	@printf "\e[31mAll clean\e[0m\n"

fclean : clean
	@rm -f $(SERVER) $(CLIENT)
	@printf "\e[31mfAll clean\e[0m\n"

re : fclean all

.PHONY: all clean fclean re