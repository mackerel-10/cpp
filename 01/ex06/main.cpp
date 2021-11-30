/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:08:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/01 01:08:45 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen	karen;
	std::string	level;

	if (argc != 2)
	{
		std::cout << "Error: Arguments" << std::endl;
		return 1;
	}

	level = argv[1];
	karen.complain(level);
}
