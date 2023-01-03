# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 19:12:47 by mjabane           #+#    #+#              #
#    Updated: 2023/01/03 11:23:17 by mjabane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_printf.c utils/ft_putchar.c utils/ft_putnbr_base.c utils/ft_putnbr.c utils/ft_putstr.c utils/ft_putmem.c

NAME = libftprintf.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = gcc

CC_FLAGS = -Wall -Werror -Wextra

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)utils
	@$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED) >/dev/null 2>&1 &

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re bonus
