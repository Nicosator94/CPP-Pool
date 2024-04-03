/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:34:50 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 16:18:59 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int main()
{
	PhoneBook phonebook;
	std::string chaine;
	std::getline(std::cin, chaine);
	while (chaine != "EXIT") {
		if (chaine == "ADD") {
			phonebook = add(phonebook);
		}
		else if (chaine == "SEARCH") {
			search(phonebook);
		}
		std::getline(std::cin,chaine);
	}
	return 0;
}