/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:24:50 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:29:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, int signGrade, int execGrade) : _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (this->_signGrade > 150)
		throw GradeTooLowException();
	else if (this->_signGrade < 1)
		throw GradeTooHighException();
	if (this->_execGrade > 150)
		throw GradeTooLowException();
	else if (this->_execGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _sign(copy._sign), _signGrade(copy._signGrade), _execGrade(copy._execGrade) {}

AForm& AForm::operator=(const AForm &Aform) {
	this->_sign = Aform._sign;
	this->_signGrade = Aform._signGrade;
	this->_execGrade = Aform._execGrade;
	return *this;
}

AForm::~AForm() {}

const std::string AForm::getName() const {return this->_name;}
bool AForm::getSign() const {return this->_sign;}
int AForm::getSignGrade() const {return this->_signGrade;}
int AForm::getExecGrade() const {return this->_execGrade;}

void AForm::beSigned(const Bureaucrat &b) {
	if (this->_sign == true)
		throw AFormAlreadySigned();
	if (b.getGrade() <= this->getSignGrade())
		this->_sign = true;
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {return "The grade is too high";}
const char* AForm::GradeTooLowException::what() const throw() {return "The grade is too low";}
const char* AForm::AFormAlreadySigned::what() const throw() {return "The form is already signed";}
const char* AForm::AFormNotSigned::what() const throw() {return "The form is not signed";}

std::ostream& operator<<(std::ostream &out, const AForm &Aform) {
	out << "The " << Aform.getName() << " form has the properties :" << std::endl;
	out << " - Grade for sign : " << Aform.getSignGrade() << std::endl;
	out << " - Grade for exec : " << Aform.getExecGrade() << std::endl;
	out << " - Signed : " << (Aform.getSign() ? "Signed" : "Not signed");
	return out;
}