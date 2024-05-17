/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:08 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:28:46 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	try {
		Bureaucrat s("Name", 1);
		std::cout << s << std::endl;
		ShrubberyCreationForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		ShrubberyCreationForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 20);
		std::cout << s << std::endl;
		ShrubberyCreationForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 1);
		std::cout << s << std::endl;
		PresidentialPardonForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		PresidentialPardonForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 140);
		std::cout << s << std::endl;
		PresidentialPardonForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 1);
		std::cout << s << std::endl;
		RobotomyRequestForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		RobotomyRequestForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 60);
		std::cout << s << std::endl;
		RobotomyRequestForm f1("Target");
		std::cout << f1 << std::endl;
		s.signForm(f1);
		std::cout << f1 << std::endl;
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 1);
		ShrubberyCreationForm f1("Target");
		s.signForm(f1);
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 1);
		PresidentialPardonForm f1("Target");
		s.signForm(f1);
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 1);
		RobotomyRequestForm f1("Target");
		s.signForm(f1);
		s.executeForm(f1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}