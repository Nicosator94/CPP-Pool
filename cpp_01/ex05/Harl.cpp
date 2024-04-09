/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:50:49 by niromano          #+#    #+#             */
/*   Updated: 2024/04/09 12:33:15 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::complain(std::string level) {
	int i = 0;
	while((i == 0 && level != "DEBUG") || (i == 1 && level != "INFO") || (i == 2 && level != "WARNING") || (i == 3 && level != "ERROR"))
		i++;
	t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	while (i < 4)
		(this->*funcs[i++])();
}

void	Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error() {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}