/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:37:25 by niromano          #+#    #+#             */
/*   Updated: 2024/05/21 14:29:11 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

static int check_type(const std::string &s) {
	if (s.length() == 1)
		return CHAR;
	// for (unsigned int i = 0; i < s.length(); i++) {
	// 	if (!isdigit(s[i]))
	// 		std::cout << s[i] << std::endl;
	// }
	return -1;
}

static void print_base_char(const std::string &s) {
	std::cout << "char: \'" << s[0] << "\'" << std::endl;
	std::cout << "int: " << static_cast <int> (s[0]) << std::endl;
	std::cout << "float: " << static_cast <float> (s[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast <double> (s[0]) << ".0" << std::endl;
}

void ScalarConverter::convert(const std::string &s) {
	switch (check_type(s)) {
		case CHAR :
			print_base_char(s);
			break;
		case INT :
			std::cout << "int" << std::endl;
			break;
		case FLOAT :
			std::cout << "float" << std::endl;
			break;
		case DOUBLE :
			std::cout << "double" << std::endl;
			break;
		default :
			std::cout << "nothing" << std::endl;
			break;
	}
}

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {(void)copy;}
ScalarConverter& ScalarConverter::operator=(ScalarConverter &scalarconverter) {return scalarconverter;}
ScalarConverter::~ScalarConverter() {}