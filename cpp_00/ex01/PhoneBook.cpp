/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:28:35 by niromano          #+#    #+#             */
/*   Updated: 2024/04/04 12:28:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::display()
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Index   |  First   |   Last   |   Nick   |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for(int i = 0; i <= 7; i++) {
		std::cout << "|         " << i + 1 << "|";
		std::cout << contact[i].display_info('F') << "|";
		std::cout << contact[i].display_info('L') << "|";
		std::cout << contact[i].display_info('N') << "|";
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

int	PhoneBook::check_index(std::string index)
{
	if (index[0] < '1' || index[0] > '8' || index[1] != '\0')
		return 1;
	return 0;
}

int	PhoneBook::check_contact(std::string index)
{
	if (contact[index[0] - 49].check())
		return 1;
	return 0;
}

void	PhoneBook::ask_index()
{
	std::string index;
	std::cout << "Enter index : ";
	std::getline(std::cin, index);
	if (!std::cin) {
		std::cout << std::endl;
		return;
	}
	while (check_index(index)) {
		std::cout << "Choose a correct index !" << std::endl;
		display();
		std::cout << "Enter index : ";
		std::getline(std::cin, index);
		if (!std::cin) {
			std::cout << std::endl;
			return;
		}
	}
	if (check_contact(index))
		std::cout << "No contact register for index : " << index << std::endl;
	else {
		contact[index[0] - 49].display_all();
	}
}

int	PhoneBook::what_index()
{
	for(int i = 0; i < 8; i++) {
		if (contact[i].check()) {
			return i;
		}
	}
	return -1;
}

void	PhoneBook::add()
{
	int index;
	index = what_index();
	contact[index].create_contact();
}