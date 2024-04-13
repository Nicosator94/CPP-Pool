/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:44:23 by niromano          #+#    #+#             */
/*   Updated: 2024/04/13 18:42:34 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	std::cout << "ScavTrap : Constructor called for " << this->_name << std::endl << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name){
	std::cout << "ScavTrap : Copy constructor called by " << this->_name << std::endl << std::endl;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap) {
	std::cout << "ScavTrap : Assignement operator called for " << this->_name << " with " << scavtrap._name << std::endl << std::endl;
	this->_hitPoints = scavtrap._hitPoints;
	this->_energyPoints = scavtrap._energyPoints;
	this->_attackDamage = scavtrap._hitPoints;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap : Destructor called for " << this->_name << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is dead, he can't be in the Gate keeper mode !" << std::endl;
	else
		std::cout << this->_name << " is now on the Gate keeper mode !" << std::endl;
	std::cout << std::endl;
}