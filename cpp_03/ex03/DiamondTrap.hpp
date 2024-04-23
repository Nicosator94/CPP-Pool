/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:09:56 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:32:12 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	public :

		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap& operator=(const DiamondTrap &diamondtrap);
		~DiamondTrap();
		using	ScavTrap::attack;
		void	whoAmI();

	private :

		const std::string _diamondName;
};