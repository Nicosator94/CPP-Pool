/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:08 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:14:30 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		Form f("Form", 150, 15);
		std::cout << f << std::endl;
		s.signForm(f);
		std::cout << f << std::endl;
		s.signForm(f);
		std::cout << f << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		Form f("Form", 1, 15);
		std::cout << f << std::endl;
		s.signForm(f);
		std::cout << f << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}