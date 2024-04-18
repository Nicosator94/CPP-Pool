/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:11:14 by niromano          #+#    #+#             */
/*   Updated: 2024/04/18 11:42:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

	public :

	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource& operator=(const MateriaSource &materiasource);
	~MateriaSource();
	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& type);

	private :

	AMateria *_materia[4];
};