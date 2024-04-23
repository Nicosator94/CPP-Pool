/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:55:39 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:34:18 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain {

	public :

		Brain();
		Brain(const Brain &copy);
		Brain& operator=(const Brain &brain);
		~Brain();
		void	displayIdeas() const;

	private :

		std::string _ideas[100];
};