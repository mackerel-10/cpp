/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:07:01 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/29 22:20:55 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// 객체 배열 생성시에는 오직 매개 변수 없는 기본 생성자를 호출한다.
Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*zombie = new Zombie[N];	// N개만큼 객체 생성.
	
	// 생성된 객체 name 세팅.
	for (int idx = 0; idx < N; idx++)
		zombie[idx].setname(name);

	return zombie;
}