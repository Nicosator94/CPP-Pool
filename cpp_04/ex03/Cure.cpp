/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:16:32 by niromano          #+#    #+#             */
/*   Updated: 2024/04/18 12:51:34 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure &copy) : AMateria(copy) {}

Cure& Cure::operator=(const Cure &cure) {
	this->_type = cure._type;
	return *this;
}

Cure::~Cure() {}
AMateria* Cure::clone() const {return new Cure(*this);}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}