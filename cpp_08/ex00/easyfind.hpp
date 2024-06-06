/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:14:42 by niromano          #+#    #+#             */
/*   Updated: 2024/06/06 15:14:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void easyfind(T f, int i) {
	// for (typename T::iterator it = f.begin(); it != f.end(); it++) {
	// 	if (i == *it)
	// 		std::cout << "oui" << std::endl;
	// }
	// std::cout << "fini" << std::endl;
	std::cout << f.size();
	(void)i;
}