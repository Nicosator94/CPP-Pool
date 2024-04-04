/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:44:42 by niromano          #+#    #+#             */
/*   Updated: 2024/04/04 12:31:25 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "phonebook.h"

class Contact{

	public :

				Contact();
				~Contact();
	void		display_all();
	std::string	display_info(char info);
	int			check();
	void		create_contact();
	int			add_info(int info);

	private :

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif