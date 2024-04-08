/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:36:24 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 16:41:33 by niromano         ###   ########.fr       */
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
	void	create(std::string s_name);
	
	private :

	std::string	name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);