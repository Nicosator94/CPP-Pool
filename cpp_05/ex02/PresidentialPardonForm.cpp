/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:26:33 by niromano          #+#    #+#             */
/*   Updated: 2024/05/16 16:25:17 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 145, 137), _target(target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy._target) {}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform) {
	this->_execGrade = presidentialpardonform._execGrade;
	this->_signGrade = presidentialpardonform._signGrade;
	this->_sign = presidentialpardonform._sign;
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->_sign == false)
		throw AFormNotSigned();
	if (executor.getGrade() <= this->getExecGrade()) {
		this->pardonZaphod();
	}
	else
		throw GradeTooLowException();
}

void PresidentialPardonForm::pardonZaphod() const {
	std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}