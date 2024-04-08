/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:26 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 17:19:23 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Weapon {

	public :

		Weapon(const std::string &type);
		~Weapon();

		const std::string&	getType() const;
		void				setType(const std::string &type);

	private :

		std::string _type;
};