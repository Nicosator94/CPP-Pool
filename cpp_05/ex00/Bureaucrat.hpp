/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:37 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:02:27 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdexcept>

class Bureaucrat {

	public :

		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		const std::string getName() const;
		int getGrade() const;
		void upGrade();
		void downGrade();

	private :

		const std::string _name;
		int	 _grade;

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);