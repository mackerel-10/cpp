/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:41 by sujeon            #+#    #+#             */
/*   Updated: 2021/10/21 18:00:16 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;

	while (true) {
		std::getline(std::cin, input);
	
		if (input == "ADD") {
			phonebook.add_contact();
		}
		else if (input == "SEARCH") {
			phonebook.search_contact();
		} 
		else if (input == "EXIT")
			break;
	}

	return 0;
}