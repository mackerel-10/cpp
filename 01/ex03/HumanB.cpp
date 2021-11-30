/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:08:59 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/30 21:09:00 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* 생성자, 소멸자 */
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}

HumanB::~HumanB()
{

}

// weapon address = &weapon = *_weapon
void 	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void 	HumanB::attack(void)
{
	std::cout << _name << " attacks with his ";
	if (!_weapon)
		std::cout << "fist";
	else
		std::cout << _weapon->getType();
	std::cout << std::endl;
}