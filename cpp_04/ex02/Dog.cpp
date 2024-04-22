/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:59:24 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 14:08:04 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog : Default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain =  new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog : Copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Dog& Dog::operator=(const Dog &dog) {
	std::cout << "Dog : Copy assignement called" << std::endl;
	this->_type = dog._type;
	delete this->_brain;
	this->_brain = new Brain(*dog._brain);
	return *this;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog : Destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
}

void Dog::displayBrain() const {
	this->_brain->displayIdeas();
}