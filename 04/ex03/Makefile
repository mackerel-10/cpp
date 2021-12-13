C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	materia
SRC		=	main.cpp		\
			AMateria.cpp	\
			Character.cpp	\
			Ice.cpp			\
			Cure.cpp		\
			MateriaSource.cpp
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