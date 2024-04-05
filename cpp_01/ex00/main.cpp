/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:34:51 by niromano          #+#    #+#             */
/*   Updated: 2024/04/05 14:23:55 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main() {
	Zombie *zomb = newZombie("Michel 1");
	zomb->announce();
	delete zomb;
	randomChump("Michel 2");
	randomChump("Michel 3");
	randomChump("Michel 4");
	randomChump("Michel 5");
	Zombie *zomb2 = newZombie("Michel 6");
	zomb->announce();
	delete zomb2;
	return 0;
}