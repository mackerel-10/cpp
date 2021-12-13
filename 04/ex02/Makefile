C		=	clang++
FLAG	=	-Wall -Wextra -Werror
NAME	=	animal
SRC		=	main.cpp		\
			Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			Brain.cpp
OBJ		=	$(SRC:.cpp=.o)



all : $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAG) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re