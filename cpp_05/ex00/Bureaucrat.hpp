/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:37 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 14:55:57 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdexcept>

class Bureaucrat {

	public :

		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		const std::string	getName() const;
		int	getGrade() const;
		void	upGrade();
		void	downGrade();

		class GradeTooHighException : public std::exception {
		
			public :
		
				GradeTooHighException();
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		
			public :
		
				GradeTooLowException();
				const char* what() const throw();
		};

	private :

		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream &s, const Bureaucrat &bureaucrat);