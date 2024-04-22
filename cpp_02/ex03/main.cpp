/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:06 by niromano          #+#    #+#             */
/*   Updated: 2024/04/22 13:20:25 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point a(0, 0);
	Point b(5, 5);
	Point c(10, 0);
	std::cout << "Triangle :" << std::endl;
	std::cout << "(" << a.getX() << "," << a.getY() << ")" << std::endl;
	std::cout << "(" << b.getX() << "," << b.getY() << ")" << std::endl;
	std::cout << "(" << c.getX() << "," << c.getY() << ")" << std::endl;
	{
		Point p(5, 3);
		std::cout << "Check for " << "(" << p.getX() << "," << p.getY() << ") : " << (bsp(a, b, c, p) ? "true" : "false") << std::endl;
	}
	{
		Point p(50, 30);
		std::cout << "Check for " << "(" << p.getX() << "," << p.getY() << ") : " << (bsp(a, b, c, p) ? "true" : "false") << std::endl;
	}
	{
		Point p(0, 0);
		std::cout << "Check for " << "(" << p.getX() << "," << p.getY() << ") : " << (bsp(a, b, c, p) ? "true" : "false") << std::endl;
	}
	{
		Point p(1.5f, 0.1f);
		std::cout << "Check for " << "(" << p.getX() << "," << p.getY() << ") : " << (bsp(a, b, c, p) ? "true" : "false") << std::endl;
	}
	return 0;
}