/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:09:34 by niromano          #+#    #+#             */
/*   Updated: 2024/06/11 20:11:23 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class Span {

	public :

		Span();
		Span(unsigned int size);
		Span(const Span &copy);
		Span& operator=(const Span &span);
		~Span();
		void addNumber(int newNb);
		int shortestSpan();
		int longestSpan();
		void addMoreNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);

	private :

		std::vector<int> _array;
		unsigned int _size;
};