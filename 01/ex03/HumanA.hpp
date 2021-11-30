/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:19:58 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/30 20:19:59 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	&_weapon;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);
};

#endif
