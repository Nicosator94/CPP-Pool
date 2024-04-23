/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:08 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 15:48:16 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

void	call(void (fn)()) {
	try {
		fn();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	try {
		Bureaucrat s("Name", 150);
		std::cout << s.getName() << std::endl;
		std::cout << s.getGrade() << std::endl;
		call(s.downGrade());
		std::cout << s.getGrade() << std::endl;
		call(s.upGrade());
		std::cout << s.getGrade() << std::endl;
		std::cout << s << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}