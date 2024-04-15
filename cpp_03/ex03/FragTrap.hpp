/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:54:01 by niromano          #+#    #+#             */
/*   Updated: 2024/04/15 15:30:26 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public :

	FragTrap(const std::string &name);
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &fragtrap);
	~FragTrap();
	void	highFivesGuys();
};