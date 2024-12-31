# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 12:46:02 by hel-band          #+#    #+#              #
#    Updated: 2024/11/04 16:34:44 by hel-band         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Harl.hpp
TARGET = harlFilter

all: $(TARGET)

$(TARGET): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)

fclean: clean

re: fclean all