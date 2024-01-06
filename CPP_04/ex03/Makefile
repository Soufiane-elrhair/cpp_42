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
