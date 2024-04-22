/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:40:35 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 14:05:33 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat : Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat : Copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Cat& Cat::operator=(const Cat &cat) {
	std::cout << "Cat : Copy assignement called" << std::endl;
	this->_type = cat._type;
	delete this->_brain;
	this->_brain = new Brain(*cat._brain);
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat : Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}

void Cat::displayBrain() const {
	this->_brain->displayIdeas();
}