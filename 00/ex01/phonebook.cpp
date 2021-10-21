/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:38 by sujeon            #+#    #+#             */
/*   Updated: 2021/10/21 18:00:52 by sujeon           ###   ########.fr       */
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

void	Phonebook::search_contact()
{
	for (int i = 0; i < this->amount; i++)
	{
		std::cout << "[" << i << "] ";
		this->contact[i].show_list();
		std::cout << std::endl;
	}
}