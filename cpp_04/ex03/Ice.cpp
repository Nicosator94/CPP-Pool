/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:54:02 by niromano          #+#    #+#             */
/*   Updated: 2024/04/18 12:54:38 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice &copy) : AMateria(copy) {}

Ice& Ice::operator=(const Ice &Ice) {
	this->_type = Ice._type;
	return *this;
}

Ice::~Ice() {}
AMateria* Ice::clone() const {return new Ice(*this);}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}