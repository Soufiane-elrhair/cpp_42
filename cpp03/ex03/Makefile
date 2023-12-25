# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 15:14:18 by hamza             #+#    #+#              #
#    Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= diamond

CXX		= c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: re
	./$(NAME)

