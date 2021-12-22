/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:59:57 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/22 15:13:55 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	// ClapTrap 멤버 변수 접근 지정 private -> protected로 변경.
	// _name, _hitpoints, _energy_points, _attack_damage
	private:
		bool	_guard;
	
	public:
		ScavTrap();		// Default constructor
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src); // Copy constructor
		~ScavTrap();	// Destructor
		ScavTrap & operator = (const ScavTrap & src);	// Operator overload

		void	attack(std::string const & target);
		void	guardGate(void);

		void	check_guard(void);
};

#endif