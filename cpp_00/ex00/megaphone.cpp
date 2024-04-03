/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:34:33 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 11:35:00 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string create(int ac, char **av)
{
	std::string chaine;
	for(int i = 1; i < ac; ++i) {
		chaine += av[i];
	}
	return chaine;
}

std::string caps(std::string chaine)
{
	for(int i = 0; chaine[i] != '\0'; i++) {
		chaine[i] = toupper(chaine[i]);
	}
	return chaine;
}

int main(int ac, char **av)
{
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	std::string chaine(create(ac, av));
	chaine = caps(chaine);
	std::cout << chaine << std::endl;
	return 0;
}