# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#              #
#    Updated: 2023/06/07 12:36:42 by mjabane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

CLIENT = client
SERVER = server

SRCS_C = client.c \
			server_utils.c \

SRCS_S = server.c \
			server_utils.c \

OBJS_C = $(SRCS_C:%.c=%.o)

OBJS_S = $(SRCS_S:%.c=%.o)

all: $(SERVER) $(CLIENT)

$(CLIENT) : $(OBJS_C)
	CC -o $@ $^ $(CFLAGS)

$(SERVER) : $(OBJS_S)
	CC -o $@ $^ $(CFLAGS)

clean:
	rm -f $(OBJS_C) $(OBJS_S)

fclean:
	rm -f $(CLIENT) $(SERVER)

re:
	fclean all
