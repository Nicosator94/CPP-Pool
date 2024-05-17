/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:26:39 by niromano          #+#    #+#             */
/*   Updated: 2024/05/16 17:00:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target) {}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform) {
	this->_execGrade = robotomyrequestform._execGrade;
	this->_signGrade = robotomyrequestform._signGrade;
	this->_sign = robotomyrequestform._sign;
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->_sign == false)
		throw AFormNotSigned();
	if (executor.getGrade() <= this->getExecGrade()) {
		this->randomRobot();
	}
	else
		throw GradeTooLowException();
}

void RobotomyRequestForm::randomRobot() const {
	std::srand(std::time(0));
	if (rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << "The robotomy failed !" << std::endl;
}