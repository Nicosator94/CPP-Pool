/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:27:35 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:15:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public :

		virtual ~AForm();
		const std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat &b);
		virtual void execute(const Bureaucrat &executor) const = 0;

	protected :

		AForm(const std::string &name, int signGrade, int execGrade);
		AForm(const AForm &copy);
		AForm& operator=(const AForm &Aform);
		const std::string _name;
		bool _sign;
		int _signGrade;
		int _execGrade;

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
		class AFormAlreadySigned : public std::exception {
			const char* what() const throw();
		};
		class AFormNotSigned : public std::exception {
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const AForm &form);