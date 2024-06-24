/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:57:02 by niromano          #+#    #+#             */
/*   Updated: 2024/06/24 11:22:35 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		j->makeSound();
		i->makeSound();
		std::cout << std::endl;
		delete j;
		delete i;
	}
	std::cout << std::endl << "=========================================================================" << std::endl << std::endl;
	{
		Dog a;
		Dog b(a);
		Dog c;
		c = a;
		std::cout << std::endl;
		c.displayBrain();
		std::cout << std::endl;
	}
	std::cout << std::endl << "=========================================================================" << std::endl << std::endl;
	{
		const Animal *meta[10];
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 1)
				meta[i] = new Dog();
			else
				meta[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++) {
			meta[i]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++) {
			delete meta[i];
		}
	}
	return 0;
}
