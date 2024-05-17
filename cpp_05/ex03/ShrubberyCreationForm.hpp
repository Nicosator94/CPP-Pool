/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:26:45 by niromano          #+#    #+#             */
/*   Updated: 2024/05/16 17:48:39 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public :

		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &shrubberycreationform);
		~ShrubberyCreationForm();
		void execute(const Bureaucrat &executor) const;

	private :

		const std::string &_target;
		void createTree() const;
		class FileCreationFailed : public std::exception {
			const char* what() const throw();
		};
};