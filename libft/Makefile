# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 19:12:47 by mjabane           #+#    #+#              #
#    Updated: 2022/03/07 08:50:51 by mjabane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
LIBSRC    = ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_substr.c ft_strtrim.c ft_strjoin.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c
LIBSRCB =	ft_lstmap.c ft_lstadd_back.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstnew.c ft_lstadd_front.c $(LIBSRC)

LIBSRCO = $(LIBSRCB)

OBJS_DIR = objs/
OBJS = $(LIBSRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB = $(LIBSRCB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

OBJSO = $(LIBSRCO:.c=.o)
OBJECTS_OTHER_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSO))

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)/other
	@$(CC) $(CCFLAGS) -c $< -o $@
	@printf	"\033[2K\r${BLU}[BUILD - $(NAME)]${RST} '$<' $(END)"

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED) >/dev/null 2>&1 &
	@printf "\033[2K\r\033[0;32m[END]\033[0m $(NAME)$(END)"

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED) >/dev/null 2>&1 &

other: $(OBJECTS_OTHER_PREFIXED)
	@ar r $(NAME) $(OBJECTS_OTHER_PREFIXED) >/dev/null 2>&1 &

re: fclean all

.PHONY:		all clean fclean re bonus
