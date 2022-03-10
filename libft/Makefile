# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 15:55:25 by cjimenez          #+#    #+#              #
#    Updated: 2022/03/10 16:09:49 by cjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c	\
	  ft_bzero.c	\
	  ft_calloc.c	\
	  ft_isalnum.c	\
	  ft_isalpha.c	\
	  ft_isascii.c	\
	  ft_isdigit.c	\
	  ft_isprint.c	\
	  ft_itoa.c		\
	  ft_memchr.c	\
	  ft_memcmp.c	\
	  ft_memcpy.c	\
	  ft_memmove.c	\
	  ft_memset.c	\
	  ft_strchr.c	\
	  ft_strcmp.c	\
	  ft_strdup.c	\
	  ft_striteri.c	\
	  ft_strjoin.c	\
	  ft_strlcat.c	\
	  ft_strlcpy.c	\
	  ft_strlen.c	\
	  ft_strmapi.c	\
	  ft_strncmp.c	\
	  ft_strnstr.c	\
	  ft_strrchr.c	\
	  ft_strtrim.c	\
	  ft_substr.c	\
	  ft_tolower.c	\
	  ft_toupper.c	\
	  ft_split.c	\
	  ft_putchar_fd.c	\
	  ft_putstr_fd.c	\
	  ft_putendl_fd.c	\
	  ft_putnbr_fd.c	\
	  ft_printf.c		\
	  ft_params.c		\
	  ft_printf_s.c		\
	  ft_printf_d.c		\
	  ft_putchar.c		\
	  ft_putstr.c		\

BONUS = ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\

OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus : $(OBJS) $(BONUSOBJS)
	$(AR) $(NAME) $(OBJS) $(BONUSOBJS)

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: clean fclean
