# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#              #
#    Updated: 2023/06/08 11:46:33 by mjabane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
RM=rm -rf
CFLAGS=-Wall -Wextra -Werror

NAME=push_swap

SRCS=push_swap.c\
		check_numbers.c\
		ft_double.c\
		move.c\
		check_sorted.c\
		move2.c\
		move3.c\
		ft_sorting.c\
		ft_sorting2.c\
		ft_big_sort.c\
		ft_printf_utils.c\
		ft_printf.c\
		ft_putstr_fd.c\
		ft_split.c\

BSRCS=BONUS/push_swap_bonus.c\
		BONUS/ft_check_numbers_bonus.c\
		BONUS/ft_double_bonus.c\
		BONUS/ft_check_sorted_bonus.c\
		BONUS/ft_move_bonus.c\
		BONUS/ft_move2_bonus.c\
		BONUS/ft_move3_bonus.c\
		BONUS/get_next_line.c\
		BONUS/ft_printf_utils_bonus.c\
		BONUS/ft_printf_bonus.c\
		BONUS/ft_putstr_fd_bonus.c\
		BONUS/ft_split_bonus.c\

BOBJCTS=$(BSRCS:%.c=%.o)

OBJCTS=$(SRCS:%.c=%.o)

$(NAME) : $(OBJCTS)
		@$(CC) $(CFLAGS)  $(OBJCTS) -o $(NAME)

all: $(NAME)

bonus : $(BOBJCTS)
		@$(CC) $(CFLAGS)  $(BOBJCTS) -o push_swap_bonus

clean:
		@$(RM) $(OBJCTS) $(BOBJCTS)

fclean: clean
		@$(RM) $(NAME) push_swap_bonus

re: fclean all
