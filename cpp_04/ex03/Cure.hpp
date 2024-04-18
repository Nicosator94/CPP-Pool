/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:08:55 by niromano          #+#    #+#             */
/*   Updated: 2024/04/18 11:57:51 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria {

	public :

	Cure();
	Cure(const Cure &copy);
	Cure& operator=(const Cure &cure);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};