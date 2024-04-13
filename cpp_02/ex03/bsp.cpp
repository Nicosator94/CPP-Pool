/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:47:29 by niromano          #+#    #+#             */
/*   Updated: 2024/04/13 16:33:08 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	check_side(Point const p1, Point const p2, Point const point) {
	return ((p1.getX() - point.getX()) * (p2.getY() - point.getY())) - ((p1.getY() - point.getY()) * (p2.getX() - point.getX()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	d1(check_side(a, b, point));
	Fixed	d2(check_side(b, c, point));
	Fixed	d3(check_side(c, a, point));
	
	return (d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0);
}