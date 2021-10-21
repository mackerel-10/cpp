/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:36 by sujeon            #+#    #+#             */
/*   Updated: 2021/10/21 17:59:11 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class Phonebook
{
	private:
		int		index;
		int		amount;
		Contact	contact[8];

	public:
		Phonebook();
		~Phonebook();
		void	add_contact();
		void	search_contact();
};

#endif