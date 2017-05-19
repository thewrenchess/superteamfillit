# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 13:49:52 by yherrera          #+#    #+#              #
#    Updated: 2017/05/19 13:33:35 by yherrera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MK = make

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = fillit

SRCS = ./srcs/*.c

HDRS = hdrs

OBJS = ./*.o

$(NAME): 
	@$(CC) $(CFLAGS) -c $(SRCS) -I $(HDRS)
	@$(CC) -o $(NAME) $(OBJS)
	@$(MK) clean

all: $(NAME)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
