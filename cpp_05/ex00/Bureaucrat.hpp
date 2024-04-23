/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:37 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 11:08:27 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat {

	public :

	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat& operator=(const Bureaucrat &bureaucrat);
	~Bureaucrat();
	const std::string	getName() const;
	int					getGrade() const;
	void	operator++();
	void	operator--();

	private :

	const std::string	_name;
	int					_grade;
};