/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:12:30 by niromano          #+#    #+#             */
/*   Updated: 2024/04/23 12:35:49 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"

class IMateriaSource {

	public :

		virtual ~IMateriaSource() {}
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};