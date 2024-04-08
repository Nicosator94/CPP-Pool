/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:28:35 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 16:47:57 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::add() {
	shift_all();
	this->contact[0].create_contact();
}

void	PhoneBook::shift_all() {
	for(int i = 7; i > 0; i--) {
		this->contact[i] = this->contact[i - 1];
	}
}

void	PhoneBook::display() {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Index   |  First   |   Last   |   Nick   |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for(int i = 0; i <= 7; i++) {
		std::cout << "|         " << i + 1 << "|";
		std::cout << this->contact[i].display_info('F') << "|";
		std::cout << this->contact[i].display_info('L') << "|";
		std::cout << this->contact[i].display_info('N') << "|";
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void	PhoneBook::ask_index() {
	std::string index;
	std::cout << "Enter index : ";
	std::getline(std::cin, index);
	if (!std::cin) {
		std::cout << std::endl;
		return;
	}
	while (check_index(index)) {
		std::cout << "Choose a correct index !" << std::endl;
		std::cout << std::endl;
		display();
		std::cout << std::endl;
		std::cout << "Enter index : ";
		std::getline(std::cin, index);
		if (!std::cin) {
			std::cout << std::endl;
			return;
		}
	}
	std::cout << std::endl;
	if (check_contact(index))
		std::cout << "No contact register for index : " << index << std::endl;
	else
		this->contact[index[0] - 49].display_all();
}

int	PhoneBook::check_index(std::string index) {
	if (index[0] < '1' || index[0] > '8' || index[1] != '\0')
		return 1;
	return 0;
}

int	PhoneBook::check_contact(std::string index) {
	if (this->contact[index[0] - 49].check())
		return 1;
	return 0;
}