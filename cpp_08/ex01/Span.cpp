/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:09:22 by niromano          #+#    #+#             */
/*   Updated: 2024/06/11 20:37:49 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <limits>
#include "Span.hpp"

Span::Span() {
	this->_size = 0;
}

Span::Span(unsigned int size) {
	this->_size = size;
}

Span::Span(const Span &copy) {
	this->_array = copy._array;
}

Span& Span::operator=(const Span &span) {
	this->_array = span._array;
	return *this;
}
Span::~Span() {}

void Span::addNumber(int newNb) {
	if (this->_array.size() == this->_size)
		throw std::out_of_range("Not enough place on the span for a new number !");
	this->_array.push_back(newNb);
}

int Span::shortestSpan() {
	if (this->_array.size() < 2)
		throw std::out_of_range("Span too short !");
	std::sort(this->_array.begin(), this->_array.end());
	std::reverse(this->_array.begin(), this->_array.end());
	unsigned int shortestSpan = std::numeric_limits<unsigned int>::max();
	for (std::vector<int>::iterator it = this->_array.begin(); it != this->_array.end() - 1; ++it) {
		unsigned int tmp = *it - *(it + 1);
		if (tmp < shortestSpan)
			shortestSpan = tmp;
	}
	return shortestSpan;
}

int Span::longestSpan() {
	if (this->_array.size() < 2)
		throw std::out_of_range("Span too short !");
	int min = *std::min_element(this->_array.begin(), this->_array.end());
	int max = *std::max_element(this->_array.begin(), this->_array.end());
	return max - min;
}

void Span::addMoreNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	while (start != end) {
		addNumber(*start);
		++start;
	}
}