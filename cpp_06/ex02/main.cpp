/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:46:21 by niromano          #+#    #+#             */
/*   Updated: 2024/06/04 16:10:40 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	std::srand(std::time(0));
	int value = rand() % 3;
	switch (value) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			return NULL;
	}
}

void identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	if (a) {
		std::cout << "Class A !" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b) {
		std::cout << "Class B !" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c) {
		std::cout << "Class C !" << std::endl;
		return ;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Class A !" << std::endl;
	}
	catch (std::exception) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Class B !" << std::endl;
	}
	catch (std::exception) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Class C !" << std::endl;
	}
	catch (std::exception) {}
}

int main() {
	Base *ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}