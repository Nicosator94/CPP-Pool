/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:12 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 17:52:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {

	public :

		HumanA(const std::string &name, const Weapon &_weapon);
		~HumanA();
		
		void	attack() const;

	private :
	
		std::string		_name;
		const Weapon&	_weapon;
};