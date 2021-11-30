# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 00:40:53 by sujeon            #+#    #+#              #
#    Updated: 2021/12/01 00:40:54 by sujeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	karenFilter
SRC		=	main.cpp	\
			Karen.cpp
OBJ		=	$(SRC:.cpp=.o)

#################################################
# 					COMAMND 				  	#
#################################################

all : $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAG) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re