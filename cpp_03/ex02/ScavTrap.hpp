/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:44:45 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:31:51 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :

		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap& operator=(const ScavTrap &scavtrap);
		~ScavTrap();
		void	guardGate();
};