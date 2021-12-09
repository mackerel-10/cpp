/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:44:40 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/09 21:50:09 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	private:
		std::string _name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
		bool			_guard;

	public:
		/* Orthodox Canonical */
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap & src);
		virtual ~DiamondTrap();
		DiamondTrap & operator = (const DiamondTrap & src);

		virtual void	attack(std::string const & target);
		virtual void	guardGate(void);
		virtual void	highFivesGuys(void);
		void	whoAmI(void);

		void	displayinfo(void);
		
};

#endif