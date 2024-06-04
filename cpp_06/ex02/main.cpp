/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:46:21 by niromano          #+#    #+#             */
/*   Updated: 2024/06/04 15:34:11 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	// It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
	// to use anything you like for the random choice implementation.
	Base *ptr;
	std::srand(std::time(0));
	int value = rand() % 3;
	if (value == 0) {
		A *a = new A;
		ptr = dynamic_cast<Base*>(a);
	}
	else if (value == 1) {
		B *b = new B;
		ptr = dynamic_cast<Base*>(b);
	}
	else {
		C *c = new C;
		ptr = dynamic_cast<Base*>(c);
	}
	return ptr;
}

void identify(Base* p) {
	(void)p;
	// It prints the actual type of the object pointed to by p: "A", "B" or "C".
}

void identify(Base& p) {
	(void)p;
	// It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
	// inside this function is forbidden.
}

int main() {
	Base *ptr;
	ptr = generate();
	delete ptr;
	return 0;
}