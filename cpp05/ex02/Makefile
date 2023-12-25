# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 14:45:42 by selrhair          #+#    #+#              #
#    Updated: 2023/12/21 20:53:41 by selrhair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= ex02

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp Bureaucrat.cpp  RobotomyRequestForm.cpp AForm.cpp  \
				PresidentialPardonForm.cpp ShrubberyCreationForm.cpp

OBJS		= $(SRCS:.cpp=.o)
 
all: $(OBJS) 
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean:
	rm -f $(OBJS) *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all
