/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:54 by sujeon            #+#    #+#             */
/*   Updated: 2021/10/19 21:14:55 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	int	j;
	for (int i = 1; i < argc; i++) {
		j = 0;
		while (argv[i][j]) {
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
	}
	std::cout << std::endl;

	return 0;
}