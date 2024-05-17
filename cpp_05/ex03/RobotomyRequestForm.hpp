/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:26:41 by niromano          #+#    #+#             */
/*   Updated: 2024/05/16 16:26:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

	public :

		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &robotomyrequestform);
		~RobotomyRequestForm();
		void execute(const Bureaucrat &executor) const;

	private :

		const std::string &_target;
		void randomRobot() const;
};