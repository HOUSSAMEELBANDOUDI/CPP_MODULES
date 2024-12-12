# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 21:43:06 by hel-band          #+#    #+#              #
#    Updated: 2024/12/07 23:49:21 by hel-band         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC     = c++
FLAGS  = -Wall -Wextra -Werror -std=c++98

# Header files
HEADER = AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp Character.hpp \
         MateriaSource.hpp IMateriaSource.hpp

# Executable name
NAME   = materia

# Source files and object files
SRCS   = AMateria.cpp \
         Cure.cpp \
         Ice.cpp \
         Character.cpp \
         MateriaSource.cpp \
         main.cpp

OBJS   = $(SRCS:.cpp=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


