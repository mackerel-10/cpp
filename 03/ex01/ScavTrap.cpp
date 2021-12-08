/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:59:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/09 00:22:29 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Orthodox canonical */
ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_guard = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap Constructor called" << std::endl;
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
	_name = src._name;
	_hitpoints = src._hitpoints;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;
	_guard = src._guard;
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

