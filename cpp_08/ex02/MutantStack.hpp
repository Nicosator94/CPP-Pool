/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:22:52 by niromano          #+#    #+#             */
/*   Updated: 2024/08/21 14:02:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {

	public :

		MutantStack() {}
		MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
		MutantStack& operator=(const MutantStack &mutantstack) {(void)mutantstack; return *this;}
		~MutantStack() {}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
};