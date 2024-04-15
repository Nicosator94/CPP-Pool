/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 00:04:31 by niromano          #+#    #+#             */
/*   Updated: 2024/04/16 00:23:23 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Wrong Cat : Default constructor called" << std::endl;
	this->_type = "Cat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
	std::cout << "Wrong Cat : Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongcat) {
	std::cout << "Wrong Cat : Copy assignement called" << std::endl;
	this->_type = wrongcat._type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat : Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}