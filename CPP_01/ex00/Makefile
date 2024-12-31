# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 16:10:47 by hel-band          #+#    #+#              #
#    Updated: 2024/11/04 14:08:28 by hel-band         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = randomChump.cpp main.cpp Zombie.cpp newZombie.cpp
OBJ = $(SRC:.cpp=.o)
HEADER		= Zombie.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
