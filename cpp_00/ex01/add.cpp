/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:16:49 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 16:22:41 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	choose_place(PhoneBook phonebook)
{
	for(int i = 0; i < 8; i ++) {
		if (phonebook.got_it_check(phonebook, i))
			return i;
	}
	return -1;
}

PhoneBook	creation_of_new_contact(PhoneBook phonebook, int index)
{
	Contact new_contact;
	
	new_contact.create_contact();
	phonebook.fill(new_contact, index);
	return phonebook;
}

PhoneBook	add(PhoneBook phonebook)
{
	std::cout << "Creation of new contact" << std::endl;
	int index = choose_place(phonebook);
	phonebook = creation_of_new_contact(phonebook, index);
	return phonebook;
}