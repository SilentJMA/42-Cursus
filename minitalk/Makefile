# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#              #
#    Updated: 2023/06/24 10:17:31 by mjabane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES	= server.c client.c server_utils.c
OFILES	= $(CFILES:.c=.o)
CLIENT	= client
SERVER 	= server
SRCS_C = client.c server_utils.c
SRCS_S = server.c server_utils.c
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= minitalk.a
RM		= rm -rf

all				:	$(SERVER) $(CLIENT)

$(SERVER)		: $(NAME) minitalk.h
	@$(CC) $(CFLAGS) $(NAME) $(SRCS_S) -o $(SERVER)

$(CLIENT)		: $(NAME) minitalk.h
	@$(CC) $(CFLAGS) $(NAME) $(SRCS_C) -o $(CLIENT)

$(NAME)			: $(OFILES)
	@ar -cr $(NAME) $(OFILES)

clean 			:
	@$(RM) $(OFILES)

fclean			: clean
	@$(RM) $(NAME)
	@$(RM) $(SERVER) $(CLIENT)

re 				: fclean all
