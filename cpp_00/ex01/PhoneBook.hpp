/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:34:46 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 16:49:03 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{

	public :

			PhoneBook();
			~PhoneBook();
	void	add();
	void	shift_all();
	void	display();
	void	ask_index();
	int		check_index(std::string index);
	int		check_contact(std::string index);

	private :

	Contact contact[8];
};