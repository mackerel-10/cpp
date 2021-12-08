/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:59:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/09 01:21:40 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Orthodox canonical */
ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guard = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap Constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guard = false;
}

ScavTrap::ScavTrap(const ScavTrap & src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
} // Copy constructor

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
} // Destructor

ScavTrap & ScavTrap::operator = (const ScavTrap & src) {
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	ClapTrap::operator = (src);
	return *this;
} // Operator overload

/* Public */
void	ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap <" << _name << "> attacks <" << target
		<< ">, causing <" << _attack_damage << "> points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap <" << _name << "> has entered in Guardgate" << std::endl;
	_guard = true;
}

void	ScavTrap::check_guard(void) {
	if (!_hitpoints && _guard == false)
		guardGate();
}

