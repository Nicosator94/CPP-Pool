/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:39:04 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:31:42 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ClapTrap {

	public :

		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap &claptrap);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected :

		const std::string	_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;
};