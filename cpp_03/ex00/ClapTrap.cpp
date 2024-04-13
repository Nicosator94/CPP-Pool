/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:38:48 by niromano          #+#    #+#             */
/*   Updated: 2024/04/13 17:41:39 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor called for " << this->_name << std::endl << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage) {
	std::cout << "Copy constructor called by " << this->_name << std::endl << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap) {
	std::cout << "Assignement operator called for " << this->_name << " by " << claptrap._name << std::endl << std::endl;
	this->_hitPoints = claptrap._hitPoints;
	this->_energyPoints = claptrap._energyPoints;
	this->_attackDamage = claptrap._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for " << this->_name << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is dead, can't attack !" << std::endl;
	else
		std::cout << this->_name << " attacks " << target << " with " << this->_attackDamage << " power !" << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is already dead, stop harassing him !" << std::endl;
	else {
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0) {
			std::cout << this->_name << " takes " << amount << " points of damage !" << std::endl;
			std::cout << this->_name << " dies !" << std::endl;
		}
		else {
			std::cout << this->_name << " takes " << amount << " damage points !" << std::endl;
			std::cout << this->_name << " is still alive but only with " << this->_hitPoints << " hit points remaining !" << std::endl;
		}
	}
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is dead, can't be repaired !" << std::endl;
	else {
		this->_hitPoints += amount;
		std::cout << this->_name << " get repaired with " << amount << " hit points !" << std::endl;
		std::cout << this->_name << " have " << this->_hitPoints << " hit points now !" << std::endl;
	}
	std::cout << std::endl;
}