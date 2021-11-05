/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:38 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/05 21:11:32 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Phonebook::col[6] = {
	"index",
	"first name",
	"last name",
	"nickname",
};

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
	std::cout << "index [" << this->index << "]" << std::endl;
	this->contact[this->index].get_input();
	if (this->index == 7)
		this->index = 0;
	else
		this->index++;
	if (this->amount < 8)
		this->amount++;
}

void	Phonebook::search_contact()
{
	// Show list
	for (int idx = 0; idx < 4; idx++)
	{
		std::cout << std::setfill (' ') << std::setw (10) << this->col[idx];
		std::cout << "|";
	}
	std::cout << std::endl;
	for (int idx = 0; idx < this->amount; idx++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << idx << "|";
		this->contact[idx].search_list();
		std::cout << std::endl;
	}

	// Select the index
	int	selected;
	std::cout << "Select index : ";
	std::cin >> selected;
	if (std::cin.fail())
	{
		std::cout << "Error: Wrong index" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return;
	}
	if (0 <= selected && selected < this->amount)
		this->contact[selected].selected_index();
	else
		std::cout << "Error: Wrong index" << std::endl;
}