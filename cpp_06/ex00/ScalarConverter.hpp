/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:37:27 by niromano          #+#    #+#             */
/*   Updated: 2024/05/23 15:12:47 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

enum type{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	POS_INF,
	NEG_INF,
	NAN
};

class ScalarConverter {

	public :

		static void convert(const std::string &s);

	private :

		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(ScalarConverter &scalarconverter);
		~ScalarConverter();
};