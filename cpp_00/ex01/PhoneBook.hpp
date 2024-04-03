/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:34:46 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 16:10:40 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "phonebook.h"

class PhoneBook{
	public :
	
		PhoneBook();
		~PhoneBook();
	void display(PhoneBook phonebook);
	int got_it_check(PhoneBook phonebook, int index);
	void	fill(Contact new_contact, int index);
	
	private :
	
	Contact contact[8];
};

#endif