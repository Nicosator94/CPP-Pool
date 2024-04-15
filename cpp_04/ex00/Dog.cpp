/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:59:24 by niromano          #+#    #+#             */
/*   Updated: 2024/04/15 19:53:55 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog : Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog) {
	std::cout << "Dog : Copy assignement called" << std::endl;
	this->_type = dog._type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog : Destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
}