/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:36:24 by niromano          #+#    #+#             */
/*   Updated: 2024/04/05 14:05:17 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class	Zombie{

	public :
	
			Zombie();
			~Zombie();
	void	announce();
	void	create(std::string s_name);
	
	private :

	std::string	name;
};