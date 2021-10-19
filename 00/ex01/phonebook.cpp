/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:38 by sujeon            #+#    #+#             */
/*   Updated: 2021/10/19 21:46:56 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Phonebook::field[] = {
		"first name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
	};

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add_contact()
{
	for (int i = 0; i < 5; i++)
		std::cout << this->field[i] << std::endl;	
	if (this->index == 8)
		this->index = 0;
	this->index++;
	std::cout << this->index << std::endl;
}