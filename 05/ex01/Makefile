C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	bureaucrat
SRC		=	main.cpp		\
			Bureaucrat.cpp	\
			Form.cpp
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