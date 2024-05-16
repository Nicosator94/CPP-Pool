/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:26:37 by niromano          #+#    #+#             */
/*   Updated: 2024/05/16 16:24:14 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	public :

		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &presidentialpardonform);
		~PresidentialPardonForm();
		void execute(const Bureaucrat &executor) const;

	private :

		const std::string &_target;
		void pardonZaphod() const;
};