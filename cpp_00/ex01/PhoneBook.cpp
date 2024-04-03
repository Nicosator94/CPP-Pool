/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:28:35 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 16:11:42 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

PhoneBook::PhoneBook()
{
	
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::display(PhoneBook phonebook)
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Index   |  First   |   Last   |   Nick   |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for(int i = 0; i <= 7; i++) {
		std::cout << "|    " << i + 1 << "     |";
		std::cout << phonebook.contact[i].display_first_name() << "|";
		std::cout << phonebook.contact[i].display_last_name() << "|";
		std::cout << phonebook.contact[i].display_nickname() << "|";
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

int PhoneBook::got_it_check(PhoneBook phonebook, int index)
{
	if (phonebook.contact[index].check())
		return 1;
	return 0;
}

void	PhoneBook::fill(Contact new_contact, int index)
{
	contact[index] = new_contact;
}