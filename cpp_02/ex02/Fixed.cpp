/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:08 by niromano          #+#    #+#             */
/*   Updated: 2024/04/12 16:39:25 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _rawbits(0) {}

Fixed::Fixed(const int &value) : _rawbits(value * (1 << _bits)) {}

Fixed::Fixed(const float &value) : _rawbits(roundf(value * (1 << _bits))) {}

Fixed::Fixed(const Fixed &copy) : _rawbits(copy.getRawBits()) {}

Fixed& Fixed::operator=(const Fixed &fixed) {
	this->setRawBits(fixed.getRawBits());
	return *this;
}

bool	Fixed::operator>(const Fixed &fixed) const {return this->_rawbits > fixed.getRawBits();}
bool	Fixed::operator<(const Fixed &fixed) const {return this->_rawbits < fixed.getRawBits();}
bool	Fixed::operator>=(const Fixed &fixed) const {return this->_rawbits >= fixed.getRawBits();}
bool	Fixed::operator<=(const Fixed &fixed) const {return this->_rawbits <= fixed.getRawBits();}
bool	Fixed::operator!=(const Fixed &fixed) const {return this->_rawbits != fixed.getRawBits();}
bool	Fixed::operator==(const Fixed &fixed) const {return this->_rawbits == fixed.getRawBits();}
Fixed	Fixed::operator+(const Fixed &fixed) {return this->toFloat() + fixed.toFloat();}
Fixed	Fixed::operator-(const Fixed &fixed) {return this->toFloat() - fixed.toFloat();}
Fixed	Fixed::operator*(const Fixed &fixed) {return this->toFloat() * fixed.toFloat();}
Fixed	Fixed::operator/(const Fixed &fixed) {return this->toFloat() / fixed.toFloat();}

Fixed	Fixed::operator++() {
	this->_rawbits++;
	return this->toFloat();
}

Fixed	Fixed::operator--() {
	this->_rawbits--;
	return this->toFloat();
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	this->_rawbits++;
	return tmp.toFloat();
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	this->_rawbits--;
	return tmp.toFloat();
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
	return this->_rawbits;
}

void Fixed::setRawBits(const int raw) {
	this->_rawbits = raw;
}

float	Fixed::toFloat() const {
	return static_cast<float> (this->getRawBits()) / (1 << this->_bits);
}

int		Fixed::toInt() const {
	return this->getRawBits() / (1 << this->_bits);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return b;
	return a;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return b;
	return a;
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return b;
	return a;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return b;
	return a;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}