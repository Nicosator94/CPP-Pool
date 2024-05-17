/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:52:53 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 15:49:39 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern {

	public :

		Intern();
		Intern(const Intern &copy);
		Intern& operator=(const Intern &intern);
		~Intern();
		AForm* makeForm(const std::string &name, const std::string &target);

	private :

		class AFormDoesntExist : public std::exception {
			const char* what() const throw();
		};
};