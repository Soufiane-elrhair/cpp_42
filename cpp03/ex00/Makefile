NAME	= clap

CXX		= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
