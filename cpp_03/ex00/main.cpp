/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:38:16 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 13:36:55 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Nicolas");
	ClapTrap b("Seb");
	ClapTrap c(a);
	std::cout << std::endl;
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
	return 0;
}