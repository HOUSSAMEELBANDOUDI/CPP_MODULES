# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 18:22:17 by hel-band          #+#    #+#              #
#    Updated: 2024/11/04 15:22:09 by hel-band         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
NAME = program

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
