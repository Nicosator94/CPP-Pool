/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:46:00 by niromano          #+#    #+#             */
/*   Updated: 2024/04/09 12:15:22 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Harl {

	public :

		Harl();
		~Harl();
		void	complain(std::string level);

	private :

		void	debug();
		void	info();
		void	warning();
		void	error();
};

typedef void (Harl::*t_func) ();