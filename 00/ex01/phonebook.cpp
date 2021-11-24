/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:38 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/25 01:45:26 by sujeon           ###   ########.fr       */
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
	index = 0;
	amount = 0;
}

Phonebook::~Phonebook()
{
	// 소멸자
}

void	Phonebook::add_contact()
{
	std::cout << "index [" << index << "]" << std::endl;
	contact[index].get_input();
	if (index == 7)
		index = 0;
	else
		index++;
	if (amount < 8)
		amount++;
}

void	Phonebook::search_contact()
{
	// Show list
	for (int idx = 0; idx < 4; idx++)
	{
		std::cout << std::setfill (' ') << std::setw (10) << col[idx];
		std::cout << "|";
	}
	std::cout << std::endl;
	for (int idx = 0; idx < amount; idx++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << idx << "|";
		contact[idx].search_list();
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
	if (0 <= selected && selected < amount)
		contact[selected].selected_index();
	else
		std::cout << "Error: Wrong index" << std::endl;
}