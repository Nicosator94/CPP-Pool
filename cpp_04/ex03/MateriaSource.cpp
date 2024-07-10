/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:18:46 by niromano          #+#    #+#             */
/*   Updated: 2024/07/10 15:45:27 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL) {
			this->_materia[i] = copy._materia[i]->clone();
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materiasource) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL) {
			this->_materia[i] = materiasource._materia[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == m)
			return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL) {
			this->_materia[i] = m;
			return;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL) {
			if (this->_materia[i]->getType() == type)
				return this->_materia[i]->clone();
		}
	}
	return NULL;
}