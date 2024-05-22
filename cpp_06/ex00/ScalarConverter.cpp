/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:37:25 by niromano          #+#    #+#             */
/*   Updated: 2024/05/22 16:01:29 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include "ScalarConverter.hpp"

static int check_exception(const std::string &s) {
	std::string exception[8] = { "inff", "inf", "+inff", "+inf", "-inff", "-inf", "nanf", "nan" };
	int i = 0;
	while (exception[i] != s) {
		i ++;
		if (i == 8)
			break;
	}
	if (i < 4)
		return POS_INF;
	else if (i < 6)
		return NEG_INF;
	else if (i < 8)
		return NAN;
	return -1;
}

static int check_type(const std::string &s) {
	int i = check_exception(s);
	if (i != -1)
		return i;
	if (s.length() == 1)
		return CHAR;
	int p = 0;
	for (unsigned int i = 0; i < s.length(); i++) {
		if (i == 0 && s[i] == '-') {}
		else if (s[i] == '.') {
			p++;
			if (s[0] == '.' || (s[0] == '-' && s[1] == '.') || (s[i] == '.' && (i == s.length() - 1 || s[i + 1] == 'f')) || p > 1)
				return -1;
		}
		else if (i == s.length() - 1 && s[i] == 'f')
			return FLOAT;
		else if (i == s.length() - 1 && p == 1 && isdigit(static_cast <int> (s[i])))
			return DOUBLE;
		else if (!isdigit(s[i]))
			return -1;
	}
	return INT;
}

static void print_base_char(const std::string &s) {
	std::cout << "char: \'" << s[0] << "\'" << std::endl;
	std::cout << "int: " << static_cast <int> (s[0]) << std::endl;
	std::cout << "float: " << static_cast <float> (s[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast <double> (s[0]) << ".0" << std::endl;
}

static bool isoverflow(const std::string &s) {
	if ((s[0] == '-' && s.length() > 11) || (s[0] != '-' && s.length() > 10))
		return true;
	int nb = atoi(s.c_str());
	if (s[0] == '-' && nb > 0)
		return true;
	else if (s[0] != '-' && nb < 0)
		return true;
	if ((s[0] == '-' && s.length() == 11 && s[1] > '2') || (s[0] != '-' && s.length() == 10 && s[0] > '2'))
		return true;
	return false;
}

static void print_base_int(const std::string &s) {
	bool overflow = isoverflow(s);
	int nb = atoi(s.c_str());
	if (overflow == true)
		std::cout << "char: impossible" << std::endl;
	else if (nb >= 32 && nb <= 126)
		std::cout << "char: \'" << static_cast <char> (nb) << "\'" << std::endl;
	else if (nb >= 0 && nb <= 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (overflow == false)
		std::cout << "int: " << nb << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << strtof(s.c_str(), NULL) << ".0f" << std::endl;
	std::cout << "double: " << strtod(s.c_str(), NULL) << ".0" << std::endl;
}

static void print_base_float(const std::string &s) {
	float nb = strtof(s.c_str(), NULL);
	if (nb >= 32 && nb <= 126)
		std::cout << "char: \'" << static_cast <char> (nb) << "\'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast <int> (nb) << std::endl;
	if (static_cast <int> (nb) == nb) {
		std::cout << "float: " << nb << ".0f" << std::endl;
		std::cout << "double: " << static_cast <double> (nb) << ".0" << std::endl;
	}
	else {
		std::cout << "float: " << nb << "f" << std::endl;
		std::cout << "double: " << static_cast <double> (nb) << std::endl;
	}
}

static void print_base_double(const std::string &s) {
	double nb = strtod(s.c_str(), NULL);
	if (nb >= 32 && nb <= 126)
		std::cout << "char: \'" << static_cast <char> (nb) << "\'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast <int> (nb) << std::endl;
	if (static_cast <int> (nb) == nb) {
		std::cout << "float: " << static_cast <float> (nb) << ".0f" << std::endl;
		std::cout << "double: " << nb << ".0" << std::endl;
	}
	else {
		std::cout << "float: " << static_cast <float> (nb) << "f" << std::endl;
		std::cout << "double: " << nb << std::endl;
	}
}

static void print_base_exception(int e) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (e == POS_INF) {
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (e == NEG_INF) {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (e == NAN) {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void ScalarConverter::convert(const std::string &s) {
	switch (check_type(s)) {
		case CHAR :
			print_base_char(s);
			break;
		case INT :
			print_base_int(s);
			break;
		case FLOAT :
			print_base_float(s);
			break;
		case DOUBLE :
			print_base_double(s);
			break;
		case POS_INF :
			print_base_exception(POS_INF);
			break;
		case NEG_INF :
			print_base_exception(NEG_INF);
			break;
		case NAN :
			print_base_exception(NAN);
			break;
		default :
			print_base_exception(NAN);
			break;
	}
}

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {(void)copy;}
ScalarConverter& ScalarConverter::operator=(ScalarConverter &scalarconverter) {return scalarconverter;}
ScalarConverter::~ScalarConverter() {}