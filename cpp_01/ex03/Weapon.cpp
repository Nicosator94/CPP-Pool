/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:22 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 17:30:49 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {}
Weapon::~Weapon() {}

const std::string&	Weapon::getType() const {
	return this->_type;
}

void	Weapon::setType(const std::string &type) {
	this->_type = type;
}