# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 00:40:53 by sujeon            #+#    #+#              #
#    Updated: 2021/12/08 18:32:11 by sujeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	karen
SRC		=	main.cpp	\
			Karen.cpp
OBJ		=	$(SRC:.cpp=.o)

################################################################################
# 									COMMAND 								   #
################################################################################

all : $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAG) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re