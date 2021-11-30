/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:54:54 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/01 00:54:55 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

std::string	Karen::level[4] =
{
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

/* 생성자, 소멸자 */
Karen::Karen()
{

}

Karen::~Karen()
{

}

/* Private member function */
void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!"
		<< std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough!"
		<< "If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

/* Public member function */
void	Karen::complain( std::string level )
{
	void	(Karen::*func_ptr[4])() =
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	for (int idx = 0; idx < 4; idx++)
	{
		if (level.find(this->level[idx]) != std::string::npos)
		{
			(this->*func_ptr[idx])();
			break;
		}
	}

}