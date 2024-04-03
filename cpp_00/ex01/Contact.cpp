/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:27:51 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 16:13:00 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

std::string	Contact::display_first_name()
{
	if (Contact::first_name == "\0")
		return "          ";
	return Contact::first_name;
}

std::string	Contact::display_last_name()
{
	if (Contact::last_name == "\0")
		return "          ";
	return Contact::last_name;
}

std::string	Contact::display_nickname()
{
	if (Contact::nickname == "\0")
		return "          ";
	return Contact::nickname;
}

int Contact::check()
{
	if (Contact::first_name == "\0")
		return 1;
	return 0;
}

void	Contact::create_contact()
{
	std::string buf;
	std::cout << "First name : ";
	std::getline(std::cin, buf);
	first_name = buf;
	std::cout << "Last name : ";
	std::getline(std::cin, buf);
	last_name = buf;
	std::cout << "Nickname : ";
	std::getline(std::cin, buf);
	nickname = buf;
	std::cout << "Phone number: ";
	std::getline(std::cin, buf);
	phone_number = buf;
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, buf);
	darkest_secret = buf;
}