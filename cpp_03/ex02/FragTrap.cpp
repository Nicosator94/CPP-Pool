/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:53:50 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 13:39:13 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
	std::cout << "FragTrap : Constructor called for " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy._name){
	std::cout << "FragTrap : Copy constructor called with " << this->_name << std::endl;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap &fragtrap) {
	std::cout << "FragTrap : Assignement operator called for " << this->_name << " with " << fragtrap._name << std::endl;
	this->_hitPoints = fragtrap._hitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._hitPoints;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap : Destructor called for " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys() {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is dead, he can't high fives you !" << std::endl;
	else
		std::cout << this->_name << " is now enable to high fives you !" << std::endl;
	std::cout << std::endl;
}