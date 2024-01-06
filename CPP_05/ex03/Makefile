NAME		= ex03

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

SRCS		= main.cpp Bureaucrat.cpp  RobotomyRequestForm.cpp AForm.cpp \
				PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS		= $(SRCS:.cpp=.o)
 
all: $(NAME)

$(NAME) : $(OBJS) 
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean:
	rm -f $(OBJS) *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all
