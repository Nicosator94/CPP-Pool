/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:54:01 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:31:46 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :

		FragTrap(const std::string &name);
		FragTrap(const FragTrap &copy);
		FragTrap& operator=(const FragTrap &fragtrap);
		~FragTrap();
		void	highFivesGuys();
};