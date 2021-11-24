/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:09:27 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/25 01:44:40 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	Contact::field[5] = {
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

Contact::Contact()
{
	// 생성자
}

Contact::~Contact()
{
	// 소멸자
}

void	Contact::get_input()
{
	for (int idx = 0; idx < 5; idx++)
	{
		std::cout << "[" << idx + 1 << "] " << field[idx] << " : ";
		std::getline(std::cin, input[idx]);
	}
}

void	Contact::search_list()
{
	for (int idx = 0; idx < 3; idx++)
	{
		if (input[idx].length() > 10)
		{
			std::string	truncated;
			truncated = input[idx].substr(0, 9);	// substr(indes, str_length)
			std::cout << truncated << ".";
		}
		else
		{
			std::cout << std::setfill (' ') << std::setw (10);
			std::cout << input[idx];
		}
		std::cout << "|";
	}
}

void	Contact::selected_index()
{
	for (int idx = 0; idx < 5; idx++)
	{
		std::cout << "[" << idx + 1 << "] " << field[idx] << " : ";
		std::cout << input[idx] << std::endl;
	}
}
