# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 12:29:22 by cjimenez          #+#    #+#              #
#    Updated: 2022/03/22 14:54:22 by cjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	srcs/main.c					\
		srcs/operators/operators.c	\
		srcs/operators/op_push.c	\
		srcs/operators/op_swap.c	\
		srcs/operators/op_rotate.c	\
		srcs/operators/op_rrotate.c	\
		srcs/parsing.c				\
		srcs/utils.c				\

LIBFT = libft/libft.a
OBJS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = -I./include
RM = rm -rf
.c.o:
	$(CC) $(CFLAGS) $(INC) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	make clean -C libft
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re