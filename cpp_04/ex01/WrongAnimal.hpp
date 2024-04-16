/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:52:14 by niromano          #+#    #+#             */
/*   Updated: 2024/04/16 00:08:45 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class WrongAnimal {

	public :

	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal& operator=(const WrongAnimal &wronganimal);
	virtual ~WrongAnimal();
	std::string	getType() const;
	void makeSound() const;

	protected :

	std::string _type;
};