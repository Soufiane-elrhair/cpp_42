# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 11:15:42 by selrhair          #+#    #+#              #
#    Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ex01 
CXX				= c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

SRCS			= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS			= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

run : all
	./$(NAME)
