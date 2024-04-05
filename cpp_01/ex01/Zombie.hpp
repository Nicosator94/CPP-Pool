/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:36:24 by niromano          #+#    #+#             */
/*   Updated: 2024/04/05 16:26:59 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "Zombie.h"

class	Zombie{

	public :

				Zombie();
				~Zombie();

		void	announce();
		void	create(std::string name);
	
	private :

	std::string	name;
};

#endif