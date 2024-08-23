/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:46:07 by niromano          #+#    #+#             */
/*   Updated: 2024/08/23 23:54:12 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "./RPN [mathematical expression in reverse Polish notation]" << std::endl;
		return 1;
	}
	try {
		std::stack<int> stack = parseData(av[1]);
		std::cout << resultOfStack(stack) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}