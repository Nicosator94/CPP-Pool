/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:06:36 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:34:57 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	public :

		virtual ~AMateria();
		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);

	protected :

		std::string _type;
		AMateria(const std::string& type);
		AMateria(const AMateria &copy);
		AMateria& operator=(const AMateria &amateria);
};