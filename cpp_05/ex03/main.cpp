/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:08 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:30:28 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Bureaucrat s("Name", 1);
		std::cout << s << std::endl;
		Intern intern;
		AForm *form = intern.makeForm("PresidentialPardonForm", "Target");
		std::cout << *form << std::endl;
		s.signForm(*form);
		s.executeForm(*form);
		delete form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		Intern intern;
		AForm *form = intern.makeForm("PresidentialPardonForm", "Target");
		std::cout << *form << std::endl;
		s.signForm(*form);
		s.executeForm(*form);
		delete form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		Intern intern;
		AForm *form = intern.makeForm("NotExistingForm", "Target");
		std::cout << *form << std::endl;
		s.signForm(*form);
		s.executeForm(*form);
		delete form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}