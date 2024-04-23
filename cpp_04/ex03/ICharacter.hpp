/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:10:11 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:35:42 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter {

	public :

		virtual ~ICharacter() {}
		virtual const std::string&	getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
};
