/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:35 by niromano          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:38 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string ftostr(float nb) {
	std::stringstream ss;
	std::string str;
	ss << nb;
	ss >> str;
	return str;
}

int actualYear() {
	time_t actualTime = time(NULL);
	struct tm *actualYear = localtime(&actualTime);
	return 1900 + actualYear->tm_year;
}

bool isDigit(const std::string &str) {
	for (size_t i = 0; i < str.size(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

size_t isValidDate(int year, int month, int day) {
	if (year < 1970 || year > actualYear())
		return false;
	if (month < 1 || month > 12)
		return false;
	int dayOfFeb = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
	int dayTab[12] = {31, dayOfFeb, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31};
	if (day < 1 || day > dayTab[month - 1])
		return false;
	return true;
}

int getDaybyDate(int year, int month, int day) {
	int totalOfDay = 0;
	for (int i = 1970; i < year; i++) {
		totalOfDay += 337;
		int dayOfFeb = ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) ? 29 : 28;
		totalOfDay += dayOfFeb;
	}
	int dayOfFeb = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
	int dayTab[12] = {31, dayOfFeb, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31};
	for (int i = 0; i < month - 1; i++)
		totalOfDay += dayTab[i];
	totalOfDay += day;
	return totalOfDay;
}

int getDate(const std::string &date) {
	size_t find = date.find("-");
	if (find == std::string::npos)
		throw Error("Error: invalid date.");
	std::string yearStr = date.substr(0, find);
	std::string tmp = date.substr(find + 1, date.size());
	find = tmp.find("-");
	if (find == std::string::npos)
		throw Error("Error: invalid date.");
	std::string monthStr = tmp.substr(0, find);
	std::string dayStr = tmp.substr(find + 1, tmp.size());
	if (yearStr.size() != 4 || monthStr.size() != 2 || dayStr.size() != 2)
		throw Error("Error: invalid date.");
	int year = 0, month = 0, day = 0;
	if (isDigit(yearStr))
		year = atoi(yearStr.c_str());
	if (isDigit(monthStr))
		month = atoi(monthStr.c_str());
	if (isDigit(dayStr))
		day = atoi(dayStr.c_str());
	if (year == 0 || month == 0 || day == 0)
		throw Error("Error: invalid date.");
	if (!isValidDate(year, month, day))
		throw Error("Error: invalid date.");
	return getDaybyDate(year, month, day);
}

std::map<int, float> getData(const std::string &file) {
	std::ifstream dataFd(file.c_str());
	if (!dataFd.is_open())
		throw Error("Error: could not open file.");
	std::map<int, float> data;
	std::string buf;
	std::getline(dataFd, buf, '\n');
	if (buf != "date,exchange_rate") {
		dataFd.close();
		throw Error("Error: missing first line to define data.");
	}
	while (std::getline(dataFd, buf, '\n')) {
		size_t find = buf.find(",");
		if (find == std::string::npos) {
			dataFd.close();
			throw Error("Error: missing ',' in \"" + file + "\".");
		}
		int timeOfYMD = getDate(buf.substr(0, find));
		char *endPtr;
		data.insert(std::make_pair(timeOfYMD, strtof(buf.substr(find + 1, buf.size() - find).c_str(), &endPtr)));
		std::string end = endPtr;
		if (!end.empty()) {
			dataFd.close();
			throw Error("Error: incorrect number in \"" + file + "\".");
		}
	}
	dataFd.close();
	return data;
}

std::string bitcoinExchange(const std::string &line, std::map<int, float> data) {
	size_t find = line.find(" | ");
	if (find == std::string::npos)
		throw Error("Error: bad input => " + line);
	int date = getDate(line.substr(0, find));
	char *endPtr;
	float value = strtof(line.substr(find + 3, line.size() - find).c_str(), &endPtr);
	std::string end = endPtr;
	if (!end.empty())
		throw Error("Error: bad number => " + line.substr(find + 3, line.size() - find));
	if (value < 0)
		throw Error("Error: not a positive number.");
	if (value > 1000)
		throw Error("Error: too large a number.");
	float multiplicator;
	for (std::map<int, float>::iterator it = data.begin(); it != data.end() || date < it->first; it++) {
		if (date >= it->first)
			multiplicator = it->second;
	}
	std::string result = line.substr(0, find) + " => " + line.substr(find + 3, line.size() - find) + " = " + ftostr(value * multiplicator);
	return result;
}