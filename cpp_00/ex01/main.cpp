/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:34:50 by niromano          #+#    #+#             */
/*   Updated: 2024/04/04 11:29:06 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int main()
{
	PhoneBook phonebook;
	std::string chaine;
	std::getline(std::cin, chaine);
	if (!std::cin) {
		std::cout << "EXIT" << std::endl;
		return 0;
	}
	while (chaine != "EXIT") {
		if (chaine == "ADD") {
			phonebook.add();
		}
		else if (chaine == "SEARCH") {
			phonebook.display();
			phonebook.ask_index();
		}
		std::getline(std::cin,chaine);
		if (!std::cin) {
			std::cout << "EXIT" << std::endl;
			return 0;
		}
	}
	return 0;
}