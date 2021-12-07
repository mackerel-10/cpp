/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:01:15 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/07 16:36:36 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// 고정 소수, 부동 소수 이제 그만! 멈춰!
/*	- 비교 연산자(comparison operators): `>, <, >=, <=, ==, !=`
	- 산술 연산자(arithmetic operators): `+, -, *, /`
	- 단항 연산자(++, --) */

int	main( void ) {
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
		
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}