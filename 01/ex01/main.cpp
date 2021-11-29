/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:36:16 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/29 22:24:45 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int		N = 5;

	// zombie 객체 무리 생성.
	// zombieHorde: N개의 객체 동적 할당 후 반환.
	zombie = zombieHorde(N, "Brown");

	for (int idx = 0; idx < N; idx++)
		zombie[idx].announce();
	
	// zombie 객체 동적 할당 메모리 반환.
	delete [] zombie;
	
	return 0;
}