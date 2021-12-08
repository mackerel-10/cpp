/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:47:01 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/08 17:47:15 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	claptrap1("John");
	ClapTrap	claptrap2("Alex");

	claptrap1.attack("Alex");
	claptrap2.takeDamage(claptrap1.getdamage());
	claptrap2.beRepaired(20);
	return 0;
}