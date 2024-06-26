/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:46:21 by niromano          #+#    #+#             */
/*   Updated: 2024/06/04 12:33:24 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Serialization.hpp"

int main() {
	Data data;
	data.data = 10;
	uintptr_t value = Serialization::serialize(&data);
	Data *data_2 = Serialization::deserialize(value);
	std::cout << data_2->data << std::endl;
	return 0;
}