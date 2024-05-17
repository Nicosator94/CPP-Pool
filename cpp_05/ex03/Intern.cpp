/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:52:54 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 15:51:50 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &copy) {
	(void)copy;
}

Intern& Intern::operator=(const Intern &intern) {
	(void)intern;
	return *this;
}
Intern::~Intern() {}

AForm* Intern::makeForm(const std::string &name, const std::string &target) {
	std::string form[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	int i = 0;
	while (i < 3) {
		if (name == form[i])
			break;
		i++;
	}
	switch (i) {
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return new RobotomyRequestForm(target);
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return new PresidentialPardonForm(target);
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return new ShrubberyCreationForm(target);
		default :
			throw AFormDoesntExist();
	}
}

const char* Intern::AFormDoesntExist::what() const throw() {return "This Form doesn't exist";}