C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	bureaucrat
SRC		=	main.cpp					\
			Bureaucrat.cpp				\
			Form.cpp					\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp
OBJ		=	$(SRC:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAG) $^ -o $@

clean :
	rm -rf $(OBJ)
	rm -rf *_shrubbery

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re