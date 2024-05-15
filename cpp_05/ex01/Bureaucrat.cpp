/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:56:31 by niromano          #+#    #+#             */
/*   Updated: 2024/05/15 14:05:30 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}
Bureaucrat::~Bureaucrat() {}
const std::string	Bureaucrat::getName() const {return this->_name;}
int	Bureaucrat::getGrade() const {return this->_grade;}

void	Bureaucrat::upGrade() {
	this->_grade--;
	if (this->_grade < 1) {
		this->_grade ++;
		throw GradeTooHighException();
	}
}

void	Bureaucrat::downGrade() {
	this->_grade++;
	if (this->_grade > 150) {
		this->_grade --;
		throw GradeTooLowException();
	}
}

void	Bureaucrat::signForm(Form &f) {
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->getName() << " couldn't signed " << f.getName() << " because ";
		std::cout << "\"" << e.what() << "\"" << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {return "The grade is too high";}
const char* Bureaucrat::GradeTooLowException::what() const throw() {return "The grade is too low";}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}