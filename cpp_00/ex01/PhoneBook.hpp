/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:34:46 by niromano          #+#    #+#             */
/*   Updated: 2024/04/04 11:29:17 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "phonebook.h"

class PhoneBook{

	public :

			PhoneBook();
			~PhoneBook();
	void	display();
	void	ask_index();
	int		check_index(std::string index);
	int		check_contact(std::string index);
	void	add();
	int		what_index();

	private :

	Contact contact[8];
};

#endif