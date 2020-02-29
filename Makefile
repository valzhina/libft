# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 11:23:33 by vpiskun           #+#    #+#              #
#    Updated: 2020/02/28 16:16:43 by vpiskun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

FILES = *.c
OBJECTS = *.o
HEADERS = *.h

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -I$(HEADERS) -c $(FILES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re
