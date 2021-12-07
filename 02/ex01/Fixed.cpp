/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:57:05 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/07 12:14:54 by sujeon           ###   ########.fr       */
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
}

// assignation operator overload(할당 연산자 오버로딩)
// 객체 = 객체
Fixed & Fixed::operator = (const Fixed &src){
	std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = src.getRawBits();
	return *this;
}

/* Public */
int Fixed::getRawBits(void) const{
	return _fixed_point_value;
}

void Fixed::setRawBits(int const raw){
	_fixed_point_value = raw;
}

/* ex01 */
Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_value = value << _fractional_bit;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	_fixed_point_value = roundf(value * (1 << _fractional_bit));
}

float	Fixed::toFloat(void) const{
	return (float)_fixed_point_value / (1 << _fractional_bit);
}

int		Fixed::toInt(void) const{
	return _fixed_point_value >> _fractional_bit;
}

// <<: 오른쪽 피연산자 데이터를 왼쪽 스트림 객체에 삽입한다.
std::ostream & operator << (std::ostream &os, const Fixed &src){
	os << src.toFloat();
	return os;
}
