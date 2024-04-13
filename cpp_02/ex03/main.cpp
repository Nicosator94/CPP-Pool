/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:06 by niromano          #+#    #+#             */
/*   Updated: 2024/04/13 02:50:36 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point a(0, 0);
	Point b(0, 0);
	Point c(0, 0);
	Point p(0, 0);
	std::cout << bsp(a, b, c, p) << std::endl;
	return 0;
}