/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:09 by niromano          #+#    #+#             */
/*   Updated: 2024/06/12 16:24:59 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2)
		return 1;
	std::ifstream file(av[1]);
	std::string buf;
	while (std::getline(file, buf, '\n')) {
		std::cout << buf << std::endl;
	}
	file.close();
	return 0;
}