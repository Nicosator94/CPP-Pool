/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:38:16 by niromano          #+#    #+#             */
/*   Updated: 2024/04/15 16:09:05 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("Nicolas");
	DiamondTrap b("Seb");
	DiamondTrap c(a);
	a.whoAmI();
	a.attack("Mathieu");
	a.takeDamage(5);
	a.beRepaired(15);
	a.takeDamage(1000);
	a.beRepaired(10);
	a.attack("Brice");
	a.takeDamage(1000);
	b.takeDamage(1);
	b = a;
	b.takeDamage(1);
	a.whoAmI();
	return 0;
}