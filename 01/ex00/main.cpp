/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:03:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/29 20:54:08 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1("Brown");
	Zombie *zombie2;

	// 스택에 정적할당
	zombie1.announce();

	// 힙에 동적할당
	zombie2 = newZombie("Alex");
	zombie2->announce();

	// 스택에 정적할당
	randomChump("Tom");

	// 메모리 할당 해제
	delete zombie2;
	
	return 0;
}