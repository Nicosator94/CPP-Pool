/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:34:50 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 10:33:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	display_options()
{
	std::cout << "Options :" << std::endl;
	std::cout << "- ADD : Allows you to add a contact to your phonebook" << std::endl;
	std::cout << "- SEARCH : Allows you to view your phonebook with your saved contacts" << std::endl;
	std::cout << "- EXIT : Allows you to exit your phonebook ";
	std::cout << "(You will lose all your already saved contacts)" << std::endl;
	std::cout << std::endl;
}

int	main() {
	std::cout << "Welcome to PhoneBook !" << std::endl << std::endl;
	display_options();
	PhoneBook phonebook;
	std::string chaine;
	std::getline(std::cin, chaine);
	if (!std::cin) {
		std::cout << "EXIT" << std::endl;
		return 0;
	}
	while (chaine != "EXIT") {
		if (chaine == "ADD") {
			std::cout << std::endl;
			phonebook.add();
			std::cout << std::endl;
			display_options();
		}
		else if (chaine == "SEARCH") {
			std::cout << std::endl;
			phonebook.display();
			std::cout << std::endl;
			phonebook.ask_index();
			std::cout << std::endl;
			display_options();
		}
		std::getline(std::cin,chaine);
		if (!std::cin) {
			std::cout << "EXIT" << std::endl;
			return 0;
		}
	}
	return 0;
}