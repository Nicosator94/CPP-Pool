/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:20:08 by niromano          #+#    #+#             */
/*   Updated: 2024/07/10 15:25:38 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

	public :

		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		Character& operator=(const Character &character);
		~Character();
		const std::string&	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		AMateria	*getMateria(int idx);

	private :

		const std::string	_name;
		AMateria			*_materia[4];
};