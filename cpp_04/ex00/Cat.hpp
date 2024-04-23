/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:40:42 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:32:52 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Cat : public Animal {

	public :

		Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &cat);
		~Cat();
		void	makeSound() const;
};