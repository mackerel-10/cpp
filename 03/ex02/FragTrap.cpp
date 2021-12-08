/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:36:55 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/09 01:20:13 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Orthodox canonical */
FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
} // Constructor

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap Constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap & src) {
	std::cout << "FragTrap Constructor called" << std::endl;
	*this = src;
} // Copy constructor

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
} // Destructor
		
FragTrap & FragTrap::operator = (const FragTrap & src) {
	std::cout << "FragTrap Assignation operator called" << std::endl;
	ClapTrap::operator = (src);
	return *this;
} // Operator overloading

/* Subject */
void	FragTrap::highFivesGuys(void) {
	std::cout << "HIGH FIVES GUYS !!!!!!!!!" << std::endl;
}