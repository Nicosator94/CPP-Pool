/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:36:00 by niromano          #+#    #+#             */
/*   Updated: 2024/05/23 15:55:00 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

void converter(const std::string &s) {
	std::cout << "\033[32m" << "String use : \"" << "\033[0m" << s << "\033[32m" << "\"" << "\033[0m" << std::endl;
	ScalarConverter::convert(s);
}

int main(int ac, char **av) {
	if (ac > 1) {
		for (int i = 1; i < ac; i++) {
			converter(av[i]);
			if (i < ac - 1)
				std::cout << std::endl;
		}
	}
	else {
		converter("0.1");
		std::cout << std::endl;
		converter("0.1f");
	}
	return 0;
}