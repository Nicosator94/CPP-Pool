/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:18 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 18:03:35 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {

	public :

		HumanB(const std::string &name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon &weapon);

	private :

		std::string	_name;
		Weapon*		_weapon;
};