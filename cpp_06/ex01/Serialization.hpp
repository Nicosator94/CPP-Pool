/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:47:00 by niromano          #+#    #+#             */
/*   Updated: 2024/06/04 11:56:22 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include "Data.h"

class Serialization {

	public :

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private :

		Serialization();
		Serialization(const Serialization &copy);
		Serialization& operator=(const Serialization &serialization);
		~Serialization();
};