# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 16:55:55 by hnaciri-          #+#    #+#              #
#    Updated: 2021/12/14 19:42:27 by hnaciri-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_calloc.c ft_bzero.c ft_memset.c ft_putstr_fd.c ft_putendl_fd.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c get_next_line.c ft_strchr.c ft_strjoin.c ft_strdup.c ft_strlen.c ft_strcmp.c
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJS = $(SRCS:.c=.o)
CC = cc
all : $(NAME)
$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)
clean :
	rm -f $(OBJS) $(BONUSOBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
