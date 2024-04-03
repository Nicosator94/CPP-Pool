/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:44:42 by niromano          #+#    #+#             */
/*   Updated: 2024/04/03 16:12:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "phonebook.h"

class Contact{
	public :
		Contact();
		~Contact();

	std::string	display_first_name();
	std::string	display_last_name();
	std::string	display_nickname();
	int	check();
	void	create_contact();
	
	private :

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif