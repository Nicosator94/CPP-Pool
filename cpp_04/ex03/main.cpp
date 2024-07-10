/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:09:58 by niromano          #+#    #+#             */
/*   Updated: 2024/07/10 17:01:02 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << "==========================" << std::endl << std::endl;
	{
		IMateriaSource *src = new MateriaSource();
		AMateria *cure = new Cure();
		src->learnMateria(cure);
		src->learnMateria(new Ice());
		src->learnMateria(cure);
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());

		Character *elodie = new Character;
		AMateria *materia;
		materia = src->createMateria("i");
		elodie->equip(materia);
		materia = src->createMateria("ice");
		elodie->equip(materia);
		materia = src->createMateria("ice");
		elodie->equip(materia);
		materia = src->createMateria("cure");
		elodie->equip(materia);
		materia = src->createMateria("cure");
		elodie->equip(materia);

		Character *copy = new Character();
		*copy = *elodie;
		elodie->use(1, *copy);
		elodie->use(18, *copy);
		elodie->use(2, *copy);
		elodie->use(3, *copy);
		elodie->use(0, *copy);
		copy->use(0, *elodie);

		materia = src->createMateria("ice");
		elodie->equip(materia);
		delete materia;

		Character *copy_2 = new Character(*elodie);
		copy_2->use(0, *elodie);
		copy_2->use(1, *copy);

		elodie->unequip(17);
		elodie->unequip(-70);

		materia = elodie->getMateria(0);
		delete materia;
		elodie->unequip(0);
		materia = elodie->getMateria(1);
		delete materia;
		elodie->unequip(1);
		materia = elodie->getMateria(2);
		delete materia;
		elodie->unequip(2);
		materia = copy->getMateria(0);
		delete materia;
		copy->unequip(0);

		delete elodie;
		delete copy;
		delete copy_2;
		delete src;
	}
	return 0;
}