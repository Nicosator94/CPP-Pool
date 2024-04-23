/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:56:31 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 11:21:37 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat) {

}

Bureaucrat::~Bureaucrat() {}
const std::string	Bureaucrat::getName() const {return this->_name;}
int	Bureaucrat::getGrade() const {return this->_grade;}

void	Bureaucrat::operator++() {
	try {
		this->_grade--;
		if (this->_grade < 1)
			throw std::string("Bureaucrat::GradeTooHighException");
	} catch (const std::string &e) {
		std::cerr << e << std::endl;
	}
}

void	Bureaucrat::operator--() {
	try {
		this->_grade++;
		if (this->_grade > 150)
			throw std::string("Bureaucrat::GradeTooLowException");
	} catch (const std::string &e) {
		std::cerr << e << std::endl;
	}
}

const std::string &GradeTooLowException() {
	return "Grade too low";
}