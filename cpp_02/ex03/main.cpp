/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:06 by niromano          #+#    #+#             */
/*   Updated: 2024/04/13 16:35:30 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point a(0, 0);
	Point b(5, 5);
	Point c(10, 0);
	Point p(5, 3);
	std::cout << (bsp(a, b, c, p) ? "true" : "false") << std::endl;
	return 0;
}