/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:37 by niromano          #+#    #+#             */
/*   Updated: 2024/05/15 14:05:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {

	public :

		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		const std::string	getName() const;
		int	getGrade() const;
		void	upGrade();
		void	downGrade();
		void	signForm(Form &f);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};

	private :

		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);