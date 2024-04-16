/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:57:02 by niromano          #+#    #+#             */
/*   Updated: 2024/04/16 18:32:21 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() { {
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		j->makeSound();
		i->makeSound();
		meta->makeSound();
		delete j;
		delete i;
		delete meta;
		std::cout << "==============" << std::endl;
		Dog a;
		std::cout << "==============" << std::endl;
		Dog b(a);
		std::cout << "==============" << std::endl;
		Dog c;
		std::cout << "==============" << std::endl;
		c = a;
		c.displayBrain();
	}
	std::cout << "=======//////////////////=======" << std::endl;
	{
		const Animal *meta[10];
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 1)
				meta[i] = new Dog();
			else
				meta[i] = new Cat();
		}
		for (int i = 0; i < 10; i++) {
			delete meta[i];
		}
	}
	return 0;
}