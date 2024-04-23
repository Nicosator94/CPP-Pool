/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:59:34 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:32:59 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Animal.hpp"

class Dog : public Animal {

	public :

		Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &dog);
		~Dog();
		void	makeSound() const;
};