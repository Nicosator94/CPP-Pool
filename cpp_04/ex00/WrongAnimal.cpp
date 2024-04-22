/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:51:41 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 13:50:19 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("") {
	std::cout << "Wrong Animal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type) {
	std::cout << "Wrong Animal : Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wronganimal) {
	std::cout << "Wrong Animal : Copy assignement called" << std::endl;
	this->_type = wronganimal._type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal : Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const {return this->_type;}

void	WrongAnimal::makeSound() const {
	std::cout << "..." << std::endl;
}
