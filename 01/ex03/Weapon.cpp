/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:40:07 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/30 17:40:09 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* 생성자, 소멸자 */
Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{

}

/* 멤버 함수 */
const std::string	&Weapon::getType()
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

