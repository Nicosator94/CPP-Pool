/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:47:39 by niromano          #+#    #+#             */
/*   Updated: 2024/04/13 02:25:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {}
Point::Point(const float &x, const float &y) : _x(x), _y(y) {}
Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY()) {}

Point& Point::operator=(const Point &point) {
	(void)point;
	return *this;
}

Point::~Point() {}
const Fixed& Point::getX() const {return this->_x;}
const Fixed& Point::getY() const {return this->_y;}