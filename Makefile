# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yherrera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 13:49:52 by yherrera          #+#    #+#              #
#    Updated: 2016/11/09 13:49:53 by yherrera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = fillit

SRCS = ./*.c

HDRS = libft.h

OBJS = ./*.o

$(NAME): 
	@$(CC) $(CFLAGS) -c $(SRCS) -I $(HDRS)
	@$(CC) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
