/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:38:13 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/22 15:21:22 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ClapTrap	claptrap("John");
	ScavTrap	scavtrap("Jack");
	FragTrap	fragtrap("Alex");
	DiamondTrap	diamondtrap("Dimitri");
	
	std::cout << std::endl;
	
	claptrap.attack("Jack");
	scavtrap.attack("John");
	
	std::cout << std::endl;
	
	fragtrap.highFivesGuys();

	std::cout << std::endl;

	diamondtrap.attack("John");
	diamondtrap.whoAmI();
	diamondtrap.displayinfo();

	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();

	std::cout << std::endl;

	return 0;
}