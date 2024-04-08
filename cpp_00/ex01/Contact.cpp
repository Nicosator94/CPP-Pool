/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:27:51 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 16:46:03 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::display_all() {
	std::cout << "First name     : " << this->first_name << std::endl;
	std::cout << "Last name      : " << this->last_name << std::endl;
	std::cout << "Nickname       : " << this->nickname << std::endl;
	std::cout << "Phone number   : " << this->phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
}

std::string Contact::display_info(char info) {
	std::string s;
	switch (info) {
		case 'F':
			s = this->first_name;
			break;
		case 'L':
			s = this->last_name;
			break;
		case 'N':
			s = this->nickname;
			break;
	}
	if (s == "\0")
		return "          ";
	if (s.size() > 10) {
		s.resize(9);
		s += ".";
	}
	else
		s.insert(0, 10 - s.size(), ' ');
	return s;
}

int Contact::check() {
	if (Contact::first_name == "\0")
		return 1;
	return 0;
}

void	Contact::create_contact() {
	for(int i = 0; i < 5; i++) {
		if (add_info(i))
			return;
	}
}

int	Contact::add_info(int info) {
	std::string buf;
	while (buf == "\0") {
		switch (info) {
			case 0:
				std::cout << "First name : ";
				break;
			case 1:
				std::cout << "Last name : ";
				break;
			case 2:
				std::cout << "Nickname : ";
				break;
			case 3:
				std::cout << "Phone number: ";
				break;
			case 4:
				std::cout << "Darkest Secret : ";
				break;
		}
		std::getline(std::cin, buf);
		if (!std::cin) {
			std::cout << std::endl;
			return 1;
		}
	}
	switch (info) {
		case 0:
			this->first_name = buf;
			break;
		case 1:
			this->last_name = buf;
			break;
		case 2:
			this->nickname = buf;
			break;
		case 3:
			this->phone_number = buf;
			break;
		case 4:
			this->darkest_secret = buf;
			break;
	}
	return 0;
}