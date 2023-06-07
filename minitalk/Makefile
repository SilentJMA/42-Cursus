# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#              #
#    Updated: 2023/06/08 00:19:23 by mjabane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES	= server.c client.c server_utils.c
OFILES	= $(CFILES:.c=.o)
CLIENT	= client
SERVER 	= server
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= minitalk.a
RM		= rm -rf

all				:	$(SERVER) $(CLIENT)

$(SERVER)		: $(NAME) minitalk.h
	@$(CC) $(CFLAGS) $(NAME) server.c -o $(SERVER)

$(CLIENT)		: $(NAME) minitalk.h
	@$(CC) $(CFLAGS) $(NAME) client.c -o $(CLIENT)

$(NAME)			: $(OFILES)
	@ar -cr $(NAME) $(OFILES)

clean 			:
	@$(RM) $(OFILES) $(BOFILES)

fclean			: clean
	@$(RM) $(NAME)
	@$(RM) $(SERVER) $(CLIENT)

re 				: fclean all
