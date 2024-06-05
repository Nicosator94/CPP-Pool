/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:39:19 by niromano          #+#    #+#             */
/*   Updated: 2024/06/05 13:16:23 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void f(int &i) {
	i += 10;
}

void g(std::string &i) {
	i += i;
}

int main() {
	{
		int array[10];
		for (int i = 0; i < 10; i++)
			array[i] = i;
		for (int i = 0; i < 10; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
		::iter(array, 10, f);
		for (int i = 0; i < 10; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
	}
	{
		std::string array[10];
		for (int i = 0; i < 10; i++)
			array[i] = 'a' + i;
		for (int i = 0; i < 10; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
		::iter(array, 10, g);
		for (int i = 0; i < 10; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
	}
	return 0;
}