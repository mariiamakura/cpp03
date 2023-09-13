NAME = claptrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp
OBJS = $(patsubst %.cpp, obj/%.o, $(SRCS))

all : obj $(NAME)

obj :
	@mkdir -p obj

obj/%.o : %.cpp
	c++ $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(SRCS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -fr obj

fclean :
	rm -f $(NAME)

re : fclean all