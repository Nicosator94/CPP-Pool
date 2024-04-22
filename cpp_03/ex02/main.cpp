/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:38:16 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 13:40:15 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap a("Nicolas");
	FragTrap b("Seb");
	FragTrap c(a);
	std::cout << std::endl;
	a.highFivesGuys();
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
	a.highFivesGuys();
	return 0;
}