/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:30:33 by niromano          #+#    #+#             */
/*   Updated: 2024/08/30 23:54:50 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <time.h>
#include <cstdlib>
#include <algorithm>

typedef std::vector<int>::iterator itVec;
typedef std::deque<int>::iterator itDeq;

class PmergeMe {

	public :

		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe& operator=(const PmergeMe &copy);
		~PmergeMe();

		void initContainers(const std::string &str);
		void sort();

	private :

	// ========================================== Vector ==========================================
		void sortVector();
		std::vector<std::pair<int, int> > recursiveSortVector(std::vector<std::pair<int, int> > pairVector);
		std::vector<int> jacobsthalNumberVector(size_t size);
		std::vector<int> sortWithJacobsthalVector(std::vector<std::pair<int, int> > pairVector, std::vector<int> jacobsthalNb);
		void sortWithBinarySearchVector(std::vector<int> remainingNbList);
		std::vector<int>::iterator binarySearchVector(int nb, itVec start, itVec end);
		bool isVectorSorted();
	// ========================================== Deque ==========================================
		void sortDeque();
		std::deque<std::pair<int, int> > recursiveSortDeque(std::deque<std::pair<int, int> > pairDeque);
		std::deque<int> jacobsthalNumberDeque(size_t size);
		std::deque<int> sortWithJacobsthalDeque(std::deque<std::pair<int, int> > pairDeque, std::deque<int> jacobsthalNb);
		void sortWithBinarySearchDeque(std::deque<int> remainingNbList);
		std::deque<int>::iterator binarySearchDeque(int nb, itDeq start, itDeq end);
		bool isDequeSorted();

		std::vector<int> _vector;
		std::deque<int> _deque;

		class Error : public std::exception {
				virtual const char* what() const throw() {return "Error";}
		};
};