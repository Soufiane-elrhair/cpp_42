Name = Weapon
CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(Name)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(Name)

re: fclean all

.PHONY: all clean fclean re
