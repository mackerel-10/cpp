/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:09:27 by sujeon            #+#    #+#             */
/*   Updated: 2021/10/21 18:08:20 by sujeon           ###   ########.fr       */
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
	for (int i = 0; i < 5; i++)
	{
		std::cout << "[" << i + 1 << "] " << field[i] << " : ";
		std::getline(std::cin, this->input[i]);
	}
}

void	Contact::show_list()
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << std::setfill ('.') << std::setw (10);
		std::cout << this->input[i] << "|";
	}
}
