/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:08:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/13 15:47:29 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen	karen;

	std::cout << "[ DEBUG ]" << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "[ INFO ]" << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;

	std::cout << "[ WARNING ]" << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;

	std::cout << "[ ERROR ]" << std::endl;
	karen.complain("ERROR");
	std::cout << std::endl;

	// Error check
	karen.complain("hello");
	karen.complain("0000");
}
