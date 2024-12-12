# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 17:51:43 by hel-band          #+#    #+#              #
#    Updated: 2024/11/20 18:00:03 by hel-band         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRCS = main.cpp Fixed.cpp Point.cpp bsb.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Fixed.hpp Point.hpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
