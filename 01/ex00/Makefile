# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 19:24:38 by sujeon            #+#    #+#              #
#    Updated: 2021/11/29 20:46:24 by sujeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98

NAME	=	zombie
SRC		=	main.cpp		\
			Zombie.cpp		\
			newZombie.cpp	\
			randomChump.cpp
OBJ		=	$(SRC:.cpp=.o)

#################################################
# 					COMAMND 				  	#
#################################################

all: $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAG) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re