/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:09:46 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 13:43:52 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _diamondName(name) {
	std::cout << "DiamondTrap : Constructor called for " << this->_diamondName << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _diamondName(copy._diamondName) {
	std::cout << "DiamondTrap : Copy constructor called with " << this->_diamondName << std::endl;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	std::cout << "DiamondTrap : Assignement operator called for " << this->_diamondName << " with " << diamondtrap._diamondName << std::endl;
	this->_hitPoints = diamondtrap._hitPoints;
	this->_energyPoints = diamondtrap._energyPoints;
	this->_attackDamage = diamondtrap._attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap : Destructor called for " << this->_diamondName << std::endl;
}

void	DiamondTrap::whoAmI() {
	if (this->_hitPoints <= 0)
		std::cout << this->_diamondName << " is dead, he can't know who he is !" << std::endl;
	else
		std::cout << this->_diamondName << " is my name or " << this->_name << " is my name ?" << std::endl;
	std::cout << std::endl;
}