/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:28:20 by niromano          #+#    #+#             */
/*   Updated: 2024/07/11 11:07:45 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Default_name") {
	for (int i = 0; i < 4; i++) {
		_materia[i] = NULL;
	}
}

Character::Character(const std::string &name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		_materia[i] = NULL;
	}
}

Character::Character(const Character &copy) : _name(copy._name) {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = copy._materia[i]->clone();
	}
}

Character& Character::operator=(const Character &character) {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = character._materia[i]->clone();
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
	// std::cout << "Inventory full !" << std::endl;
	return;
}

AMateria *Character::getMateria(int idx) {
	if (this->_materia[idx] != NULL)
		return this->_materia[idx];
	return NULL;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3) {
		if (this->_materia[idx] != NULL) {
			this->_materia[idx] = NULL;
		}
	}
	// else
		// std::cout << idx << " is a bad index for unequip !" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3) {
		if (this->_materia[idx] != NULL) {
			this->_materia[idx]->use(target);
		}
	}
	// else
	// 	std::cout << idx << " is a bad index for use !" << std::endl;
}