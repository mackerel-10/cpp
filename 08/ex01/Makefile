C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	ex01
SRC		=	main.cpp	\
			Span.cpp
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