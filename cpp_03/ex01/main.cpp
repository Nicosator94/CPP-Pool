/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:38:16 by niromano          #+#    #+#             */
/*   Updated: 2024/06/24 14:20:27 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap a("Nicolas");
	ScavTrap b("Seb");
	ScavTrap c(a);
	std::cout << std::endl;
	a.guardGate();
	a.attack("Mathieu");
	a.takeDamage(5);
	a.beRepaired(15);
	a.takeDamage(1000);
	a.beRepaired(10);
	a.attack("Brice");
	a.takeDamage(1000);
	b.takeDamage(1);
	b = a;
	std::cout << std::endl;
	b.takeDamage(1);
	a.guardGate();
	return 0;
}