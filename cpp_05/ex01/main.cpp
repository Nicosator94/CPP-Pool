/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:08 by niromano          #+#    #+#             */
/*   Updated: 2024/05/15 13:23:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	call(Bureaucrat *s, char sign) {
	try {
		switch (sign) {
			case '+':
				s->upGrade();
				break ;
			case '-':
				s->downGrade();
				break;
		}
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	try {
		Bureaucrat s("Name", 150);
		std::cout << s << std::endl;
		Form f("Form", 150, 15);
		std::cout << f << std::endl;
		s.signForm(f);
		s.signForm(f);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}