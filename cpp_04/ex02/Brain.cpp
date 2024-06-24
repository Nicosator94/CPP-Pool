/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:00:06 by niromano          #+#    #+#             */
/*   Updated: 2024/06/24 11:20:56 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"

std::string intToString(int i) {
	std::stringstream ss;
	ss << i;
	return ss.str();
}

Brain::Brain() {
	std::cout << "Brain : Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Ideas N°" + intToString(i + 1);
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain : Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator=(const Brain &brain) {
	std::cout << "Brain : Copy assignement called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain : Destructor called" << std::endl;
}

void Brain::displayIdeas() const {
	for (int i = 0; i < 5; i++) {
		std::cout << this->_ideas[i] << std::endl;
	}
	std::cout << "[...]" << std::endl;
	for (int i = 95; i < 100; i++) {
		std::cout << this->_ideas[i] << std::endl;
	}
}