/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:36:24 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 16:40:00 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Zombie{

	public :

				Zombie();
				~Zombie();

		void	announce();
		void	create(std::string name);
	
	private :

	std::string	name;
};

Zombie* zombieHorde(int N, std::string name);