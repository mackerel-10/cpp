/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:59:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/24 20:48:01 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private :
		static std::string	field[5];
		std::string			input[5];

	public :
		Contact();
		~Contact();
		void	get_input();
		void	search_list();
		void	selected_index();
};

#endif