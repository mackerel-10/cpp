/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:47:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/09 00:14:01 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Orthodox Canonical */
ClapTrap::ClapTrap(){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	_name = "Default";
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap Constructor called" << std::endl;
	_name = name;
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap & src){
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & src){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	_name = src._name;
	_hitpoints = src._hitpoints;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;
	return *this;
}

/* Public */
void	ClapTrap::attack(std::string const & target){
	std::cout << "ClapTrap <" << _name << "> attacks <" << target
		<< ">, causing <" << _attack_damage << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap <" << _name << "> has taken <" << amount
		<< "> damage" << std::endl;
	_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap <" << _name << "> has been repaired <"
		<< amount << ">" << std::endl;
	_hitpoints += amount;
}

int		ClapTrap::getdamage(void) {
	return _attack_damage;
}