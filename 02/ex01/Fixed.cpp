/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:57:05 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/06 23:24:05 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// 항상 8로 고정
const int Fixed::_fractional_bit = 8;

/* 생성자, 소멸자, 복사 연산자, 할당 연산자 오버로딩*/
// constructor(생성자)
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_fixed_point_value = 0;
}

// destructor(소멸자)
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

// copy constructor(복사 생성자)
Fixed::Fixed(const Fixed &object){
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
	// _fixed_point_value = object._fixed_point_value;
}

// assignation operator overload(할당 연산자 오버로딩)
// 객체 = 객체
Fixed & Fixed::operator = (const Fixed &object){
	std::cout << "Assignation member function called" << std::endl;
	_fixed_point_value = object.getRawBits();
	return *this;
}

/* Public */
int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point_value;
}

void Fixed::setRawBits(int const raw){
	_fixed_point_value = raw;
}

