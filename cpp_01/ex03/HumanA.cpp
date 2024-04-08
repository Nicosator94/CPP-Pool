/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:06 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 17:58:12 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &type) : _name(name), _weapon(type) {}
HumanA::~HumanA() {}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}