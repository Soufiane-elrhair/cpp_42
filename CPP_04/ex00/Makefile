NAME			= ex00

CXX				= c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

SRCS			= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

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
