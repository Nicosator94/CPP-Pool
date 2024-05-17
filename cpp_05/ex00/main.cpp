/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:08 by niromano          #+#    #+#             */
/*   Updated: 2024/05/17 16:05:34 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

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
		Bureaucrat s("Name", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "================================" << std::endl << std::endl;
	try {
		Bureaucrat s("Name", 150);
		std::cout << s.getName() << std::endl;
		std::cout << s.getGrade() << std::endl;
		call(&s, '-');
		std::cout << s.getGrade() << std::endl;
		call(&s, '+');
		std::cout << s.getGrade() << std::endl;
		for (int i = 0; i < 148; i++)
			call(&s, '+');
		std::cout << s << std::endl;
		call(&s, '+');
		std::cout << s.getGrade() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}