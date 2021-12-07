/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:57:05 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/07 16:23:00 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// 항상 8로 고정
const int Fixed::_fractional_bit = 8;

/* 생성자, 소멸자, 복사 연산자, 할당 연산자 오버로딩*/
// constructor(생성자)
Fixed::Fixed(){
	_fixed_point_value = 0;
}

// destructor(소멸자)
Fixed::~Fixed(){

}

// copy constructor(복사 생성자)
Fixed::Fixed(const Fixed &object){
	*this = object;
}

// assignation operator overload(할당 연산자 오버로딩)
// 객체 = 객체
Fixed & Fixed::operator = (const Fixed &object){
	_fixed_point_value = object.getRawBits();
	return *this;
}

/* Public */
// ex00
int Fixed::getRawBits(void) const{
	return _fixed_point_value;
}

void Fixed::setRawBits(int const raw){
	_fixed_point_value = raw;
}

// ex01
Fixed::Fixed(const int value){
	_fixed_point_value = value << _fractional_bit;
}

Fixed::Fixed(const float value){
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

// ex02
// Comparison operator
bool	Fixed::operator > (const Fixed & object) const {
	return (_fixed_point_value > object.getRawBits());
}
bool	Fixed::operator < (const Fixed & object) const {
	return (_fixed_point_value < object.getRawBits());
}
bool	Fixed::operator >= (const Fixed & object){
	return (_fixed_point_value >= object.getRawBits());
}
bool	Fixed::operator <= (const Fixed & object){
	return (_fixed_point_value <= object.getRawBits());
}
bool	Fixed::operator == (const Fixed & object){
	return (_fixed_point_value == object.getRawBits());
}
bool	Fixed::operator != (const Fixed & object){
	return (_fixed_point_value != object.getRawBits());
}

// Arithmetic operator
Fixed	Fixed::operator + (const Fixed & object){
	return Fixed(this->toFloat() + object.toFloat());
}
Fixed	Fixed::operator - (const Fixed & object){
	return Fixed(this->toFloat() - object.toFloat());
}
Fixed	Fixed::operator * (const Fixed & object){
	return Fixed(this->toFloat() * object.toFloat());
}
Fixed 	Fixed::operator / (const Fixed & object){
	return Fixed(this->toFloat() / object.toFloat());
}

// pre/post-increment/decrement
Fixed & Fixed::operator ++ (){
	_fixed_point_value++;
	return *this;
}
Fixed	Fixed::operator ++ (int x){
	Fixed tmp(*this); // 복사 연산자

	_fixed_point_value++;
	return tmp;	// 증가 이전의 객체를 반환.
}
Fixed & Fixed::operator -- (){
	_fixed_point_value--;
	return *this;
}
Fixed	Fixed::operator -- (int x){
	Fixed tmp(*this);

	_fixed_point_value--;
	return tmp;
}

// min, max
Fixed & Fixed::min(Fixed & fixed1, Fixed & fixed2){
	if (fixed1 < fixed2)
		return fixed1;
	else
		return fixed2;
}
const Fixed & Fixed::min(const Fixed & fixed1, const Fixed & fixed2) {
	if (fixed1 < fixed2)
		return fixed1;
	else
		return fixed2;
}
Fixed & Fixed::max(Fixed & fixed1, Fixed & fixed2){
	if (fixed1 > fixed2)
		return fixed1;
	else
		return fixed2;
}
const Fixed & Fixed::max(const Fixed & fixed1, const Fixed & fixed2) {
	if (fixed1 > fixed2)
		return fixed1;
	else
		return fixed2;
}