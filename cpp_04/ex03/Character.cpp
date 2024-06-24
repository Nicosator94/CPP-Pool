/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:28:20 by niromano          #+#    #+#             */
/*   Updated: 2024/06/24 15:11:44 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(const std::string &name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		_materia[i] = NULL;
	}
}

Character::Character(const Character &copy) : _name(copy._name) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL) {
			delete this->_materia[i];
			this->_materia[i] = copy._materia[i];
		}
	}
}

Character& Character::operator=(const Character &character) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL) {
			delete this->_materia[i];
			this->_materia[i] = character._materia[i];
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}

std::string const & Character::getName() const {return this->_name;}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL) {
			this->_materia[i] = m;
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx) {
	if (this->_materia[idx] != NULL) {
		delete this->_materia[idx];
		this->_materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->_materia[idx] != NULL) {
		this->_materia[idx]->use(target);
	}
}