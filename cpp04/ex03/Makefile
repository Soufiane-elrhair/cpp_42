# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 15:05:03 by selrhair          #+#    #+#              #
#    Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS = main.cpp MateriaSource.cpp Character.cpp  Ice.cpp Cure.cpp AMateria.cpp

OBJS = $(SRCS:.cpp=.o)
CXX	 = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: re
	./$(NAME)
