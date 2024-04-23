/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:48:22 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:33:30 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {

	public :

		Animal();
		Animal(const Animal &copy);
		Animal& operator=(const Animal &animal);
		virtual ~Animal();
		std::string	getType() const;
		virtual void	makeSound() const ;

	protected :

		std::string	_type;
};