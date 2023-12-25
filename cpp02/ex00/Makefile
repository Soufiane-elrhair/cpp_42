Name = a.out

CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror

SRC			= main.cpp Fixed.cpp

OBJ			= $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(Name)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(Name)

re: fclean all
