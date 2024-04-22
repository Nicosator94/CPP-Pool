/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:38:30 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 10:44:48 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	{
		int	nb = 10;
		Zombie	*horde;
		horde = zombieHorde(nb, "MiniZombie");
		for(int i = 0; i < nb; i++) {
			horde[i].announce();
		}
		delete [] horde;
	}
	{
		int nb = 5;
		Zombie	*horde;
		horde = zombieHorde(nb, "Zombie");
		for(int i = 0; i < nb; i++) {
			horde[i].announce();
		}
		delete [] horde;
	}
	return 0;
}