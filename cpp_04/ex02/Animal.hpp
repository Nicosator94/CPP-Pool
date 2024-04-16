/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:48:22 by niromano          #+#    #+#             */
/*   Updated: 2024/04/16 23:50:07 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {

	public :

	virtual ~Animal();
	std::string	getType() const;
	virtual void makeSound() const = 0;

	protected :

	std::string	_type;
	Animal();
	Animal(const Animal &copy);
	Animal& operator=(const Animal &animal);
};