/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:19:48 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/30 20:19:50 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* 생성자, 소멸자 */
// _weapon은 레퍼런스 변수이기에 초기화 리스트에서 초기화를 진행해줘야 한다.
// 생성자에서 초기화를 진행할 경우, 초기화가 선언과 동시에 이루어지지 않았다는 에러메시지가 나오게 된다.
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{

}

void 	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}



