# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 21:32:05 by sujeon            #+#    #+#              #
#    Updated: 2021/11/30 21:32:06 by sujeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAG	=	-Wall -Wextra -Werror -std=c++98
NAME	=	replace
SRC		=	main.cpp	\
			Replace.cpp
OBJ		=	$(SRC:.cpp=.o)

#################################################
# 					COMAMND 				  	#
#################################################

all : $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAG) $^ -o $@

clean :
	rm -rf $(OBJ)
	rm -rf *.replace

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re