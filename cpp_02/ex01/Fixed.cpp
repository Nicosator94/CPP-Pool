/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:08 by niromano          #+#    #+#             */
/*   Updated: 2024/04/11 23:46:23 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _rawbits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int &value) : _rawbits(value * (1 << _bits)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float &value) : _rawbits(roundf(value * (1 << _bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : _rawbits(copy.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
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

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}