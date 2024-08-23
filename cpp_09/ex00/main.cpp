/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:09 by niromano          #+#    #+#             */
/*   Updated: 2024/08/23 14:22:08 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	try {
		if (ac != 2)
			throw Error("Error: could not open file.");
		std::map<int, float> data = getData("data.csv");
		std::ifstream inputData(av[1]);
		if (!inputData.is_open())
			throw Error("Error: could not open file.");
		std::string line;
		std::getline(inputData, line, '\n');
		if (line != "date | value") {
			inputData.close();
			throw Error("Error: missing first line to define data !");
		}
		while (std::getline(inputData, line, '\n')) {
			try {
				std::string result = bitcoinExchange(line, data);
				std::cout << result << std::endl;
			}
			catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		inputData.close();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}