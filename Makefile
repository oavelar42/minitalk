# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 15:03:35 by oavelar           #+#    #+#              #
#    Updated: 2021/05/30 16:38:36 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

RM = rm -f

CFLAGS = -Werror -Wall -Wextra

SERVER = server
SERVER_SRCS = srcs/server.o

CLIENT = client
CLIENT_SRCS = srcs/client.o \
			  srcs/utils.o \
			  srcs/utils_2.o	

all : $(SERVER) $(CLIENT)

$(CLIENT) : $(CLIENT_SRCS)
	@$(CC) $(CLIENT_SRCS) -o $(CLIENT)
	@echo "\e[32m$@ built🗣\e[0m\n"

$(SERVER) : $(SERVER_SRCS)
	@$(CC) $(SERVER_SRCS) -o $(SERVER)
	@echo "\e[32m$@ builti✔\e[0m\n"

%.o : %.c
	@$(CC) $(FLAGS) $< -c

clean :
	$(RM) $(SERVER_SRCS) $(CLIENT_SRCS)
	@echo "\e[31mclean done\e[0m\n"

fclean : clean
	@rm -f $(SERVER) $(CLIENT)
	@echo "\e[31mfclean done\e[0m\n"

re : fclean all

.PHONY: all clean fclean re