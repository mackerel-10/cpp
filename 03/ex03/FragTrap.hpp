/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:37:12 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/09 00:49:07 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		/* Orthodox canonical */
		FragTrap();	// Constructor
		FragTrap(std::string name);
		FragTrap(const FragTrap & src); // Copy constructor
		~FragTrap(); // Destructor
		FragTrap & operator = (const FragTrap & src); // Operator overloading

		/* Subject */
		void	highFivesGuys(void);
};

#endif