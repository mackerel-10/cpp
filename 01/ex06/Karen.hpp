/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:55:02 by sujeon            #+#    #+#             */
/*   Updated: 2021/12/01 00:55:03 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		static	std::string	level[4];

	public:
		Karen();
		~Karen();
		void	complain( std::string level );
};

#endif
