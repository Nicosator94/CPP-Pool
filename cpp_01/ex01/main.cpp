/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:38:30 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 16:39:13 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int	nb = 8;
	Zombie	*horde;
	horde = zombieHorde(nb, "connard");
	for(int i = 0; i < nb; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}