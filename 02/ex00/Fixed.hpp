/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:57:09 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/06 20:56:58 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/*
	Orthodox canonical
	- Default constructor(기본 생성자)
	- Copy constructor(복사 생성자)
*/

class Fixed
{
	private:
		int	_fixed_point_value;
		static const int	_fractional_bit;
	
	public:
		Fixed();	// default constructor(기본 생성자)
		~Fixed();	// destructor(소멸자)
		Fixed(const Fixed &copy);	// copy constructor(복사 생성자)
		Fixed &operator = (const Fixed &copy);	// assignation operator overload(할당 연산자 오버로딩)
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif