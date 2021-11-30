/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 23:52:44 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/30 23:52:48 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/* 생성자, 소멸자 */
Replace::Replace(char *argv[])
{
	_replace_name = argv[1];
	_replace_name += ".replace";
	_readfile.open(argv[1]);
	_replace.open(_replace_name);
	_s1 = argv[2];
	_s2 = argv[3];
}

Replace::~Replace() {
	_readfile.close();
	_replace.close();
}

/* Member function */
bool	Replace::open_file(void)
{
	if (!_readfile.is_open() || !_replace.is_open())
	{
		std::cout << "Error: Invalid file" << std::endl;
		return false;
	}
	return true;
}

void 	Replace::replace(void)
{
	while (!_readfile.eof())
	{
		std::string	str;

		std::getline(_readfile, str);
		if (!_readfile.eof())
			str += "\n";
		search_swap(str);
		_replace.write(str.c_str(), str.size());
	}
}

void	Replace::search_swap(std::string &str)
{
	int idx;

	while ((idx = str.find(_s1)) != std::string::npos)
	{
		std::string src;

		src = str.substr(0, idx);
		src += _s2;
		src += str.substr(idx + _s1.size());
		str = src;
	}
}
