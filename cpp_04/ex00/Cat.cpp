/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:40:35 by niromano          #+#    #+#             */
/*   Updated: 2024/04/15 19:54:37 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat : Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cat) {
	std::cout << "Cat : Copy assignement called" << std::endl;
	this->_type = cat._type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat : Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}