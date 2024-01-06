NAME	= megaphone

CXX 		= c++ 
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f


all: $(NAME)

SRCS	= megaphone.cpp

OBJS	=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@
clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all
