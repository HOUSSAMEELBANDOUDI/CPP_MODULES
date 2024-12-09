# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 11:35:52 by hel-band          #+#    #+#              #
#    Updated: 2024/11/04 10:25:22 by hel-band         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Account
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR		= .objFiles

FILES		= test Account

SRC			= $(FILES:=.cpp)
OBJ			= $(OBJDIR)/test.o $(OBJDIR)/Account.o
HEADER		= Account.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(FLAGS) -o $(NAME)
	@echo "- Executable ready."

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR)
	@echo "    - Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "    - Executable removed."

re: fclean all

.PHONY: all clean fclean re
