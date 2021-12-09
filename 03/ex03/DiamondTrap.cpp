/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:44:22 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/09 21:57:31 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamodTrap Default constructor called" << std::endl;
	ClapTrap::_name += "_clap_name";
	_hitpoints = FragTrap::_hitpoints;	// 100
	_energy_points = ScavTrap::_energy_points; // 50
	_attack_damage = FragTrap::_attack_damage; // 30
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name) {
	std::cout << "DiamodTrap Constructor called" << std::endl;
	_name = name;
	ClapTrap::_name += "_clap_name";
	_hitpoints = FragTrap::_hitpoints;	// 100
	_energy_points = ScavTrap::_energy_points; // 50
	_attack_damage = FragTrap::_attack_damage; // 30
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & src) {
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	ClapTrap::operator = (src);
	return *this;
}

// Public
void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::guardGate(void) {
	ScavTrap::guardGate();
}
void	DiamondTrap::highFivesGuys(void) {
	FragTrap::highFivesGuys();
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap: " << _name
		<< " ClapTrap: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::displayinfo(void) {
	std::cout << "hitpoints: " << _hitpoints
		<< " energy points: " << _energy_points
		<< " attack damage: " << _attack_damage << std::endl;
}

