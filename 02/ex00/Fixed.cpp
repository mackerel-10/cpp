/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:57:05 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/06 20:56:44 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bit = 8;

/* 생성자, 복사 연산자,  */
Fixed::Fixed()
{
	_fixed_point_value = 0;
}

Fixed::~Fixed()
{
	
}

Fixed(const Fixed &copy);	// copy constructor(복사 생성자)
Fixed &operator = (const Fixed &copy);	// assignation operator overload(할당 연산자 오버로딩)
		int getRawBits(void) const;
		void setRawBits(int const raw);

