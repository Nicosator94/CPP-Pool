/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:35 by niromano          #+#    #+#             */
/*   Updated: 2024/08/21 17:44:30 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// bool isValidDate(const std::string &date) {
// 	struct tm timePtr;
// 	if (strptime(date.c_str(), "%Y-%m-%d", &timePtr) == NULL)
// 		return false;
// 	std::cout << timePtr.tm_mday << std::endl;
// 	return true;
// }

std::map<std::string, float> getData() {
	std::ifstream dataFd("data.csv");
	if (!dataFd.is_open())
		throw Error("Failed to open \"data.csv\" !");
	std::map<std::string, float> data;
	std::string buf;
	std::getline(dataFd, buf, '\n');
	while (std::getline(dataFd, buf, '\n')) {
		size_t find = buf.find(",");
		if (find == std::string::npos) {
			dataFd.close();
			throw Error("Missing ',' in \"data.csv\" !");
		}
		// if (!isValidDate(buf.substr(0, find)))
		// 	std::cout << "pas cool" << std::endl;
		char *endPtr;
		data.insert(std::make_pair(buf.substr(0, find), strtof(buf.substr(find + 1, buf.size() - find).c_str(), &endPtr)));
		std::string end = endPtr;
		if (!end.empty())
			throw Error("Incorrect number in \"data.csv\" !");
	}
	dataFd.close();
	return data;
}