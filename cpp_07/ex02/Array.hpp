/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:19:55 by niromano          #+#    #+#             */
/*   Updated: 2024/06/05 14:22:42 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <class T>
class Array {

	public :

		Array() {
			this->_array = new T[];
			this->_size = 0;
		}

		Array(unsigned int size) {
			this->_array = new T[size];
			this->_size = size;
		}

		Array(const Array &copy) {
			this->_size = copy._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = copy._array[i];
		}

		Array& operator=(const Array &array) {
			this->_size = array._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = array._array[i];
			return *this;
		}

		unsigned int size() const {return this->_size;}

		T& operator[](unsigned int idx) const {
			if (idx > this->_size - 1)
				throw OutOfBounds();
			return this->_array[idx];
		}

		~Array() {delete []this->_array;}

		class OutOfBounds : public std::exception {
			const char* what() const throw() {return "Index out of bounds";}
		};

	private :

		T *_array;
		unsigned int _size;
};