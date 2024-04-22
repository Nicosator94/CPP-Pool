/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:06 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 12:02:59 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	std::cout << std::endl;
	{
		Fixed a(42.42f);
		Fixed b(21.21f);
		std::cout << a << " < " << b << " =" << (a < b ? " true" : " false ") << std::endl;
		std::cout << a << " > " << b << " =" << (a > b ? " true" : " false ") << std::endl;
		std::cout << a << " <= " << b << " =" << (a <= b ? " true" : " false ") << std::endl;
		std::cout << a << " >= " << b << " =" << (a >= b ? " true" : " false ") << std::endl;
		std::cout << a << " != " << b << " =" << (a != b ? " true" : " false ") << std::endl;
		std::cout << a << " == " << b << " =" << (a == b ? " true" : " false ") << std::endl;
		std::cout << a << " + " << b << " = " << a + b << std::endl;
		std::cout << a << " - " << b << " = " << a - b << std::endl;
		std::cout << a << " * " << b << " = " << a * b << std::endl;
		std::cout << a << " / " << b << " = " << a / b << std::endl;
		std::cout << a << " : ++a = " << ++a << " = " << a << std::endl;
		std::cout << a << " : --a = " << --a << " = " << a << std::endl;
		std::cout << a << " : a++ = " << a++ << " = " << a << std::endl;
		std::cout << a << " : a-- = " << a-- << " = " << a << std::endl;
		std::cout << "Min of " << a << " and " << b << " is " << Fixed::min(a, b) << std::endl;
		std::cout << "Max of " << a << " and " << b << " is " << Fixed::max(a, b) << std::endl;
	}
	return 0;
}