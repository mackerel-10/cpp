/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:38 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/04 18:05:46 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	// 생성자
	this->index = 0;
	this->amount = 0;
}

Phonebook::~Phonebook()
{
	// 소멸자
}

void	Phonebook::add_contact()
{
	this->contact[this->index].get_input();
	if (this->index == 8)
		this->index = 0;
	else
		this->index++;
	if (this->amount < 8)
		this->amount++;
	std::cout << this->index << std::endl;
}

std::string	Phonebook::search_col[4] = {
	"index",
	"first name",
	"last name",
	"nickname"
};

void	Phonebook::search_contact()
{
	for (int index = 0; index < 4; index++)
	{
		std::cout << std::setfill (' ') << std::setw (10) << this->search_col[index];
		std::cout << "|";
	}
	std::cout << std::endl;

	for (int index = 0; index < this->amount; index++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << index << "|";
		this->contact[index].show_list();
		std::cout << std::endl;
	}
}