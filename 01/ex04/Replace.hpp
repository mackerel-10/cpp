/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 23:49:08 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/30 23:49:09 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
	private:
		std::string		_replace_name;
		std::ifstream	_readfile;
		std::ofstream	_replace;
		std::string 	_s1;
		std::string 	_s2;

	public:
		Replace(char *argv[]);
		~Replace();
		bool	open_file(void);
		void 	replace(void);
		void	search_swap(std::string &str);
};

#endif
