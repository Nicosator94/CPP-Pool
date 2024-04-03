/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:17:21 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 15:48:02 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	check_index(PhoneBook phonebook, std::string index)
{
	if (index[0] < '1' || index[0] > '8' || index[1] != '\0')
		return 1;
	if (phonebook.got_it_check(phonebook, index[0] - 48))
		return 1;
	return 0;
}

void	search(PhoneBook phonebook)
{
	std::string index;
	phonebook.display(phonebook);
	std::cout << "Enter index : ";
	std::getline(std::cin, index);
	if (phonebook.got_it_check(phonebook, 0)) {
		std::cout << "No contact save !" << std::endl;
		return;	
	}
	while (check_index(phonebook, index)) {
		std::cout << "Incorrect index !" << std::endl;
		std::cout << "Enter index : ";
		std::getline(std::cin, index);
	}
}