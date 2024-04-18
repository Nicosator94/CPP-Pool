/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:36:28 by niromano          #+#    #+#             */
/*   Updated: 2024/04/18 12:53:31 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type) {}

AMateria::AMateria(const AMateria &copy) : _type(copy._type) {}

AMateria& AMateria::operator=(const AMateria &amateria) {
	this->_type = amateria._type;
	return *this;
}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const {return this->_type;}

void AMateria::use(ICharacter& target) {
	std::cout << "* ZzZzzzz " << target.getName() << " zzzzZzZ *" << std::endl;
}