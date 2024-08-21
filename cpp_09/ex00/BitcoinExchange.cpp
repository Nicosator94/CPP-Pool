/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:35 by niromano          #+#    #+#             */
/*   Updated: 2024/08/21 16:32:07 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> getData() {
	std::ifstream dataFd("data.csv");
	if (!dataFd.is_open())
		throw Error("Failed to open \"data.csv\" !");
	std::map<std::string, float> data;
	std::string buf;
	std::getline(dataFd, buf, '\n');
	struct tm timePtr;
	while (std::getline(dataFd, buf, '\n')) {
		size_t find = buf.find(",");
		if (find == std::string::npos) {
			dataFd.close();
			throw Error("Missing ',' in \"data.csv\" !");
		}
		std::cout << buf.substr(0, find).c_str() << std::endl;
		strptime(buf.substr(0, find).c_str(), "%Y-%m-%d", &timePtr);
		std::cout << mktime(&timePtr) << std::endl;
		char *endPtr;
		data.insert(std::make_pair(buf.substr(0, find), strtof(buf.substr(find + 1, buf.size() - find).c_str(), &endPtr)));
		std::string end = endPtr;
		if (!end.empty())
			throw Error("Incorrect number in \"data.csv\" !");
	}
	dataFd.close();
	return data;
}