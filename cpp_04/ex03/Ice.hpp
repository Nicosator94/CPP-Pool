/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:09:09 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:35:30 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {

	public :

		Ice();
		Ice(const Ice &copy);
		Ice& operator=(const Ice &Ice);
		~Ice();
		AMateria*	clone() const;
		void	use(ICharacter& target);
};