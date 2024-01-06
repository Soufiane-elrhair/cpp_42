NAME= zombie
CXX=c++
FLAGS= -Wall -Wextra -Werror -std=c++98
SRC=  main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

