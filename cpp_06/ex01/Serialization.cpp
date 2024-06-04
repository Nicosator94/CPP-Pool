/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:46:46 by niromano          #+#    #+#             */
/*   Updated: 2024/06/04 12:28:41 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t Serialization::serialize(Data* ptr) {return reinterpret_cast<uintptr_t>(ptr);}
Data* Serialization::deserialize(uintptr_t raw) {return reinterpret_cast<Data*>(raw);}

Serialization::Serialization() {}
Serialization::Serialization(const Serialization &copy) {(void)copy;}
Serialization& Serialization::operator=(const Serialization &serialization) {
	(void)serialization;
	return *this;
}
Serialization::~Serialization() {}