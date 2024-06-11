/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:19:13 by niromano          #+#    #+#             */
/*   Updated: 2024/06/11 18:08:22 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"

int main() {
	try {
		std::cout << "Test with Vector containers :" << std::endl;
		std::vector<int> vector(2, 15);
		easyfind(vector, 15);
		easyfind(vector, 5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Test with Deque containers :" << std::endl;
		std::deque<int> deque(2, 15);
		easyfind(deque, 15);
		easyfind(deque, 5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Test with List containers :" << std::endl;
		std::list<int> list(2, 15);
		easyfind(list, 15);
		easyfind(list, 5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}