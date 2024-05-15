/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:27:33 by niromano          #+#    #+#             */
/*   Updated: 2024/05/15 13:23:37 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (this->_signGrade > 150)
		throw GradeTooLowException();
	else if (this->_signGrade < 1)
		throw GradeTooHighException();
	if (this->_execGrade > 150)
		throw GradeTooLowException();
	else if (this->_execGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &copy) : _name(copy._name), _sign(copy._sign), _signGrade(copy._signGrade), _execGrade(copy._execGrade) {}

Form& Form::operator=(const Form &form) {
	this->_sign = form._sign;
	this->_signGrade = form._signGrade;
	this->_execGrade = form._execGrade;
	return *this;
}

Form::~Form() {}

const std::string Form::getName() const {return this->_name;}
bool Form::getSign() const {return this->_sign;}
int Form::getSignGrade() const {return this->_signGrade;}
int Form::getExecGrade() const {return this->_execGrade;}

void Form::beSigned(const Bureaucrat &b) {
	if (this->_sign == true)
		throw FormAlreadySigned();
	if (b.getGrade() <= this->getSignGrade())
		this->_sign = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {return "The grade is too high";}
const char* Form::GradeTooLowException::what() const throw() {return "The grade is too low";}
const char* Form::FormAlreadySigned::what() const throw() {return "The form is already signed";}

std::ostream& operator<<(std::ostream &out, const Form &form) {
	out << "The " << form.getName() << " form has the properties :" << std::endl;
	out << " - Grade for sign : " << form.getSignGrade() << std::endl;
	out << " - Grade for exec : " << form.getExecGrade() << std::endl;
	out << " - Signed : " << (form.getSign() ? "Signed" : "Not signed");
	return out;
}