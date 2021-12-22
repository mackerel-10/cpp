/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:47:58 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/22 15:20:40 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		// Orthodox Canonical Template
		ClapTrap(); // Default constructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & src); // Copy constructor
		virtual	~ClapTrap(); // Destructor
		ClapTrap & operator = (const ClapTrap & src); // Operator overload

		virtual	void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int		getdamage(void);
};

#endif