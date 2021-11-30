# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 17:41:08 by sujeon            #+#    #+#              #
#    Updated: 2021/11/30 17:41:09 by sujeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	start
SRC		=	main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp
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