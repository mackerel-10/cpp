/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:36:21 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/29 22:27:23 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);	// 매개변수가 있는 생성자.
		Zombie();	// 기본 생성자
		~Zombie();	// 소멸자
		void	announce(void);

		// Setter
		void	setname(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif