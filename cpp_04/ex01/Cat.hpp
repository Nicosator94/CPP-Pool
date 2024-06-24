/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:40:42 by niromano          #+#    #+#             */
/*   Updated: 2024/06/24 11:18:44 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Brain.hpp"

class Cat : public Animal {

	public :

		Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &cat);
		~Cat();
		void	makeSound() const;
		void	displayBrain() const;

	private :

		Brain	*_brain;
};