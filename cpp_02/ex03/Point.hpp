/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:47:41 by niromano          #+#    #+#             */
/*   Updated: 2024/04/13 02:38:55 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {

	public :

	Point();
	Point(const float &x, const float &y);
	Point(const Point &copy);
	Point& operator=(const Point &point);
	~Point();
	const Fixed& getX() const;
	const Fixed& getY() const;

	private :

	const Fixed	_x;
	const Fixed	_y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);