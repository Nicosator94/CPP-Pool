/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:09 by niromano          #+#    #+#             */
/*   Updated: 2024/08/21 17:37:39 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Only 1 argument is required !" << std::endl;
		return 1;
	}
	try {
		std::map<std::string, float> data = getData();
		// for (std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++)
		// 	std::cout << it->first << " = " << it->second << std::endl;
		(void)av;
		// std::ifstream file(av[1]);
		// std::string buf;
		// while (std::getline(file, buf, '\n')) {
		// 	std::cout << buf << std::endl;
		// }
		// file.close();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}