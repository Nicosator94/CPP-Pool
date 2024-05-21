/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:37:27 by niromano          #+#    #+#             */
/*   Updated: 2024/05/21 13:43:57 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

enum type{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
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