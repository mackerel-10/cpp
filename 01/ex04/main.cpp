/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:32:12 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/30 21:32:13 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: Not enough arguments" << std::endl;
		return 1;
	}

	Replace replace(argv);

	if (!replace.open_file())
		return 1;
	replace.replace();

	return 0;
}
