/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:00:14 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/22 15:18:03 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap scavtrap1("John");
	ScavTrap scavtrap2("Alex");

	std::cout << std::endl;
	
	scavtrap1.attack("Alex");
	scavtrap2.takeDamage(scavtrap1.getdamage());
	scavtrap2.check_guard();

	std::cout << std::endl;

	scavtrap1.attack("Alex");
	scavtrap2.takeDamage(scavtrap1.getdamage());
	scavtrap2.check_guard();
	
	std::cout << std::endl;

	scavtrap1.attack("Alex");
	scavtrap2.takeDamage(scavtrap1.getdamage());
	scavtrap2.check_guard();
	
	std::cout << std::endl;

	scavtrap1.attack("Alex");
	scavtrap2.takeDamage(scavtrap1.getdamage());
	scavtrap2.check_guard();
	
	std::cout << std::endl;

	scavtrap1.attack("Alex");
	scavtrap2.takeDamage(scavtrap1.getdamage());
	scavtrap2.check_guard();
	
	std::cout << std::endl;
	
	return 0;
}