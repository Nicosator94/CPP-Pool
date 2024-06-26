/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:14:42 by niromano          #+#    #+#             */
/*   Updated: 2024/06/11 18:05:41 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T> void easyfind(T container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it != container.end())
		std::cout << "The value found is : " << *it << std::endl;
	else
		throw std::out_of_range("Not found !");
}