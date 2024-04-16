/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:48:10 by niromano          #+#    #+#             */
/*   Updated: 2024/04/16 23:42:48 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("") {
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type) {
	std::cout << "Animal : Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &animal) {
	std::cout << "Animal : Copy assignement called" << std::endl;
	this->_type = animal._type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal : Destructor called" << std::endl;
}

std::string	Animal::getType() const {return this->_type;}