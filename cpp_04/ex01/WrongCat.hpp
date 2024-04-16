/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 00:01:46 by niromano          #+#    #+#             */
/*   Updated: 2024/04/16 00:22:13 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public :

	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat& operator=(const WrongCat &wrongcat);
	~WrongCat();
	void makeSound() const;
};