/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:27:35 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:09:44 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public :

		Form(const std::string &name, int signGrade, int execGrade);
		Form(const Form &copy);
		Form& operator=(const Form &form);
		~Form();
		const std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat &b);

	private :

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
		class FormAlreadySigned : public std::exception {
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const Form &form);