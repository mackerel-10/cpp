C		=	clang++
FLAG	=	-Wall -Wextra -Werror

NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	$(SRC:.cpp=.o)



all : $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAG) $^ -o $@

clean :
	rm $(OBJ)

fclean : clean
	rm $(NAME)

re : fclean all