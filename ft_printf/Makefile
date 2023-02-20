# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 19:12:47 by mjabane           #+#    #+#              #
#    Updated: 2023/02/20 18:04:49 by mjabane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_printf.c			\
		ft_putchar.c		\
		ft_putnbr_base.c	\
		ft_putnbr.c			\
		ft_putstr.c			\
		ft_putmem.c			\

NAME = libftprintf.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC_FLAGS = -Wall -Wextra -Werror -c

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CC_FLAGS) $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar rc $(NAME) $(OBJECTS_PREFIXED)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re bonus
